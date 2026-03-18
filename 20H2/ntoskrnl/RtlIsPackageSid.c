/*
 * XREFs of RtlIsPackageSid @ 0x1405D7EF0
 * Callers:
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x1405D7CC0 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
