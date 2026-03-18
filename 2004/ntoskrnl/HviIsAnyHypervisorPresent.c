/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403A2D90
 * Callers:
 *     KiRestoreFeatureBits @ 0x140381A60 (KiRestoreFeatureBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A5D64 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403A6030 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403B9A50 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1403CC54C (HvlPhase1Initialize.c)
 *     HvlIsAnyHypervisorPresent @ 0x1404EC6E0 (HvlIsAnyHypervisorPresent.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140516228 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x140563850 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405B9A40 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x14077F23C (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x14099920C (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x1409E1EE4 (VfFilterAttach.c)
 *     KeInitSystem @ 0x140A4495C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4598C (KiIntSteerInit.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A6FDE8 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
