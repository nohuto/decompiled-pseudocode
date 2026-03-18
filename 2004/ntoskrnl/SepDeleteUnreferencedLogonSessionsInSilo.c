/*
 * XREFs of SepDeleteUnreferencedLogonSessionsInSilo @ 0x1409201DC
 * Callers:
 *     SeShutdownServerSilo @ 0x140918DB4 (SeShutdownServerSilo.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     SepDeleteLogonSessionTrack @ 0x1407680B4 (SepDeleteLogonSessionTrack.c)
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
  struct _KTHREAD *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

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
          v13 = *(_QWORD *)(i + 8);
          ExReleaseResourceLite(v8);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          SepDeleteLogonSessionTrack(&v13, 0);
          v11 = KeGetCurrentThread();
          --v11->KernelApcDisable;
          ExAcquireResourceExclusiveLite(v8, 1u);
          i = SepLogonSessions + 8 * v2;
        }
      }
    }
    ExReleaseResourceLite(v8);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ++v2;
    v4 += 8LL;
    --v5;
  }
  while ( v5 );
  return PsDetachSiloFromCurrentThread(v3);
}
