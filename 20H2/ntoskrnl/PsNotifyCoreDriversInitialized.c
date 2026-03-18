/*
 * XREFs of PsNotifyCoreDriversInitialized @ 0x140A5E3F4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A5D01C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406CEFD0 (SeCodeIntegrityQueryInformation.c)
 *     VslConnectSwInterrupt @ 0x140A5E4D8 (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x140A5E568 (KeInitAmd64SpecificState.c)
 */

__int64 PsNotifyCoreDriversInitialized()
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  if ( !qword_140CFC7A0 )
  {
    LODWORD(v3) = 8;
    if ( (int)SeCodeIntegrityQueryInformation((__int64)&v3, 8LL, (__int64)&v2) < 0 || (v3 & 0xA200000000LL) == 0 )
      qword_140CFC7A0 = 1LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  PspPicoRegistrationDisabled = 1;
  qword_140C01640 = (__int64)off_140C00A68;
  qword_140C01648 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0x140uLL);
  *(_OWORD *)&PspKernelRanges = 0LL;
  return VslConnectSwInterrupt(0LL, 0LL);
}
