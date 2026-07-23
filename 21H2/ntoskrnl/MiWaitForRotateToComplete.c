/*
 * XREFs of MiWaitForRotateToComplete @ 0x140251070
 * Callers:
 *     MiUserFault @ 0x1402B2070 (MiUserFault.c)
 * Callees:
 *     MiUnlockFaultWorkingSet @ 0x14020AEBC (MiUnlockFaultWorkingSet.c)
 *     MiUnlockAndDereferenceVadShared @ 0x14027C7C0 (MiUnlockAndDereferenceVadShared.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 */

__int64 __fastcall MiWaitForRotateToComplete(unsigned __int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  _KPROCESS *Process; // r14
  _QWORD *i; // r8
  __int64 v8; // rbx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 SharedVm; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = a2;
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
      if ( (*(_BYTE *)(v4 + 13) & 1) != 0 )
      {
        if ( !_InterlockedIncrement((volatile signed __int32 *)(v8 + 36)) )
          __fastfail(0xEu);
        LOBYTE(a2) = *(_BYTE *)(v4 + 12);
        MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessorsPadding[6], a2);
        --CurrentThread->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v8 + 40, 0LL);
        BYTE1(CurrentThread[1].Queue) |= 0x40u;
        MiUnlockAndDereferenceVadShared((PVOID)v8);
        SharedVm = MiGetSharedVm(&Process[1].ActiveProcessorsPadding[6], v12);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
        *(_DWORD *)(SharedVm + 4) = 0;
      }
      else
      {
        MiUnlockFaultWorkingSet((__int64 *)v4, a2);
        v11 = MiGetSharedVm(&Process[1].ActiveProcessorsPadding[6], v10);
        ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v11);
        *(_DWORD *)(v11 + 4) = 0;
        *(_BYTE *)(v4 + 13) |= 1u;
      }
      goto LABEL_2;
    }
  }
  return v3;
}
