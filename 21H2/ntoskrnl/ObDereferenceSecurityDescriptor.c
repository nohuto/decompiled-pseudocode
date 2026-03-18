/*
 * XREFs of ObDereferenceSecurityDescriptor @ 0x140725730
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x1402D5CA8 (IopCompleteUnloadOrDelete.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     ObDeassignSecurity @ 0x1406BBAAC (ObDeassignSecurity.c)
 *     EtwpFreeLoggerContext @ 0x1406D1830 (EtwpFreeLoggerContext.c)
 *     EtwpFreeGuidEntry @ 0x1406D708C (EtwpFreeGuidEntry.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1406DB04C (IopSetDeviceSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1406E14B0 (ObReleaseObjectSecurity.c)
 *     IopGetSetSecurityObject @ 0x14071E8F0 (IopGetSetSecurityObject.c)
 *     ObpDereferenceSecurityDescriptorForObject @ 0x1407228BC (ObpDereferenceSecurityDescriptorForObject.c)
 *     ObSetSecurityDescriptorInfo @ 0x1407255D0 (ObSetSecurityDescriptorInfo.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ExpWnfDeleteNameInstance @ 0x140791CAC (ExpWnfDeleteNameInstance.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1407942E0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1407943B0 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14080BF48 (ObpReferenceSecurityDescriptorSlow.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1409EB878 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall ObDereferenceSecurityDescriptor(__int64 a1, unsigned int a2)
{
  volatile signed __int64 *v3; // rsi
  signed __int64 v4; // rax
  __int64 v5; // r15
  signed __int64 i; // rcx
  signed __int64 v7; // rtt
  struct _KTHREAD *CurrentThread; // rbp
  volatile signed __int64 *v9; // rdi
  volatile signed __int64 *v10; // r14
  __int64 v11; // rax
  volatile signed __int64 *j; // rcx

  v3 = (volatile signed __int64 *)(a1 - 32);
  _m_prefetchw((const void *)(a1 - 32 + 8));
  v4 = *(_QWORD *)(a1 - 32 + 8);
  v5 = a2;
  for ( i = v4 - a2; i > 0; i = v4 - a2 )
  {
    v7 = v4;
    v4 = _InterlockedCompareExchange64(v3 + 1, i, v4);
    if ( v7 == v4 )
      return;
  }
  if ( i )
    __fastfail(0xEu);
  CurrentThread = KeGetCurrentThread();
  v9 = (volatile signed __int64 *)((char *)&ObsSecurityDescriptorCache + 16 * (unsigned __int8)*((_DWORD *)v3 + 4));
  --CurrentThread->KernelApcDisable;
  v10 = v9 + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)v9, 0LL);
  v11 = _InterlockedExchangeAdd64(v3 + 1, -a2) - v5;
  if ( v11 > 0 )
  {
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  else
  {
    if ( v11 )
      __fastfail(0xEu);
    for ( j = (volatile signed __int64 *)*v10; j != v3; j = (volatile signed __int64 *)*j )
      v10 = j;
    *v10 = *v3;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    KeAbPostRelease((ULONG_PTR)v9);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    ExFreePoolWithTag((PVOID)v3, 0x6353624Fu);
  }
}
