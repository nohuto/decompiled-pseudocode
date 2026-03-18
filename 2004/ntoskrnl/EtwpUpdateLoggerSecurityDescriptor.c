/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x14093DF9C
 * Callers:
 *     EtwpUpdateTrace @ 0x140780C28 (EtwpUpdateTrace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140351244 (ExfAcquireReleasePushLockExclusive.c)
 *     ObDereferenceSecurityDescriptor @ 0x140669000 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140669810 (ObLogSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x14093687C (EtwpEventWriteTemplateSession.c)
 */

__int64 __fastcall EtwpUpdateLoggerSecurityDescriptor(__int64 a1, char *a2)
{
  int v3; // edi
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v3 = ObLogSecurityDescriptor(a2, &v9, 0x10u);
  if ( v3 >= 0 )
  {
    v4 = _InterlockedExchange64((volatile __int64 *)(a1 + 800), (v9 | 0xF) & -(__int64)(v9 != 0));
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    _InterlockedOr(v8, 0);
    if ( (EtwpSecurityLock & 1) != 0 )
      ExfAcquireReleasePushLockExclusive(&EtwpSecurityLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObDereferenceSecurityDescriptor(v4 & 0xFFFFFFFFFFFFFFF0uLL, (v4 & 0xF) + 1);
    if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_CHANGE_SESSION_SD) )
      EtwpEventWriteTemplateSession(v6, &ETW_EVENT_CHANGE_SESSION_SD, a1);
  }
  return (unsigned int)v3;
}
