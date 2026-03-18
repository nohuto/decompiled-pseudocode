/*
 * XREFs of PspSendProcessNotificationToJobChain @ 0x14065A560
 * Callers:
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 * Callees:
 *     PspSendJobNotification @ 0x14027A9DC (PspSendJobNotification.c)
 *     PspLockJobConditionally @ 0x14065A8E8 (PspLockJobConditionally.c)
 *     PspLockRootJobFromProcess @ 0x14065A918 (PspLockRootJobFromProcess.c)
 *     PspUnlockJob @ 0x14068AAF0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x14069A198 (PspUnlockJobConditionally.c)
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
