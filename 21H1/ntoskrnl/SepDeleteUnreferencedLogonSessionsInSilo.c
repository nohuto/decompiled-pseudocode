/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x14091EF2C
 * Callers:
 *     SeShutdownServerSilo @ 0x140917B00 (SeShutdownServerSilo.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     PsDetachSiloFromCurrentThread @ 0x1402E1A10 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402E1A30 (PsAttachSiloToCurrentThread.c)
 *     SepDeleteLogonSessionTrack @ 0x140765CD0 (SepDeleteLogonSessionTrack.c)
 */

struct _KTHREAD *__fastcall SepDeleteUnreferencedLogonSessionsInSilo(struct _LIST_ENTRY *a1)
{
  __int64 v2; // rdi
  struct _LIST_ENTRY *v3; // r12
  __int64 v4; // rsi
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v7; // rbx
  struct _ERESOURCE *v8; // r15
  __int64 i; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KTHREAD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  v3 = PsAttachSiloToCurrentThread(a1);
  v4 = 0LL;
  v5 = 16LL;
  do
  {
    CurrentThread = KeGetCurrentThread();
    v7 = SepLogonSessions;
    --CurrentThread->KernelApcDisable;
    v8 = &SepRmDbLock + (v2 & 3);
    ExAcquireResourceExclusiveLite(v8, 1u);
    for ( i = *(_QWORD *)(v4 + v7); i; i = *(_QWORD *)i )
    {
      if ( *(struct _LIST_ENTRY **)(i + 160) == a1 )
      {
        v10 = *(_QWORD *)(i + 24);
        if ( !v10 || (*(_DWORD *)(i + 32) & 8) == 0 && v10 == 1 )
        {
          v19 = *(_QWORD *)(i + 8);
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
          SepDeleteLogonSessionTrack(&v19, 0);
          v14 = KeGetCurrentThread();
          --v14->KernelApcDisable;
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = SepLogonSessions + 8 * v2;
        }
      }
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v15, v16, v17);
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  return PsDetachSiloFromCurrentThread(v3);
}
