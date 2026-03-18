/*
 * XREFs of MiWaitForRotateToComplete @ 0x14035FBF0
 * Callers:
 *     MiUserFault @ 0x14029F750 (MiUserFault.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14024B570 (MiUnlockAndDereferenceVadShared.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockFaultWorkingSet @ 0x1403541F4 (MiUnlockFaultWorkingSet.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v8; // rbx
  LONG *v10; // rbx
  LONG *SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v5 = a1 >> 12;
  Process = CurrentThread->ApcState.Process;
LABEL_2:
  for ( i = (_QWORD *)Process[1].Affinity.Bitmap[9]; i; i = (_QWORD *)*i )
  {
    v8 = i[1];
    if ( v5 >= (*(unsigned int *)(v8 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 32) << 32))
      && v5 <= (*(unsigned int *)(v8 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v8 + 33) << 32)) )
    {
      if ( (struct _KTHREAD *)i[2] == CurrentThread )
        return v3;
      v3 = 1;
      if ( (*(_BYTE *)(a2 + 13) & 1) != 0 )
      {
        if ( !_InterlockedIncrement((volatile signed __int32 *)(v8 + 36)) )
          __fastfail(0xEu);
        MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], *(_BYTE *)(a2 + 12));
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v8 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x40u;
        MiUnlockAndDereferenceVadShared((char *)v8);
        SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
        ExAcquireSpinLockExclusive(SharedVm);
        SharedVm[1] = 0;
      }
      else
      {
        MiUnlockFaultWorkingSet(a2);
        v10 = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
        ExAcquireSpinLockExclusive(v10);
        v10[1] = 0;
        *(_BYTE *)(a2 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v3;
}
