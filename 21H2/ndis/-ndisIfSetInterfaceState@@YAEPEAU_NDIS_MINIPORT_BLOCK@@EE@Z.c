/*
 * XREFs of ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A3E0
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C00237A4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ?ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FF9C (-ndisIfUpdateInterfaceOnInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@PEAU_NDIS_M.c)
 *     ?ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C003AE28 (-ndisUpdateOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0081944 (-ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C0083A9C (ndisWdfDevicePowerOn.c)
 *     ?ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009DCA0 (-ndisOidPreSetPortAuthentication@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0139A28 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z @ 0x1C001941C (-ndisNsiScheduleIfBlockRodChangeNotification@@YAJPEAU_NDIS_IF_BLOCK@@PEAEKK@Z.c)
 *     ?ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019E4C (-ndisIsDefaultPortStateOperational@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A5E8 (-ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 *     ?ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C001A680 (-ndisMReferenceIfBlock@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 */

char __fastcall ndisIfSetInterfaceState(struct _NDIS_MINIPORT_BLOCK *a1, char a2, unsigned __int8 a3)
{
  unsigned int OperStatusFlags; // edi
  char v4; // bp
  KIRQL v5; // si
  struct _NDIS_IF_BLOCK *v8; // rax
  struct _NDIS_IF_BLOCK *v9; // rdi
  _NET_IF_OPER_STATUS OperStatus; // ecx
  void (__fastcall *p_ifOperStatus)(_NDIS_WORK_ITEM *, void *); // r13
  _NET_IF_OPER_STATUS ifOperStatus; // r9d
  void (__fastcall *p_MediaConnectState)(_NDIS_WORK_ITEM *, void *); // r15
  _NET_IF_MEDIA_CONNECT_STATE MediaConnectState; // r12d
  _NET_IF_MEDIA_CONNECT_STATE v15; // r10d
  unsigned __int8 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  OperStatusFlags = a1->OperStatusFlags;
  v4 = 0;
  a1->OperStatusFlags = 0;
  v5 = a3;
  if ( a1->State == NdisMiniportHalted )
    goto LABEL_4;
  if ( a1->MediaConnectState != MediaConnectStateConnected )
  {
    a1->OperStatusFlags = 2;
LABEL_4:
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
    goto LABEL_5;
  }
  if ( ndisIsDefaultPortStateOperational(a1) )
  {
    if ( (unsigned int)(a1->State - 5) <= 1 )
    {
      a1->OperStatusFlags |= 4u;
      a1->OperStatus = NET_IF_OPER_STATUS_DORMANT;
    }
    else
    {
      *(_QWORD *)&a1->OperStatus = 1LL;
      if ( (OperStatusFlags & 8) != 0 )
        a1->OperStatusFlags = 0x1000000;
    }
  }
  else
  {
    a1->OperStatusFlags |= 1u;
    a1->OperStatus = NET_IF_OPER_STATUS_DOWN;
  }
LABEL_5:
  v8 = ndisMReferenceIfBlock(a1, MPIFREF_SETISTATE);
  v9 = v8;
  if ( v8 )
  {
    OperStatus = a1->OperStatus;
    p_ifOperStatus = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))&v8->ifOperStatus;
    ifOperStatus = v8->ifOperStatus;
    p_MediaConnectState = (void (__fastcall *)(_NDIS_WORK_ITEM *, void *))&v8->MediaConnectState;
    MediaConnectState = v8->MediaConnectState;
    v8->ifOperStatus = OperStatus;
    v8->ifAdminStatus = a1->AdminStatus;
    v15 = a1->MediaConnectState;
    v8->MediaConnectState = v15;
    v8->MediaDuplexState = a1->MediaDuplexState;
    v8->RcvLinkSpeed = a1->RcvLinkSpeed;
    v8->XmitLinkSpeed = a1->XmitLinkSpeed;
    v8->ifOperStatusFlags = a1->OperStatusFlags;
    if ( ifOperStatus != OperStatus )
    {
      v4 = 1;
      if ( a2 )
      {
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v5);
        ndisNsiScheduleIfBlockRodChangeNotification(v9, p_ifOperStatus, 8, 536);
        NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v17);
        v15 = v9->MediaConnectState;
        v5 = v17;
      }
    }
    if ( MediaConnectState != v15 && a2 )
    {
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v5);
      ndisNsiScheduleIfBlockRodChangeNotification(v9, p_MediaConnectState, 4, 644);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &v17);
    }
    ndisMDereferenceIfBlock(a1, MPIFREF_SETISTATE);
  }
  return v4;
}
