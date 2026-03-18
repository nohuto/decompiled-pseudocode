/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C004C2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0093F20 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0093F60 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  tagDomLock *DomainLockRef; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  char v8; // di

  if ( qword_1C02526A8 )
    v2 = qword_1C02526A8();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    DomainLockRef = (tagDomLock *)GetDomainLockRef(9LL);
    v8 = 0;
    if ( DomainLockRef == (tagDomLock *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v6, v7);
    if ( tagDomLock::IsLockedExclusive(DomainLockRef) )
      v8 = 1;
    else
      tagDomLock::LockExclusive(DomainLockRef);
    if ( qword_1C02526B0 )
      qword_1C02526B0(a1);
    if ( !v8 )
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)DomainLockRef);
  }
}
