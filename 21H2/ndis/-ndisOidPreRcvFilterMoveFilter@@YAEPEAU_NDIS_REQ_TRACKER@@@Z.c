/*
 * XREFs of ?ndisOidPreRcvFilterMoveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00869C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0033810 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C003BB24 (-ndisGetOidSourceHandle@@YAPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0077E54 (-ndisIovFindVPortByVPortId@@YAPEAU_NDIS_VPORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KKPEAK@Z @ 0x1C00856E8 (-ndisFindReceiveFilterByFilterId@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@KK.c)
 */

char __fastcall ndisOidPreRcvFilterMoveFilter(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r8
  char v2; // bp
  struct _NDIS_MINIPORT_BLOCK *v3; // rdi
  __int64 v5; // rsi
  struct _NDIS_MINIPORT_BLOCK *v6; // rcx
  struct _NDIS_OID_REQUEST *v7; // r8
  _NDIS_SRIOV_CAPABILITIES *SriovCurrentCapabilities; // rax
  unsigned int v9; // r14d
  _BYTE *OidSourceHandle; // rax
  _BYTE *v11; // r15
  __int64 v12; // r8
  unsigned int *v13; // r9
  struct _NDIS_MINIPORT_BLOCK *ReceiveFilterByFilterId; // rax
  KIRQL v15; // dl
  struct _NDIS_MINIPORT_BLOCK *v16; // r14
  _NDIS_MINIPORT_BLOCK *PrimaryMiniport; // rcx
  unsigned int v18; // edx
  KIRQL NewIrql; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  v2 = 1;
  v3 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  NewIrql = 0;
  v5 = *(_QWORD *)(v1 + 40);
  if ( *(_DWORD *)(v1 + 4) == 1 )
  {
    *((_DWORD *)a1 + 10) = 0;
    if ( *(_DWORD *)(v1 + 48) >= 0x18u )
    {
      if ( !v3 )
        return 0;
      if ( ndisIovNicSwitchWithoutIovSupported(v3) && !v3->PFBlock )
        goto LABEL_13;
      if ( !ndisIovNicSwitchWithoutIovSupported(v6) )
      {
        SriovCurrentCapabilities = v3->SriovCurrentCapabilities;
        if ( !SriovCurrentCapabilities || (SriovCurrentCapabilities->SriovCapabilities & 3) != 3 || !v3->PFBlock )
          goto LABEL_13;
      }
      v9 = *(_DWORD *)(v5 + 4);
      if ( !v9 )
        goto LABEL_13;
      OidSourceHandle = ndisGetOidSourceHandle(v7);
      v11 = OidSourceHandle;
      if ( !OidSourceHandle || *OidSourceHandle != 18 )
      {
        *((_DWORD *)a1 + 10) = -1073741637;
        return v2;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v3, &NewIrql);
      ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(v3, v9, v12, v13);
      v15 = NewIrql;
      v3->MiniportThread = 0LL;
      v16 = ReceiveFilterByFilterId;
      KeReleaseSpinLock(&v3->Lock, v15);
      if ( !v16 )
        goto LABEL_13;
      if ( (_BYTE *)v16->ShortRef.SpinLock == v11
        && (PrimaryMiniport = v16->PrimaryMiniport) != 0LL
        && *(_DWORD *)(v5 + 8) == LODWORD(v16->FirstPendingPacket)
        && *(_QWORD *)(v5 + 12) == PrimaryMiniport->PnPFlags
        && (v18 = *(_DWORD *)(v5 + 20), *(_DWORD *)(v5 + 12) != v18)
        && ndisIovFindVPortByVPortId(v3, v18) )
      {
        return 0;
      }
      else
      {
LABEL_13:
        *((_DWORD *)a1 + 10) = -1073741811;
      }
    }
    else
    {
      *(_DWORD *)(v1 + 56) = 24;
      *((_DWORD *)a1 + 10) = -1073676268;
    }
  }
  else
  {
    *((_DWORD *)a1 + 10) = -1073741637;
  }
  return v2;
}
