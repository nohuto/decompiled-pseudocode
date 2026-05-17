/*
 * XREFs of _RtlIsPackageSid@4 @ 0x4B2AAF50
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 */

bool __stdcall RtlIsPackageSid(int a1)
{
  return *(_BYTE *)(a1 + 1) >= 2u
      && *(_BYTE *)a1 == 1
      && RtlCompareMemory((const void *)(a1 + 2), &RtlpAppPackageAuthority, 6u) == 6
      && *(_DWORD *)(a1 + 8) == 2;
}
