/*
 * XREFs of RtlIsPackageSid @ 0x140633BF0
 * Callers:
 *     SepFilterToken @ 0x140632E90 (SepFilterToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1406339C0 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
