/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403A5A10
 * Callers:
 *     KiRestoreFeatureBits @ 0x140383D30 (KiRestoreFeatureBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADD1C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403AE290 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403AF7D0 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1403CFB58 (HvlPhase1Initialize.c)
 *     KiIsBranchConfusionPresent @ 0x1403F3180 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1403F33EC (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1403F3468 (KiIsTsaPresent.c)
 *     KiApplyProcessorErrata @ 0x1403F3598 (KiApplyProcessorErrata.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14051B5D8 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x140568D00 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BEFF0 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x140796CFC (HvlPhase0Initialize.c)
 *     KiSetFeatureBits @ 0x14099CB6C (KiSetFeatureBits.c)
 *     VfFilterAttach @ 0x1409E4EF4 (VfFilterAttach.c)
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 *     KeInitSystem @ 0x140A4C33C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4D1CC (KiIntSteerInit.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A73288 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
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
