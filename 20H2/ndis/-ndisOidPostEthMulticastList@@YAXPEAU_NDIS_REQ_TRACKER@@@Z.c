/*
 * XREFs of ?ndisOidPostEthMulticastList@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0030080
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003016C (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0030294 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

void __fastcall ndisOidPostEthMulticastList(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportHandle; // rax
  struct _NDIS_OPEN_BLOCK *v3; // r14
  struct _NDIS_MINIPORT_BLOCK *v5; // r15
  _X_FILTER *EthDB; // rbp
  unsigned __int8 *MiniportOldMCastAddressBuf; // rdx
  unsigned int MiniportOldNumAddresses; // esi

  v1 = *((_QWORD *)a1 + 4);
  MiniportHandle = 0LL;
  v3 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v1 + 4) != 1 )
    return;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  if ( *(_QWORD *)a1 )
  {
    EthDB = v5->EthDB;
    if ( (*(_DWORD *)(v1 + 88) & 0x10000) != 0 )
    {
      *((_DWORD *)a1 + 10) = 0;
    }
    else if ( *((_DWORD *)a1 + 10) )
    {
      MiniportOldNumAddresses = EthDB->MiniportOldNumAddresses;
      MiniportOldMCastAddressBuf = (unsigned __int8 *)EthDB->MiniportOldMCastAddressBuf;
      goto LABEL_13;
    }
    MiniportOldMCastAddressBuf = *(unsigned __int8 **)(v1 + 40);
    MiniportOldNumAddresses = *(_DWORD *)(v1 + 48) / 6u;
LABEL_13:
    memmove(EthDB->MiniportMCastAddressBuf, MiniportOldMCastAddressBuf, 6 * MiniportOldNumAddresses);
    EthDB->MiniportOldNumAddresses = 0;
    EthDB->MiniportNumAddresses = MiniportOldNumAddresses;
    ndisIfGetRcvAddressFromMiniport(v5);
    MiniportHandle = v5;
  }
  if ( v3 )
  {
    ndisPostOpenSetMulticastList(v3, (struct _NDIS_OID_REQUEST *)v1, *((_DWORD *)a1 + 10));
    MiniportHandle = v3->MiniportHandle;
  }
  if ( !MiniportHandle )
    MiniportHandle = *(struct _NDIS_MINIPORT_BLOCK **)(*((_QWORD *)a1 + 2) + 32LL);
  if ( *(_UNKNOWN **)(v1 + 104) == &ndisIntReqRestore )
    MiniportHandle->EthDB->NextOldNumAddresses = 0;
}
