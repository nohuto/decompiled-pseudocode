/*
 * XREFs of RtlIsCapabilitySid @ 0x1406FBF2C
 * Callers:
 *     RtlCheckTokenCapability @ 0x140584D20 (RtlCheckTokenCapability.c)
 *     SepFilterToken @ 0x1405D7198 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1406FB890 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCompareMemory @ 0x140405B40 (RtlCompareMemory.c)
 */

bool __fastcall RtlIsCapabilitySid(__int64 a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6uLL) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
