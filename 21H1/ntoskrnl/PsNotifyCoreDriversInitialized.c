/*
 * XREFs of PsNotifyCoreDriversInitialized @ 0x140A57FF4
 * Callers:
 *     IopInitializeBootDrivers @ 0x140A56C1C (IopInitializeBootDrivers.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeCodeIntegrityQueryInformation @ 0x1406D8C40 (SeCodeIntegrityQueryInformation.c)
 *     VslConnectSwInterrupt @ 0x140A580D8 (VslConnectSwInterrupt.c)
 *     KeInitAmd64SpecificState @ 0x140A58168 (KeInitAmd64SpecificState.c)
 */

__int64 PsNotifyCoreDriversInitialized()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  if ( !qword_140CFC790 )
  {
    LODWORD(v6) = 8;
    if ( (int)SeCodeIntegrityQueryInformation((__int64)&v6, 8LL, (__int64)&v5) < 0 || (v6 & 0xA200000000LL) == 0 )
      qword_140CFC790 = 1LL;
  }
  ExReleasePushLockEx((ULONG_PTR)&PsAltSystemCallRegistrationLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v1, v2, v3);
  PspPicoRegistrationDisabled = 1;
  qword_140C01640 = (__int64)off_140C00A68;
  qword_140C01648 = 8LL;
  KeInitAmd64SpecificState();
  PspPicoProviderRanges = 0LL;
  memset(&PsKernelRangeList, 0, 0x140uLL);
  *(_OWORD *)&PspKernelRanges = 0LL;
  return VslConnectSwInterrupt(0LL, 0LL);
}
