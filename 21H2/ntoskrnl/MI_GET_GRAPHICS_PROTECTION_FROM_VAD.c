/*
 * XREFs of MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14027C880
 * Callers:
 *     MiProtectPrivateMemory @ 0x140318750 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiProtectAweRegion @ 0x14054D5A4 (MiProtectAweRegion.c)
 *     MmQueryVirtualMemory @ 0x1406885A0 (MmQueryVirtualMemory.c)
 * Callees:
 *     <none>
 */

int __fastcall MI_GET_GRAPHICS_PROTECTION_FROM_VAD(__int64 a1)
{
  unsigned int v1; // r8d
  int result; // eax
  int v3; // edx

  v1 = *(_DWORD *)(a1 + 48);
  if ( (v1 & 0x1100000) != 0x1100000 )
    return 0;
  v3 = 2048 << ((v1 >> 27) & 7);
  if ( (v1 & 0x2000000) != 0 )
    v3 |= 0x20000u;
  result = v3 | 0x40000;
  if ( (v1 & 0x4000000) == 0 )
    return v3;
  return result;
}
