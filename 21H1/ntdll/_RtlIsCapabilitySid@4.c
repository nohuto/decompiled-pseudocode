/*
 * XREFs of _RtlIsCapabilitySid@4 @ 0x4B2D93E0
 * Callers:
 *     _RtlCheckTokenCapability@12 @ 0x4B2EF6F0 (_RtlCheckTokenCapability@12.c)
 * Callees:
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

bool __stdcall RtlIsCapabilitySid(int a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6u) == 6
      && *(_DWORD *)(a1 + 8) == 3;
}
