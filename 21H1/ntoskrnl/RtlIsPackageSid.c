/*
 * XREFs of RtlIsPackageSid @ 0x140703E30
 * Callers:
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     ObpVerifyAccessToBoundaryEntry @ 0x140703C00 (ObpVerifyAccessToBoundaryEntry.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsPackageSid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
