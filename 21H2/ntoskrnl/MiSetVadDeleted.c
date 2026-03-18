/*
 * XREFs of MiSetVadDeleted @ 0x14030FC20
 * Callers:
 *     MiDeleteVad @ 0x1407BC0B0 (MiDeleteVad.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlockVadCore @ 0x1403106A4 (MiUnlockVadCore.c)
 *     MiLockVadCore @ 0x1403106E0 (MiLockVadCore.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

char __fastcall MiSetVadDeleted(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  ULONG_PTR v4; // rbp
  __int64 v5; // rdx
  unsigned __int8 v6; // di
  struct _KTHREAD *v7; // rdi
  __int64 SessionId; // r8
  char *p_Process; // rbx
  __int64 v10; // rdx
  int v11; // r8d
  $CEA84C04E3712D858E5667A507841A2A *v12; // rax

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  ExAcquirePushLockExclusiveEx(v4, 0LL);
  v6 = MiLockVadCore(a1, v5);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                     + 284));
  _InterlockedOr((volatile signed __int32 *)(a1 + 48), 4u);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[28]
                                                       + 284));
  MiUnlockVadCore(a1, v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v4);
  v7 = KeGetCurrentThread();
  if ( v4 - qword_140C50630 < 0x8000000000LL )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v7->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  _disable();
  p_Process = (char *)&v7[1].Process;
  v10 = 0LL;
  do
  {
    if ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) == (v4 & 0x7FFFFFFFFFFFFFFCLL)
      && p_Process[18]
      && (*(_DWORD *)p_Process & 1) == 0
      && *((_DWORD *)p_Process + 2) == (_DWORD)SessionId )
    {
      p_Process[18] = 0;
      if ( *(__int64 *)p_Process < 0 )
      {
        *p_Process |= 2u;
        _enable();
        KiAbEntryRemoveFromTree(p_Process, v10, SessionId);
        _disable();
      }
      v11 = *((_DWORD *)p_Process + 22);
      *((_DWORD *)p_Process + 22) = 0;
      p_Process[17] = 0;
      *(_QWORD *)p_Process = 0LL;
      LOBYTE(v12) = p_Process[16];
      v7->AbEntrySummary |= 1 << (char)v12;
      _enable();
      if ( v11 )
        LOBYTE(v12) = KiAbThreadRemoveBoostsSlow((ULONG_PTR)v7, v4, v11);
      goto LABEL_14;
    }
    v10 = (unsigned int)(v10 + 1);
    p_Process += 96;
  }
  while ( (unsigned int)v10 < 6 );
  LODWORD(v12) = *((_DWORD *)&v7->0 + 1);
  if ( ((unsigned int)v12 & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v7, v4, (unsigned int)SessionId, 0LL);
  _enable();
LABEL_14:
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v12 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  return (char)v12;
}
