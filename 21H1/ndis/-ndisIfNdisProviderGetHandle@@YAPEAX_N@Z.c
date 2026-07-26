/*
 * XREFs of ?ndisIfNdisProviderGetHandle@@YAPEAX_N@Z @ 0x1C002BE7C
 * Callers:
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C0105778 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_L.c)
 * Callees:
 *     <none>
 */

void *__fastcall ndisIfNdisProviderGetHandle(char a1)
{
  void *result; // rax

  result = qword_1C00E6000;
  if ( a1 )
    return qword_1C00E5FF8;
  return result;
}
