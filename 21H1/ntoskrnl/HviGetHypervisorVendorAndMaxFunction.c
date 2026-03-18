/*
 * XREFs of HviGetHypervisorVendorAndMaxFunction @ 0x1405B9320
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x1404EC630 (HvlpHvIdentityInfoCallback.c)
 *     HvlSvmGetSystemCapabilities @ 0x1404F1600 (HvlSvmGetSystemCapabilities.c)
 *     HviGetHardwareFeatures @ 0x1405B92A0 (HviGetHardwareFeatures.c)
 *     HviGetIptFeatures @ 0x1405B9408 (HviGetIptFeatures.c)
 *     HvlQueryDetailInfo @ 0x140889F18 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A2600 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall HviGetHypervisorVendorAndMaxFunction(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 0x40000000LL;
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
