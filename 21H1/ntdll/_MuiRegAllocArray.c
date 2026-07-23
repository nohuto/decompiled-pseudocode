/*
 * XREFs of _MuiRegAllocArray @ 0x4B2AD7D8
 * Callers:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     __RtlpMuiRegAddNeutralLanguage@12 @ 0x4B2ACADE (__RtlpMuiRegAddNeutralLanguage@12.c)
 *     _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28 (_RtlpLoadInstallLanguageFallback@12.c)
 *     _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF (_RtlpMuiRegConfigMatchesInstalled@28.c)
 *     _RtlpMuiRegLangInfoMatchesSpec@16 @ 0x4B36B990 (_RtlpMuiRegLangInfoMatchesSpec@16.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlULongLongToUInt@12 @ 0x4B2E4CC8 (_RtlULongLongToUInt@12.c)
 */

PVOID __fastcall MuiRegAllocArray(int a1, unsigned int a2)
{
  int v2; // esi
  SIZE_T v4; // [esp-4h] [ebp-Ch]
  int Size; // [esp+4h] [ebp-4h]

  v2 = 0;
  if ( (int)RtlULongLongToUInt(2 * a2, (unsigned __int64)a2 >> 31) >= 0 && Size )
  {
    LODWORD(v4) = Size;
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v4);
  }
  return (PVOID)v2;
}
