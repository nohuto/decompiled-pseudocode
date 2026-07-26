/*
 * XREFs of ?ethFindMulticast@@YAEIPEAU_ETH_MULTICAST_WRAPPER@@PEAY05EQEAE@Z @ 0x1C00657C4
 * Callers:
 *     ?EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x1C0064330 (-EthFilterDprIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z.c)
 *     ?ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0064D70 (-ethFilterDprIndicateReceivePacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C0067EB0 (-ndisFIsLoopbackNetBuffer@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEA.c)
 *     ?ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@PEAE3@Z @ 0x1C00AA42C (-ndisMIsLoopbackNetBuffer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER@@PEAU_NET_BUFFER_LIST@@P.c)
 *     ndisMIsLoopbackPacket @ 0x1C00C4DB0 (ndisMIsLoopbackPacket.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ethFindMulticast(
        unsigned int a1,
        struct _ETH_MULTICAST_WRAPPER *a2,
        unsigned __int8 (*a3)[6],
        unsigned __int8 *const a4)
{
  unsigned int v4; // r11d
  __int64 v5; // rax
  unsigned int i; // r10d
  unsigned int v7; // ecx
  unsigned __int16 v8; // cx
  unsigned int v9; // ecx

  v4 = 0;
  v5 = a1 >> 1;
  if ( a1 )
  {
    for ( i = a1 - 1; ; v5 = v4 + ((i - v4 + 1) >> 1) )
    {
      if ( (unsigned int)v5 > i || (unsigned int)v5 < v4 )
        return 0;
      if ( a3 )
      {
        v7 = *(_DWORD *)&(*a3)[6 * v5 + 2];
        if ( v7 > *(_DWORD *)(a4 + 2) )
          goto LABEL_14;
        if ( v7 < *(_DWORD *)(a4 + 2) )
          goto LABEL_13;
        v8 = *(_WORD *)&(*a3)[6 * v5];
      }
      else
      {
        v9 = *(_DWORD *)&a2[v5].MCastAddress[2];
        if ( v9 > *(_DWORD *)(a4 + 2) )
          goto LABEL_14;
        if ( v9 < *(_DWORD *)(a4 + 2) )
          goto LABEL_13;
        v8 = *(_WORD *)a2[v5].MCastAddress;
      }
      if ( v8 <= *(_WORD *)a4 )
      {
        if ( v8 >= *(_WORD *)a4 )
          return 1;
LABEL_13:
        v4 = v5 + 1;
        continue;
      }
LABEL_14:
      if ( !(_DWORD)v5 )
        return 0;
      i = v5 - 1;
    }
  }
  return 0;
}
