/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x14093CD20
 * Callers:
 *     EtwpUpdateTrace @ 0x14077FAB8 (EtwpUpdateTrace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140313394 (ExfAcquireReleasePushLockExclusive.c)
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140614530 (ObLogSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x1409355DC (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, char *a2)
{
  int v3; // edi
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rcx
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v12, 0x10u);
  if ( v3 >= 0 )
  {
    v6 = -v12;
    v7 = _InterlockedExchange64((volatile __int64 *)(a1 + 800), (v12 | 0xF) & -(__int64)(v12 != 0));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v11, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive((ULONG_PTR)&EtwpSecurityLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v4, v5);
    ObDereferenceSecurityDescriptor(v7 & 0xFFFFFFFFFFFFFFF0uLL, (v7 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v9, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
