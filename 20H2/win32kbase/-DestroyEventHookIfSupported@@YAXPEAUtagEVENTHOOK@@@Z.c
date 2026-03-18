/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C00AD530
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C004D690 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C004D6D0 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  PERESOURCE *DomainLockRef; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // di

  if ( qword_1C02506A8 )
    v5 = qword_1C02506A8();
  else
    v5 = -1073741637;
  if ( v5 >= 0 )
  {
    DomainLockRef = (PERESOURCE *)GetDomainLockRef(9LL, a2, a3, a4);
    v11 = 0;
    if ( DomainLockRef == (PERESOURCE *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v9, v10);
    if ( tagDomLock::IsLockedExclusive(DomainLockRef) )
      v11 = 1;
    else
      tagDomLock::LockExclusive(DomainLockRef);
    if ( qword_1C02506B0 )
      qword_1C02506B0(a1);
    if ( !v11 )
      ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  }
}
