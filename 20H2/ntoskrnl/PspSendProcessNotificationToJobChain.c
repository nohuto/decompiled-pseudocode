/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x14062EFB4
 * Callers:
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x140322D5C (PspSendJobNotification.c)
 *     PspLockRootJobFromProcess @ 0x140663854 (PspLockRootJobFromProcess.c)
 *     PspLockJobConditionally @ 0x1406638E8 (PspLockJobConditionally.c)
 *     PspUnlockJob @ 0x140665CB0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x14066650C (PspUnlockJobConditionally.c)
 */

__int64 __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v8 = 0LL;
  PspLockRootJobFromProcess(a1, CurrentThread, &v9, &v8);
  for ( i = v9; i; i = *(_QWORD *)(i + 1072) )
  {
    PspLockJobConditionally(i, &v8);
    if ( *(_QWORD *)(i + 456) && ((1 << a2) & *(_DWORD *)(i + 876)) != 0 )
      PspSendJobNotification(i, a2, a3, 0);
    PspUnlockJobConditionally(i, &v8);
  }
  return PspUnlockJob(v8, CurrentThread);
}
