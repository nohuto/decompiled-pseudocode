/*
 * XREFs of ?ndisOidPrePortState@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0081794 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

char __fastcall ndisOidPrePortState(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rdi
  char v2; // bl
  __int64 v3; // rsi
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rdx
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  KIRQL v9; // dl
  KIRQL v10; // dl
  __int64 v11; // rcx
  KIRQL v12; // dl
  __int64 v14; // [rsp+30h] [rbp-38h]
  char v15[4]; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v5 = v1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v15 = *(_DWORD *)(v3 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA0u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      *(_DWORD *)v15);
    v5 = *(_QWORD *)a1;
  }
  if ( v5 )
  {
    if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) != 0 )
    {
      *((_DWORD *)a1 + 10) = -1073741637;
    }
    else
    {
      if ( *(_DWORD *)(v3 + 48) < 0x30u )
      {
        *(_DWORD *)(v3 + 52) = 0;
        *(_DWORD *)(v3 + 56) = 48;
        *((_DWORD *)a1 + 10) = -1073676266;
        goto LABEL_17;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK((struct _NDIS_MINIPORT_BLOCK *)v1, &NewIrql);
      v6 = *(_DWORD *)(v3 + 8);
      if ( v6 )
      {
        PortByPortNumber = ndisFindPortByPortNumber((struct _NDIS_MINIPORT_BLOCK *)v1, v6);
        if ( !PortByPortNumber )
        {
          v9 = NewIrql;
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v9);
          *((_DWORD *)a1 + 10) = -1071448019;
          goto LABEL_17;
        }
        if ( PortByPortNumber->PortPnPState != NdisPortPnPStateActivated )
        {
          v10 = NewIrql;
          *(_QWORD *)(v1 + 520) = 0LL;
          KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v10);
          *((_DWORD *)a1 + 10) = -1071448018;
          goto LABEL_17;
        }
        v11 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v11 = 0LL;
        *(_OWORD *)(v11 + 16) = 0LL;
        *(_OWORD *)(v11 + 32) = 0LL;
        *(_DWORD *)v11 = 3146112;
        *(_DWORD *)(v11 + 4) = PortByPortNumber->PortCharacteristics.MediaConnectState;
        *(_QWORD *)(v11 + 8) = PortByPortNumber->PortCharacteristics.XmitLinkSpeed;
        *(_QWORD *)(v11 + 16) = PortByPortNumber->PortCharacteristics.RcvLinkSpeed;
        *(_DWORD *)(v11 + 24) = PortByPortNumber->PortCharacteristics.Direction;
        *(_DWORD *)(v11 + 28) = PortByPortNumber->PortCharacteristics.SendControlState;
        *(_DWORD *)(v11 + 32) = PortByPortNumber->PortCharacteristics.RcvControlState;
        *(_DWORD *)(v11 + 36) = PortByPortNumber->PortCharacteristics.SendAuthorizationState;
        *(_DWORD *)(v11 + 40) = PortByPortNumber->PortCharacteristics.RcvAuthorizationState;
      }
      else
      {
        v7 = *(_QWORD *)(v3 + 40);
        *(_OWORD *)v7 = 0LL;
        *(_OWORD *)(v7 + 16) = 0LL;
        *(_OWORD *)(v7 + 32) = 0LL;
        *(_DWORD *)v7 = 3146112;
        *(_DWORD *)(v7 + 4) = *(_DWORD *)(v1 + 480);
        *(_QWORD *)(v7 + 8) = *(_QWORD *)(v1 + 792);
        *(_QWORD *)(v7 + 16) = *(_QWORD *)(v1 + 800);
        *(_DWORD *)(v7 + 24) = *(_DWORD *)(*(_QWORD *)(v1 + 4040) + 532LL);
        *(_DWORD *)(v7 + 28) = *(_DWORD *)(v1 + 3320);
        *(_DWORD *)(v7 + 32) = *(_DWORD *)(v1 + 3324);
        *(_DWORD *)(v7 + 36) = *(_DWORD *)(v1 + 3328);
        *(_DWORD *)(v7 + 40) = *(_DWORD *)(v1 + 3332);
      }
      v12 = NewIrql;
      *(_QWORD *)(v1 + 520) = 0LL;
      KeReleaseSpinLock((PKSPIN_LOCK)(v1 + 96), v12);
      *((_DWORD *)a1 + 10) = 0;
      *(_DWORD *)(v3 + 52) = 48;
      *(_DWORD *)(v3 + 56) = 48;
    }
    v2 = 1;
  }
LABEL_17:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = *(_DWORD *)(v3 + 8);
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xA1u,
      (struct _GUID *)&WPP_93ff7000ef23321ff506bf3726c88bdb_Traceguids,
      v1,
      v14);
  }
  return v2;
}
