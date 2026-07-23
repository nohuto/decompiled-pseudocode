/*
 * XREFs of EtwpUpdateLoggerSecurityDescriptor @ 0x1409416FC
 * Callers:
 *     EtwpUpdateTrace @ 0x140796F68 (EtwpUpdateTrace.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140241564 (ExfAcquireReleasePushLockExclusive.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140654CD0 (ObLogSecurityDescriptor.c)
 *     EtwpEventWriteTemplateSession @ 0x14093A04C (EtwpEventWriteTemplateSession.c)
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
