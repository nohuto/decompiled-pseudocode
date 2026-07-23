/*
 * XREFs of HviGetImplementationLimits @ 0x1405BF2C0
 * Callers:
 *     HvlpSelectLpSet @ 0x1404F3494 (HvlpSelectLpSet.c)
 *     HvlpSelectVpSet @ 0x1404F38FC (HvlpSelectVpSet.c)
 *     HvlQueryDetailInfo @ 0x14088E488 (HvlQueryDetailInfo.c)
 *     KiPerformGroupConfiguration @ 0x140A4EDCC (KiPerformGroupConfiguration.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403AE390 (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetImplementationLimits(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741829LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
