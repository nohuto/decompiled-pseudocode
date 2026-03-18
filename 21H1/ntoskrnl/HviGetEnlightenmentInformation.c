/*
 * XREFs of HviGetEnlightenmentInformation @ 0x1403A9C30
 * Callers:
 *     HvlGetImplementedPhysicalBits @ 0x1403A99E0 (HvlGetImplementedPhysicalBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A9A34 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpDetermineEnlightenments @ 0x1404F4964 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x140563200 (PopIsRunningInVm.c)
 *     HvlQueryDetailInfo @ 0x140889F18 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A9CB0 (HviIsHypervisorMicrosoftCompatible.c)
 */

__int64 __fastcall HviGetEnlightenmentInformation(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = HviIsHypervisorMicrosoftCompatible(a1, a2, a3, a4);
  if ( (_BYTE)result )
  {
    _RAX = 1073741828LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
