/*
 * XREFs of ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C0025C9C
 * Callers:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C002595C (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C00B1F68 (-ndisIfUpdateInterfaceIsolationNetworkId@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 * Callees:
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0009800 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C000F050 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A3D8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A470 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00257B4 (-ndisIfUpdateFilterIfStack@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002BD7C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1C003D700 (__security_check_cookie.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00B4690 (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceIsolationNetworkIdLocked(
        struct _NDIS_IF_BLOCK *a1,
        const struct _GUID *a2,
        char a3)
{
  __int64 v6; // rcx
  struct _NDIS_IF_NETWORK_BLOCK *Network; // rbp
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v10; // rdi
  __int64 v11; // rax
  char v12; // r14
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // r15
  struct _NDIS_MINIPORT_BLOCK *v14; // rdx
  __int64 v15; // rax
  _LIST_ENTRY *p_NetworkLink; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v19; // rax
  _LIST_ENTRY *v20; // rcx
  struct _NDIS_MINIPORT_BLOCK *v21; // rax
  struct _NDIS_MINIPORT_BLOCK *v22; // rdx
  _GUID NetworkGuid; // [rsp+20h] [rbp-48h]

  v6 = *(_QWORD *)&a1->NetworkGuid.Data1 - *(_QWORD *)&a2->Data1;
  if ( !v6 )
    v6 = *(_QWORD *)a1->NetworkGuid.Data4 - *(_QWORD *)a2->Data4;
  if ( !v6 )
    return 0LL;
  Network = a1->Network;
  if ( Network )
  {
    NetworkBlock = ndisIfFindNetworkBlock(a2);
    v10 = NetworkBlock;
    if ( NetworkBlock )
    {
      if ( (*((_DWORD *)NetworkBlock + 18) & 3) == 0 )
      {
        if ( a1->NetworkIdOverridden && !a3 )
          return 0LL;
        v11 = *((_QWORD *)Network + 6);
        if ( *(struct _NDIS_IF_BLOCK **)(v11 + 1704) == a1 )
        {
          if ( *((_QWORD *)v10 + 6) != v11 )
            return 3221225485LL;
          *(_QWORD *)(v11 + 56) = v10;
          *(_OWORD *)(*((_QWORD *)Network + 6) + 80LL) = *((_OWORD *)v10 + 2);
        }
        if ( a1->ProviderHandle != qword_1C00E6130 || (a1->Flags & 2) == 0 )
          goto LABEL_24;
        v12 = 0;
        NetworkGuid = 0LL;
        if ( a1->IsNdisFilter )
        {
          NetworkGuid = *(_GUID *)(*(_QWORD *)(*(_QWORD *)&a1->Miniport->Reserved4.Length + 4040LL) + 580LL);
        }
        else
        {
          if ( !ndisIfReferenceMiniport(a1, 6u) )
            goto LABEL_24;
          BaseMiniport = a1->Miniport->BaseMiniport;
          if ( ndisMReferenceIfBlock(BaseMiniport, 8u) )
          {
            v12 = 1;
            NetworkGuid = BaseMiniport->IfBlock->NetworkGuid;
            ndisMDereferenceIfBlock(BaseMiniport, MPIFREF_CHIIC);
          }
          ndisIfDereferenceMiniport(a1, v14, 6u);
          if ( !v12 )
            goto LABEL_24;
        }
        v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&NetworkGuid.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&NetworkGuid.Data1 )
          v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)NetworkGuid.Data4;
        if ( !v15 )
        {
LABEL_24:
          p_NetworkLink = &a1->NetworkLink;
          Flink = a1->NetworkLink.Flink;
          if ( Flink->Blink != &a1->NetworkLink
            || (Blink = a1->NetworkLink.Blink, Blink->Flink != p_NetworkLink)
            || (Blink->Flink = Flink,
                Flink->Blink = Blink,
                NETWORKBLOCK_DECREMENT_REF(Network),
                v19 = (_LIST_ENTRY *)((char *)v10 + 56),
                v20 = (_LIST_ENTRY *)*((_QWORD *)v10 + 7),
                v20->Blink != (_LIST_ENTRY *)((char *)v10 + 56)) )
          {
            __fastfail(3u);
          }
          p_NetworkLink->Flink = v20;
          a1->NetworkLink.Blink = v19;
          v20->Blink = p_NetworkLink;
          v19->Flink = p_NetworkLink;
          ++*((_DWORD *)v10 + 19);
          a1->Compartment = (struct _NDIS_IF_COMPARTMENT_BLOCK *)*((_QWORD *)v10 + 6);
          a1->CompartmentId = *(_DWORD *)(*((_QWORD *)v10 + 6) + 16LL);
          a1->Network = v10;
          a1->NetworkGuid = (_GUID)*((_OWORD *)v10 + 2);
          if ( a3 )
            a1->NetworkIdOverridden = 1;
          if ( a1->ProviderHandle == qword_1C00E6130 && (a1->Flags & 2) == 0 )
          {
            v21 = ndisIfReferenceMiniport(a1, 7u);
            if ( v21 )
            {
              ndisIfUpdateFilterIfStack(v21);
              ndisIfDereferenceMiniport(a1, v22, 7u);
            }
          }
          return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
