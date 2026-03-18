/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403C03A0
 * Callers:
 *     KiRestoreFeatureBits @ 0x14038D164 (KiRestoreFeatureBits.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403BF790 (HviIsHypervisorVendorMicrosoft.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403BFE70 (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403C0360 (HviGetHypervisorInterface.c)
 *     HvlPhase1Initialize @ 0x1403DF080 (HvlPhase1Initialize.c)
 *     KiIsBranchConfusionPresent @ 0x140418BD8 (KiIsBranchConfusionPresent.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14057132C (KiDetectAmdNonArchSsbdSupport.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140647B74 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x140824AA0 (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x140A56CDC (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x140A9E12C (VfFilterAttach.c)
 *     KiIntSteerDetermineSteeringEnabled @ 0x140B02040 (KiIntSteerDetermineSteeringEnabled.c)
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 *     KeInitSystem @ 0x140B03800 (KeInitSystem.c)
 *     KiComputeDispatchInterruptCost @ 0x140B24E48 (KiComputeDispatchInterruptCost.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140B30458 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
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
