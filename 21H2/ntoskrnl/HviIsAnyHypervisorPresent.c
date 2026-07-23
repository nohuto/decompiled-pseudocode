/*
 * XREFs of HviIsAnyHypervisorPresent @ 0x1403A5B60
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADE6C (KiDetectHardwareSpecControlFeatures.c)
 *     HviGetHypervisorInterface @ 0x1403AE3E0 (HviGetHypervisorInterface.c)
 *     HviIsHypervisorVendorMicrosoft @ 0x1403AF940 (HviIsHypervisorVendorMicrosoft.c)
 *     HvlPhase1Initialize @ 0x1403CFCC8 (HvlPhase1Initialize.c)
 *     KiIsBranchConfusionPresent @ 0x1403F31D0 (KiIsBranchConfusionPresent.c)
 *     KiIsTsaMitigationSupported @ 0x1403F343C (KiIsTsaMitigationSupported.c)
 *     KiIsTsaPresent @ 0x1403F34B8 (KiIsTsaPresent.c)
 *     KiApplyProcessorErrata @ 0x1403F3594 (KiApplyProcessorErrata.c)
 *     KiDetectAmdNonArchSsbdSupport @ 0x14051B818 (KiDetectAmdNonArchSsbdSupport.c)
 *     PopIsRunningInVm @ 0x140568F40 (PopIsRunningInVm.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BF220 (HviGetHypervisorVendorAndMaxFunction.c)
 *     HvlPhase0Initialize @ 0x140796EFC (HvlPhase0Initialize.c)
 *     VfFilterAttach @ 0x1409E5EF4 (VfFilterAttach.c)
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 *     KeInitSystem @ 0x140A4D33C (KeInitSystem.c)
 *     KiIntSteerInit @ 0x140A4E1CC (KiIntSteerInit.c)
 *     InitializeDynamicPartitioningPolicy @ 0x140A74288 (InitializeDynamicPartitioningPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
