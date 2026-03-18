/*
 * XREFs of PnpCopyResourceList @ 0x1408AF4A0
 * Callers:
 *     PiUpdateDeviceResourceLists @ 0x1408B203C (PiUpdateDeviceResourceLists.c)
 * Callees:
 *     memmove @ 0x140409FC0 (memmove.c)
 *     PnpDetermineResourceListSize @ 0x14073AF4C (PnpDetermineResourceListSize.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
