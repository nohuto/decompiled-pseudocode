/*
 * XREFs of HviGetHardwareFeatures @ 0x140647B00
 * Callers:
 *     HalpWdatDiscover @ 0x1403BE570 (HalpWdatDiscover.c)
 *     HvlSvmGetSystemCapabilities @ 0x140548D80 (HvlSvmGetSystemCapabilities.c)
 *     HvlpDetermineEnlightenments @ 0x14054C1A4 (HvlpDetermineEnlightenments.c)
 *     HvipApertureDetectParameters @ 0x1405F2D28 (HvipApertureDetectParameters.c)
 *     HvlQueryDetailInfo @ 0x140930DA8 (HvlQueryDetailInfo.c)
 *     HvlQueryVsmProtectionInfo @ 0x140930EC4 (HvlQueryVsmProtectionInfo.c)
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 *     HalpInterruptInitDiscard @ 0x140AF819C (HalpInterruptInitDiscard.c)
 *     HalpIommuInitDiscard @ 0x140AF9238 (HalpIommuInitDiscard.c)
 *     EtwpTraceSystemInitialization @ 0x140AFAD4C (EtwpTraceSystemInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     HviGetHypervisorVendorAndMaxFunction @ 0x140647B74 (HviGetHypervisorVendorAndMaxFunction.c)
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
