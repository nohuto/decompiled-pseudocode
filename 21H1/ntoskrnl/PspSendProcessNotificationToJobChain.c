/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x14065DED8
 * Callers:
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x1403144BC (PspSendJobNotification.c)
 *     PspUnlockJobConditionally @ 0x1405F0C88 (PspUnlockJobConditionally.c)
 *     PspUnlockJob @ 0x140612970 (PspUnlockJob.c)
 *     PspLockJobConditionally @ 0x14065E260 (PspLockJobConditionally.c)
 *     PspLockRootJobFromProcess @ 0x14065E290 (PspLockRootJobFromProcess.c)
 */

void __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v7 = 0LL;
  PspLockRootJobFromProcess(a1, CurrentThread, &v8, &v7);
  for ( i = v8; i; i = *(_QWORD *)(i + 1072) )
  {
    PspLockJobConditionally(i, &v7);
    if ( *(_QWORD *)(i + 456) && ((1 << a2) & *(_DWORD *)(i + 876)) != 0 )
      PspSendJobNotification(i, a2, a3, 0);
    PspUnlockJobConditionally(i, &v7);
  }
  PspUnlockJob(v7, (__int64)CurrentThread);
}
