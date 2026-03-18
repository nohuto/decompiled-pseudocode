/*
 * XREFs of PnpCopyResourceList @ 0x1408AE180
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x1408B0D1C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x1407393CC (PnpDetermineResourceListSize.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PnpCopyResourceList(_DWORD *Src)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  PVOID PoolWithTag; // rax
  PVOID v5; // rbx

  v2 = PnpDetermineResourceListSize(Src);
  if ( !v2 )
    return 0LL;
  v3 = v2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x75737050u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memmove(PoolWithTag, Src, v3);
  return v5;
}
