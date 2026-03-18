/*
 * XREFs of RtlIsCapabilitySid @ 0x14070D810
 * Callers:
 *     RtlCheckTokenCapability @ 0x140580C40 (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x1407030D4 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x1403FE5E0 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
