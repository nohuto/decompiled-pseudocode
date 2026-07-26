/*
 * XREFs of ?ndisPnPPortActivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00810E4
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C0080800 (NdisMNetPnPEvent.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00154DC (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C0019130 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C001A210 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C005F9F8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0070B8C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C00810B4 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z @ 0x1C0081DA8 (-ndisRollbackPortActivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PORT@@1@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FB674 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortActivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int v4; // esi
  int v5; // r15d
  struct _NDIS_PORT *Buffer; // rdi
  KIRQL v7; // dl
  __int64 v8; // rcx
  KIRQL v9; // dl
  __int64 v10; // rcx
  unsigned int Flags; // eax
  KIRQL v12; // dl
  __int64 v13; // rcx
  KIRQL v14; // dl
  __int64 v15; // rcx
  unsigned int PortNumber; // edx
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  KIRQL v22; // dl
  __int64 v24; // [rsp+30h] [rbp-D0h]
  KIRQL NewIrql[16]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v26; // [rsp+50h] [rbp-B0h] BYREF

  NewIrql[0] = 0;
  v4 = 0;
  v5 = 0;
  memset(&v26, 0, sizeof(v26));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0xEu,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
  Buffer = (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer;
  if ( Buffer )
  {
    if ( (a1->PnPFlags & 0x80u) == 0 || Buffer->PortCharacteristics.PortNumber )
    {
      while ( 1 )
      {
        PortNumber = Buffer->PortCharacteristics.PortNumber;
        if ( !PortNumber )
          break;
        PortByPortNumber = ndisFindPortByPortNumber(a1, PortNumber);
        v19 = (__int64)PortByPortNumber;
        if ( !PortByPortNumber )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = v18;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x14u,
              (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
              (char)a1,
              v24);
          }
          if ( (byte_1C00E6083 & 0x20) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v19,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              Buffer->PortCharacteristics.PortNumber);
          v4 = -1071448019;
          ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
          v5 = 0;
          goto LABEL_50;
        }
        if ( PortByPortNumber->PortPnPState != NdisPortPnPStateAllocated )
        {
          v4 = -1071448018;
          ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
          v5 = 0;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v24) = Buffer->PortCharacteristics.PortNumber;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x15u,
              (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
              (char)a1,
              v24);
          }
          if ( (byte_1C00E6083 & 0x20) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v20,
              &PnPPortActivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              4,
              Buffer->PortCharacteristics.PortNumber);
          goto LABEL_50;
        }
        ++a1->NumberOfActivePorts;
        PortByPortNumber->PrevPortPnPState = PortByPortNumber->PortPnPState;
        Buffer->NdisReserved = PortByPortNumber;
        PortByPortNumber->PortPnPState = NdisPortPnPStateActivated;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.Header.Type = *(_OWORD *)&Buffer->PortCharacteristics.Header.Type;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.MediaConnectState = *(_OWORD *)&Buffer->PortCharacteristics.MediaConnectState;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.RcvLinkSpeed = *(_OWORD *)&Buffer->PortCharacteristics.RcvLinkSpeed;
        *(_OWORD *)&PortByPortNumber->PortCharacteristics.RcvControlState = *(_OWORD *)&Buffer->PortCharacteristics.RcvControlState;
        if ( (Buffer->PortCharacteristics.Flags & 1) != 0 )
        {
          PortByPortNumber->PortCharacteristics.SendControlState = a1->DefaultSendControlState;
          PortByPortNumber->PortCharacteristics.RcvControlState = a1->DefaultRcvControlState;
          PortByPortNumber->PortCharacteristics.SendAuthorizationState = a1->DefaultSendAuthorizationState;
          PortByPortNumber->PortCharacteristics.RcvAuthorizationState = a1->DefaultRcvAuthorizationState;
        }
        ++v5;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED && *((_WORD *)WPP_GLOBAL_Control + 36) )
        {
          LODWORD(v24) = Buffer->PortCharacteristics.PortNumber;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x17u,
            0x16u,
            (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
            (char)a1,
            v24);
        }
        Buffer = Buffer->Next;
        if ( !Buffer )
          goto LABEL_50;
      }
      v4 = -1071448019;
      ndisRollbackPortActivation(a1, (struct _NDIS_PORT *)a2->NetPnPEvent.Buffer, Buffer);
      v5 = 0;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x13u,
          (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
          a1);
      if ( (byte_1C00E6083 & 0x20) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v21,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
LABEL_50:
      v22 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v22);
      if ( v5 )
      {
        ndisInitializeNetPnPEvent(&v26, 0LL);
        v26.PortNumber = a2->PortNumber;
        v26.NetPnPEvent.Buffer = a2->NetPnPEvent.Buffer;
        v26.NetPnPEvent.BufferLength = a2->NetPnPEvent.BufferLength;
        v26.NetPnPEvent.NetEvent = NetEventPortActivation;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v26);
      }
    }
    else if ( Buffer->Next )
    {
      v9 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v9);
      v4 = -1071448019;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x10u,
          (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
          a1);
      if ( (byte_1C00E6083 & 0x20) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v10,
          &PnPPortActivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          1,
          0);
    }
    else
    {
      Flags = a1->Flags;
      if ( (Flags & 0x10000) != 0 )
      {
        v12 = NewIrql[0];
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v12);
        v4 = -1071448018;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x17u,
            0x11u,
            (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
            a1);
        if ( (byte_1C00E6083 & 0x20) != 0 )
          McTemplateK0jqxqq_EtwWriteTransfer(
            v13,
            &PnPPortActivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            2,
            0);
      }
      else
      {
        a1->Flags = Flags | 0x10000;
        if ( (Buffer->PortCharacteristics.Flags & 1) == 0 )
        {
          a1->DefaultPortSendControlState = Buffer->PortCharacteristics.SendControlState;
          a1->DefaultPortRcvControlState = Buffer->PortCharacteristics.RcvControlState;
          a1->DefaultPortSendAuthorizationState = Buffer->PortCharacteristics.SendAuthorizationState;
          a1->DefaultPortRcvAuthorizationState = Buffer->PortCharacteristics.RcvAuthorizationState;
        }
        ndisIfSetInterfaceState(a1, 1, NewIrql[0]);
        v14 = NewIrql[0];
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(&a1->Lock, v14);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x17u,
            0x12u,
            (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
            a1);
        if ( byte_1C00E6081 < 0 )
          McTemplateK0jqxd_EtwWriteTransfer(
            v15,
            &DefaultPortActivated,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            1);
        ndisMSetMiniportReadyForBinding(a1, 1, Reason_DefaultPortNotActive, RunAsynchronous);
      }
    }
  }
  else
  {
    v7 = NewIrql[0];
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v7);
    v4 = -1073741811;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x17u,
        0xFu,
        (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
        a1);
    if ( (byte_1C00E6083 & 0x20) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        v8,
        &PnPPortActivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v24) = v4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x17u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      (char)a1,
      v24);
  }
  return v4;
}
