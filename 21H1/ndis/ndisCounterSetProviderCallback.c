/*
 * XREFs of ndisCounterSetProviderCallback @ 0x1C00FE750
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C008EB94 (-ndisPcwEnumerateInstances@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z @ 0x1C00FE7A4 (-ndisPcwCollectData@@YAJPEAU_PCW_BUFFER@@@Z.c)
 *     ?ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C00FEAB4 (-ndisPcwAddCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 *     ?ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z @ 0x1C011EFA4 (-ndisPcwRemoveCounter@@YAJW4_NDIS_COUNTER_SET_ID@@PEAU_PCW_COUNTER_INFORMATION@@@Z.c)
 */

__int64 __fastcall ndisCounterSetProviderCallback(int a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // ecx

  if ( a3 - 1 > 1 )
    return 3221225485LL;
  if ( !a1 )
    return ndisPcwAddCounter(a3);
  v3 = a1 - 1;
  if ( !v3 )
    return ndisPcwRemoveCounter(a3);
  v4 = v3 - 1;
  if ( !v4 )
    return ndisPcwEnumerateInstances(*(PPCW_BUFFER *)(a2 + 24));
  if ( v4 == 1 )
    return ndisPcwCollectData(*(PPCW_BUFFER *)(a2 + 24));
  return 0LL;
}
