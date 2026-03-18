/*
 * XREFs of HviGetEnlightenmentInformation @ 0x1403A84E0
 * Callers:
 *     HvlGetImplementedPhysicalBits @ 0x1403A8110 (HvlGetImplementedPhysicalBits.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8164 (KiDetectHardwareSpecControlFeatures.c)
 *     HvlpDetermineEnlightenments @ 0x1404F8824 (HvlpDetermineEnlightenments.c)
 *     PopIsRunningInVm @ 0x140567230 (PopIsRunningInVm.c)
 *     HvlQueryDetailInfo @ 0x140890D88 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x1403A8560 (HviIsHypervisorMicrosoftCompatible.c)
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
