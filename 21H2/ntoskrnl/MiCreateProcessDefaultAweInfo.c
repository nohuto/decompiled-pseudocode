/*
 * XREFs of MiCreateProcessDefaultAweInfo @ 0x1408D5C20
 * Callers:
 *     MiAllocateUserPhysicalPages @ 0x1408D4E48 (MiAllocateUserPhysicalPages.c)
 *     MiCreateUserPhysicalView @ 0x1408D5D08 (MiCreateUserPhysicalView.c)
 * Callees:
 *     MiLockAweVadsExclusive @ 0x14054D240 (MiLockAweVadsExclusive.c)
 *     MiUnlockAweVadsExclusive @ 0x14054E238 (MiUnlockAweVadsExclusive.c)
 *     MiAllocateAweInfo @ 0x1408D4CE0 (MiAllocateAweInfo.c)
 *     MiDeleteAweInfo @ 0x1408D5FA4 (MiDeleteAweInfo.c)
 */

__int64 __fastcall MiCreateProcessDefaultAweInfo(KPROCESSOR_MODE a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  unsigned __int64 v5; // r15
  __int64 v6; // rbx
  __int64 result; // rax
  int v8; // edi
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v5 = Process[1].ActiveProcessorsPadding[8];
  v6 = *(_QWORD *)(v5 + 392);
  v9 = v6;
  if ( !v6 )
  {
    result = MiAllocateAweInfo(0LL, 1, 0, a1, &v9);
    if ( (int)result < 0 )
      return result;
    v8 = 0;
    MiLockAweVadsExclusive((__int64)CurrentThread);
    v6 = v9;
    if ( !*(_QWORD *)(Process[1].ActiveProcessorsPadding[8] + 392) )
    {
      *(_QWORD *)(v5 + 392) = v9;
      v8 = 1;
    }
    MiUnlockAweVadsExclusive((__int64)CurrentThread);
    if ( !v8 )
    {
      MiDeleteAweInfo(KeGetCurrentThread()->ApcState.Process, v9);
      v6 = *(_QWORD *)(Process[1].ActiveProcessorsPadding[8] + 392);
    }
  }
  *a2 = v6;
  return 0LL;
}
