/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403A5150
 * Callers:
 *     KiRestoreFeatureBits @ 0x140383740 (KiRestoreFeatureBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8164 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403A85B0 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BBED0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1403CF1E8 (HvlPhase1Initialize.c)
 *     KiIsBranchConfusionPresent @ 0x1403F1CE4 (KiIsBranchConfusionPresent.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x140519BA4 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x140567230 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BD5A0 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x14078C780 (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x14099F24C (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x1409E7F04 (VfFilterAttach.c)
 *     PoInitSystem @ 0x140A41DE0 (PoInitSystem.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4BC2C (KiIntSteerInit.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A76308 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
