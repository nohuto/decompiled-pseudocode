/*
 * XREFs of MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14022C130
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiQueryAddressState @ 0x1402B2B40 (MiQueryAddressState.c)
 *     MiProtectAweRegion @ 0x14054B864 (MiProtectAweRegion.c)
 *     MmQueryVirtualMemory @ 0x140621F60 (MmQueryVirtualMemory.c)
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
