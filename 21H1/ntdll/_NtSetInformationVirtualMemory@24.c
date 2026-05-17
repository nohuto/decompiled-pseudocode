/*
 * XREFs of _NtSetInformationVirtualMemory@24 @ 0x4B2F4360
 * Callers:
 *     _LdrpInitializeNode@4 @ 0x4B2D16BE (_LdrpInitializeNode@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlpGuardGrantSuppressedCallAccess@8 @ 0x4B363C51 (_RtlpGuardGrantSuppressedCallAccess@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetInformationVirtualMemory(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return Wow64SystemServiceCall();
}
