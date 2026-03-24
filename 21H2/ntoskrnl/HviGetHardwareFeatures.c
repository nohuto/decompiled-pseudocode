/*
 * XREFs of HviGetHardwareFeatures @ 0x1405BEF70
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F7060 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA3C4 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x140594784 (HvipApertureDetectParameters.c)
 *     HviIsIommuInUse @ 0x1405BF180 (HviIsIommuInUse.c)
 *     HvlQueryDetailInfo @ 0x14088E328 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x14088E444 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitDiscard @ 0x140A39AE8 (HalpIommuInitDiscard.c)
 *     EtwpTraceSystemInitialization @ 0x140A428C8 (EtwpTraceSystemInitialization.c)
 *     HalpInterruptInitDiscard @ 0x140A72AD4 (HalpInterruptInitDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BEFF0 (HviGetHypervisorVendorAndMaxFunction.c)
 */

__int64 __fastcall HviGetHardwareFeatures(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF

  v10 = 0LL;
  HviGetHypervisorVendorAndMaxFunction(&v10, a2, a3, a4);
  _RAX = 1073741830LL;
  if ( (unsigned int)v10 < 0x40000006 )
  {
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  else
  {
    __asm { cpuid }
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 4) = _RBX;
    *(_DWORD *)(a1 + 8) = _RCX;
    *(_DWORD *)(a1 + 12) = _RDX;
  }
  return result;
}
