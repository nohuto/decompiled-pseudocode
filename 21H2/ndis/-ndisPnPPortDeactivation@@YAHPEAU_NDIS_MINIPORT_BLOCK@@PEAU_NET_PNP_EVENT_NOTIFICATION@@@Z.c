/*
 * XREFs of ?ndisPnPPortDeactivation@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C0081FC8
 * Callers:
 *     NdisMNetPnPEvent @ 0x1C0081060 (NdisMNetPnPEvent.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00156AC (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C0019300 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060308 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C00713EC (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0081914 (-ndisFindPortByPortNumber@@YAPEAU_NDIS_PORT_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z @ 0x1C00826E4 (-ndisRollbackPortDeactivation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAKI@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C00FB824 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

__int64 __fastcall ndisPnPPortDeactivation(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  unsigned int v2; // r14d
  unsigned int v5; // edi
  const struct _GUID *v6; // rcx
  unsigned int *Buffer; // r15
  unsigned int v8; // esi
  unsigned __int64 *p_Lock; // rcx
  KIRQL v10; // dl
  __int64 v11; // rcx
  unsigned int Flags; // eax
  KIRQL v13; // dl
  __int64 v14; // rcx
  __int64 v15; // rcx
  unsigned int *v16; // r12
  struct _NDIS_PORT_BLOCK *PortByPortNumber; // rax
  __int16 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // r12d
  KIRQL v23; // dl
  __int64 v25; // [rsp+30h] [rbp-D0h]
  KIRQL NewIrql[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh]
  struct _NET_PNP_EVENT_NOTIFICATION v28; // [rsp+50h] [rbp-B0h] BYREF

  v2 = 0;
  NewIrql[0] = 0;
  v27 = 0;
  v5 = 0;
  memset(&v28, 0, sizeof(v28));
  v6 = &WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x18u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      a1);
    v6 = &WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids;
  }
  Buffer = (unsigned int *)a2->NetPnPEvent.Buffer;
  v8 = a2->NetPnPEvent.BufferLength >> 2;
  if ( Buffer && v8 )
  {
    NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, NewIrql);
    if ( (a1->PnPFlags & 0x80u) == 0 || *Buffer )
    {
      v16 = Buffer;
      while ( *v16 )
      {
        PortByPortNumber = ndisFindPortByPortNumber(a1, *v16);
        if ( !PortByPortNumber )
        {
          v5 = -1071448019;
          ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
          v27 = 0;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v25) = Buffer[v2];
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Eu,
              (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
              (char)a1,
              v25);
          }
          if ( (byte_1C00E6184 & 0x40) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v20,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              3,
              Buffer[v2]);
          goto LABEL_43;
        }
        if ( PortByPortNumber->PortPnPState != NdisPortPnPStateActivated )
        {
          v5 = -1071448018;
          ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
          v27 = 0;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v25) = Buffer[v2];
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Fu,
              (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
              (char)a1,
              v25);
          }
          if ( (byte_1C00E6184 & 0x40) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v19,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              7,
              Buffer[v2]);
          goto LABEL_43;
        }
        ++v27;
        --a1->NumberOfActivePorts;
        PortByPortNumber->PrevPortPnPState = PortByPortNumber->PortPnPState;
        PortByPortNumber->PortPnPState = NdisPortPnPStateAllocated;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
          && *((_WORD *)WPP_GLOBAL_Control + 36) != v18 )
        {
          LODWORD(v25) = *v16;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            5u,
            0x17u,
            0x20u,
            (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
            (char)a1,
            v25);
        }
        ++v2;
        ++v16;
        if ( v2 >= v8 )
          goto LABEL_43;
      }
      v5 = -1071448019;
      ndisRollbackPortDeactivation(a1, (unsigned int *)a2->NetPnPEvent.Buffer, v2);
      v27 = 0;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0x17u,
          0x1Du,
          (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
          a1);
      if ( (byte_1C00E6184 & 0x40) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v21,
          &PnPPortDeactivationFailed,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          5,
          0);
LABEL_43:
      v22 = v27;
      v23 = NewIrql[0];
      a1->MiniportThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v23);
      if ( v22 )
      {
        ndisInitializeNetPnPEvent(&v28, 0LL);
        v28.PortNumber = a2->PortNumber;
        v28.NetPnPEvent.Buffer = a2->NetPnPEvent.Buffer;
        v28.NetPnPEvent.BufferLength = a2->NetPnPEvent.BufferLength;
        v28.NetPnPEvent.NetEvent = NetEventPortDeactivation;
        ndisDevicePnPEventNotifyFiltersAndAllTransports(a1, &v28);
      }
    }
    else
    {
      p_Lock = &a1->Lock;
      if ( v8 <= 1 )
      {
        Flags = a1->Flags;
        a1->MiniportThread = 0LL;
        v13 = NewIrql[0];
        if ( (Flags & 0x10000) != 0 )
        {
          a1->Flags &= ~0x10000u;
          KeReleaseSpinLock(p_Lock, v13);
          ndisMSetMiniportReadyForBinding(a1, 0, Reason_DefaultPortNotActive, RunSynchronous);
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x17u,
              0x1Cu,
              (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
              a1);
          if ( byte_1C00E6181 < 0 )
            McTemplateK0jqxd_EtwWriteTransfer(
              v15,
              &DefaultPortDeactivated,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              1);
        }
        else
        {
          KeReleaseSpinLock(p_Lock, NewIrql[0]);
          v5 = -1071448018;
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x17u,
              0x1Bu,
              (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
              a1);
          if ( (byte_1C00E6184 & 0x40) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              v14,
              &PnPPortDeactivationFailed,
              &a1->InterfaceGuid,
              (__int64)&a1->InterfaceGuid,
              a1->IfIndex,
              a1->NetLuid.Value,
              6,
              0);
        }
      }
      else
      {
        v10 = NewIrql[0];
        a1->MiniportThread = 0LL;
        KeReleaseSpinLock(p_Lock, v10);
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x17u,
            0x1Au,
            (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
            a1);
        if ( (byte_1C00E6184 & 0x40) != 0 )
          McTemplateK0jqxqq_EtwWriteTransfer(
            v11,
            &PnPPortDeactivationFailed,
            &a1->InterfaceGuid,
            (__int64)&a1->InterfaceGuid,
            a1->IfIndex,
            a1->NetLuid.Value,
            5,
            0);
        v5 = -1071448019;
      }
    }
  }
  else
  {
    v5 = -1073741811;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x17u,
        0x19u,
        (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
        a1);
    if ( (byte_1C00E6184 & 0x40) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        (__int64)v6,
        &PnPPortDeactivationFailed,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        a1->IfIndex,
        a1->NetLuid.Value,
        0,
        0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x17u,
      0x21u,
      (struct _GUID *)&WPP_65e9e77539343ef7812b37eb9b149dbe_Traceguids,
      a1);
  return v5;
}
