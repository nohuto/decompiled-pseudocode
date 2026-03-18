/*
 * XREFs of ?DestroyEventHookIfSupported@@YAXPEAUtagEVENTHOOK@@@Z @ 0x1C003F850
 * Callers:
 *     <none>
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C0067ED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0067F10 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall DestroyEventHookIfSupported(struct tagEVENTHOOK *a1)
{
  int v2; // eax
  __int64 v3; // rcx
  tagDomLock *DomainLockRef; // rbx
  char v5; // di

  if ( qword_1C0258668 )
    v2 = qword_1C0258668();
  else
    v2 = -1073741637;
  if ( v2 >= 0 )
  {
    DomainLockRef = (tagDomLock *)GetDomainLockRef(9LL);
    v5 = 0;
    if ( DomainLockRef == (tagDomLock *)&gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
    if ( tagDomLock::IsLockedExclusive(DomainLockRef) )
      v5 = 1;
    else
      tagDomLock::LockExclusive(DomainLockRef);
    if ( qword_1C0258670 )
      qword_1C0258670(a1);
    if ( !v5 )
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)DomainLockRef);
  }
}
