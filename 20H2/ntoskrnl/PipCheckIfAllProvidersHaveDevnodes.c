/*
 * XREFs of PipCheckIfAllProvidersHaveDevnodes @ 0x14073D220
 * Callers:
 *     PipProcessRebuildPowerRelationsQueue @ 0x14073AD94 (PipProcessRebuildPowerRelationsQueue.c)
 * Callees:
 *     PiGetProviderList @ 0x1407361A4 (PiGetProviderList.c)
 *     PipIsDeviceReadyForPowerRelations @ 0x14073AF78 (PipIsDeviceReadyForPowerRelations.c)
 *     PiEnumerateProviderListEntry @ 0x1408A035C (PiEnumerateProviderListEntry.c)
 */

char __fastcall PipCheckIfAllProvidersHaveDevnodes(__int64 a1)
{
  __int64 v1; // rcx
  __int64 *ProviderList; // rbx
  __int64 *v3; // r11
  __int64 **v5; // r11
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  ProviderList = PiGetProviderList(v1);
  v3 = (__int64 *)*ProviderList;
  if ( (__int64 *)*ProviderList == ProviderList )
    return 1;
  while ( 1 )
  {
    PiEnumerateProviderListEntry(v3, &v6, 0LL);
    if ( !PipIsDeviceReadyForPowerRelations(v6) )
      break;
    v3 = *v5;
    if ( v3 == ProviderList )
      return 1;
  }
  return 0;
}
