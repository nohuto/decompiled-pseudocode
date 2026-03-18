/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403A2600
 * Callers:
 *     KiRestoreFeatureBits @ 0x140381220 (KiRestoreFeatureBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A9A34 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403A9D00 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403AF360 (HviIsHypervisorVendorMicrosoft.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140515BD8 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x140563200 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405B9320 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x14077FA4C (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x1409981AC (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x1409E1E84 (VfFilterAttach.c)
 *     InitBootProcessor @ 0x140A37A74 (InitBootProcessor.c)
 *     PoInitSystem @ 0x140A3BEEC (PoInitSystem.c)
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A40168 (KiIntSteerInit.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A6F3C4 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool HviIsAnyHypervisorPresent()
{
  char v1; // r8

  _RAX = 1LL;
  v1 = 0;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    return (_DWORD)_RAX != 1986945624;
  }
  return v1;
}
