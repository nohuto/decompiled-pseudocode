/*
 * XREFs of EtwpCovSampCaptureQueueApc @ 0x1406362D0
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x140636520 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeInsertQueueApc @ 0x1402ED9E0 (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     memset @ 0x140435E00 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x140460DBA (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x140460E30 (EtwpCovSampLookasidePop.c)
 *     KeIsThreadRunning @ 0x14056B1E4 (KeIsThreadRunning.c)
 *     KeTryToInsertQueueApc @ 0x140570750 (KeTryToInsertQueueApc.c)
 */

__int64 __fastcall EtwpCovSampCaptureQueueApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  int v2; // r15d
  __int64 v3; // r13
  int v5; // r14d
  unsigned int v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rbx
  __int64 v10; // rsi
  PSLIST_ENTRY v11; // rax
  PSLIST_ENTRY v12; // rbp
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v15; // rax
  __int64 v16; // rbx
  __int64 Next; // rdx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  v3 = qword_140C15D88;
  v5 = 1;
  if ( CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1)
    || CurrentThread->SuspendCount
    || (CurrentThread->MiscFlags & 0x4000) == 0 )
  {
    return (unsigned int)-1073741637;
  }
  if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
  {
    v7 = ((unsigned int)*(_QWORD *)(v3 + 8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v8, v7);
    v9 = ((unsigned int)*(_QWORD *)(v3 + 8) >> 4) & 0x1FF;
    v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v8 - 2) + 8LL * (v7 ^ (1 << v8)) + 8);
    v11 = EtwpCovSampLookasidePop(v3, v10 + 8 * (v9 + 2));
    v12 = v11;
    if ( !v11 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v10 + 8 * v9 + 308), 1u);
      v6 = -1073741670;
      goto LABEL_23;
    }
    v13 = (__int64)(&v11[3].Next + 1);
    KeInitializeApc(
      (__int64)(&v11[3].Next + 1),
      (__int64)CurrentThread,
      0,
      (__int64)EtwpCovSampCaptureApc,
      (__int64)EtwpCovSampCaptureApcRundown,
      (__int64)EtwpCovSampCaptureApc,
      0,
      v3);
    *((_QWORD *)&v12[7].Next + 1) = 0LL;
    LODWORD(v12[9].Next) = MEMORY[0xFFFFF78000000320];
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        v2 = 1;
      }
      if ( !KeInsertQueueApc(v13, a1, 0LL, 0) )
      {
        v6 = -1073741823;
        goto LABEL_18;
      }
    }
    else if ( !KeTryToInsertQueueApc(v13, a1) )
    {
      if ( (CurrentThread->MiscFlags & 0x4000) != 0 )
        KeIsThreadRunning((__int64)CurrentThread);
      v6 = -1073741823;
      goto LABEL_21;
    }
    v5 = 0;
    v12 = 0LL;
    v6 = 0;
LABEL_18:
    if ( v2 )
      KeLeaveCriticalRegion();
    if ( !v12 )
    {
LABEL_22:
      if ( !v5 )
        return v6;
LABEL_23:
      _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
      return v6;
    }
LABEL_21:
    v16 = qword_140C15D88;
    memset(&v12[3].Next + 1, 0, 0x58uLL);
    Next = (__int64)v12[3].Next;
    LODWORD(v12[9].Next) = 0;
    EtwpCovSampCaptureReleaseToLookaside(v16, Next, v12);
    goto LABEL_22;
  }
  return (unsigned int)-1073740008;
}
