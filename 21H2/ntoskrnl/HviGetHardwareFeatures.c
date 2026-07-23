/*
 * XREFs of HviGetHardwareFeatures @ 0x1405BF1A0
 * Callers:
 *     HvlSvmGetSystemCapabilities @ 0x1404F6FE0 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x1404FA344 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1405949B4 (HvipApertureDetectParameters.c)
 *     HviIsIommuInUse @ 0x1405BF3B0 (HviIsIommuInUse.c)
 *     HvlQueryDetailInfo @ 0x14088E488 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x14088E5A4 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitDiscard @ 0x140A3AAE8 (HalpIommuInitDiscard.c)
 *     EtwpTraceSystemInitialization @ 0x140A438C8 (EtwpTraceSystemInitialization.c)
 *     HalpInterruptInitDiscard @ 0x140A73AD4 (HalpInterruptInitDiscard.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x1405BF220 (HviGetHypervisorVendorAndMaxFunction.c)
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
