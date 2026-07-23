/*
 * XREFs of EtwpCovSampCaptureQueueApc @ 0x1405AF070
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1405AF408 (EtwpCovSampCaptureSample.c)
 * Callees:
 *     KeInitializeApc @ 0x140266E00 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x14027E260 (KeInsertQueueApc.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140414300 (memset.c)
 *     KeIsThreadRunning @ 0x140513294 (KeIsThreadRunning.c)
 *     KeTryToInsertQueueApc @ 0x14051AA50 (KeTryToInsertQueueApc.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF390 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1405AF73C (EtwpCovSampLookasidePop.c)
 */

__int64 __fastcall EtwpCovSampCaptureQueueApc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v2; // rbp
  __int64 v3; // r13
  int v4; // r14d
  int v5; // r15d
  unsigned int v7; // edi
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = qword_140C198C8;
  v4 = 0;
  v5 = 0;
  if ( CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1)
    || CurrentThread->SuspendCount
    || (CurrentThread->MiscFlags & 0x4000) == 0 )
  {
    v7 = -1073741637;
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
      return (unsigned int)-1073740008;
    v4 = 1;
    v8 = (*(_QWORD *)(v3 + 8) >> 4) & 0x1FFLL;
    v9 = ((unsigned int)*(_QWORD *)(v3 + 8) >> 13) & 0x3FFFF;
    _BitScanReverse(&v10, v9);
    v11 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v10 - 2) + 8LL * (v9 ^ (1 << v10)) + 8);
    v12 = EtwpCovSampLookasidePop(v3, v11 + 8 * (v8 + 2));
    v2 = v12;
    if ( !v12 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8 * v8 + 308));
      v7 = -1073741670;
LABEL_24:
      _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
      return v7;
    }
    v13 = v12 + 56;
    KeInitializeApc(
      v12 + 56,
      (__int64)CurrentThread,
      0,
      (__int64)EtwpCovSampCaptureApc,
      (__int64)EtwpCovSampCaptureApcRundown,
      (__int64)EtwpCovSampCaptureApc,
      0,
      v3);
    *(_QWORD *)(v2 + 120) = 0LL;
    *(_DWORD *)(v2 + 144) = MEMORY[0xFFFFF78000000320];
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql <= 2u )
    {
      if ( CurrentIrql < 2u )
      {
        v15 = KeGetCurrentThread();
        --v15->KernelApcDisable;
        v5 = 1;
      }
      if ( !KeInsertQueueApc(v13, a1, 0LL, 0) )
      {
        v7 = -1073741823;
        goto LABEL_19;
      }
    }
    else if ( !KeTryToInsertQueueApc(v13, a1, 0LL) )
    {
      if ( (CurrentThread->MiscFlags & 0x4000) != 0 )
        KeIsThreadRunning((__int64)CurrentThread);
      v7 = -1073741823;
      goto LABEL_21;
    }
    v4 = 0;
    v2 = 0LL;
    v7 = 0;
  }
LABEL_19:
  if ( v5 )
    KeLeaveCriticalRegion();
LABEL_21:
  if ( v2 )
  {
    v16 = qword_140C198C8;
    memset((void *)(v2 + 56), 0, 0x58uLL);
    v17 = *(_QWORD *)(v2 + 48);
    *(_DWORD *)(v2 + 144) = 0;
    EtwpCovSampCaptureReleaseToLookaside(v16, v17, v2);
  }
  if ( v4 )
    goto LABEL_24;
  return v7;
}
