/*
 * XREFs of ?ndisQueryPower@@_Y2PAGENPNP@@AJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A578
 * Callers:
 *     ?ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0016540 (-ndisPowerDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?ndisPowerIrpWorker@@YAXPEAX@Z @ 0x1C0082AC0 (-ndisPowerIrpWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006E8C (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0014FB8 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C00154DC (-ndisDevicePnPEventNotifyFiltersAndAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVEN.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018924 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0018D70 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z @ 0x1C0019130 (-ndisInitializeNetPnPEvent@@YAXPEAU_NET_PNP_EVENT_NOTIFICATION@@PEAU_KEVENT@@@Z.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D058 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003B6C8 (WPP_RECORDER_SF_qdL.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0066C98 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0070B8C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012AE18 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 */

NTSTATUS __fastcall ndisQueryPower(PIRP Irp, struct _IO_STACK_LOCATION *a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  int v6; // edx
  __int64 Options; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v10; // edi
  __int64 v11; // rcx
  int SetMiniportDeviceState; // eax
  __int64 v13; // rcx
  char v14; // di
  _IO_STACK_LOCATION *v15; // rax
  _IO_STACK_LOCATION *v16; // rax
  __int64 v17; // [rsp+30h] [rbp-128h]
  char v18[4]; // [rsp+30h] [rbp-128h]
  char v19[4]; // [rsp+38h] [rbp-120h]
  enum _DEVICE_POWER_STATE v20[4]; // [rsp+50h] [rbp-108h] BYREF
  struct _NET_PNP_EVENT_NOTIFICATION v21; // [rsp+60h] [rbp-F8h] BYREF

  v20[0] = PowerDeviceUnspecified;
  memset(&v21, 0, sizeof(v21));
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x26u,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      a3);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  Options = a2->Parameters.Create.Options;
  if ( (_DWORD)Options == 1 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    return IofCallDriver(a3->NextDeviceObject, Irp);
  }
  if ( (_DWORD)Options )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      *(_DWORD *)v19 = a2->Parameters.Read.ByteOffset.LowPart;
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        0xEu,
        0x27u,
        (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
        (char)a3,
        Options,
        *(_DWORD *)v19);
    }
    if ( (byte_1C00E6082 & 0x40) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        Options,
        &InvalidSystemPowerState,
        &a3->InterfaceGuid,
        (__int64)&a3->InterfaceGuid,
        a3->IfIndex,
        a3->NetLuid.Value,
        a2->Parameters.Create.Options,
        a2->Parameters.Read.ByteOffset.LowPart);
    v10 = -1073741808;
  }
  else
  {
    v10 = ndisMPowerPolicy(
            a3,
            a2->Parameters.Power.State.SystemState,
            (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
            v20,
            1u);
    if ( !ndisIsMiniportStarted(a3) || a3->PnPDeviceState != NdisPnPDeviceStarted || v10 == -2147483633 )
    {
      Irp->IoStatus.Status = 0;
      IofCompleteRequest(Irp, 0);
      return 0;
    }
    if ( v10 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v18 = a2->Parameters.Read.ByteOffset.LowPart;
        WPP_RECORDER_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x28u,
          (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
          (char)a3,
          *(_DWORD *)v18);
      }
      if ( (byte_1C00E6081 & 8) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v11,
          &QueryPowerFailed,
          &a3->InterfaceGuid,
          (__int64)&a3->InterfaceGuid,
          a3->IfIndex,
          a3->NetLuid.Value,
          v10,
          1,
          a2->Parameters.Read.ByteOffset.LowPart);
    }
    else
    {
      ndisInitializeNetPnPEvent(&v21, 0LL);
      v21.NetPnPEvent.BufferLength = 4;
      v21.NetPnPEvent.Buffer = v20;
      v21.NetPnPEvent.NetEvent = NetEventQueryPower;
      if ( (unsigned int)ndisDevicePnPEventNotifyFiltersAndAllTransports(a3, &v21)
        && *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x29u,
          (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
          a3);
      }
      if ( (a3->PnPFlags & 0x20) != 0 )
      {
        SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a3, v20[0], 0xFD010102, 0);
        v14 = SetMiniportDeviceState;
        if ( SetMiniportDeviceState )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x2Au,
              (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
              a3);
          if ( (byte_1C00E6081 & 8) != 0 )
            McTemplateK0jqxddq_EtwWriteTransfer(
              v13,
              &QueryPowerFailed,
              &a3->InterfaceGuid,
              (__int64)&a3->InterfaceGuid,
              a3->IfIndex,
              a3->NetLuid.Value,
              v14,
              2,
              0);
        }
      }
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      v15 = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v15[-1].MajorFunction = *(_OWORD *)&v15->MajorFunction;
      *(_OWORD *)&v15[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v15->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v15[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v15->Parameters.ReadWriteConfig.Length;
      v15[-1].FileObject = v15->FileObject;
      v15[-1].Control = 0;
      a3->QueryPowerDeviceState = v20[0];
      a3->PendingQueryPowerIrp = Irp;
      IoAcquireRemoveLockEx(&a3->RemoveLock, Irp, File, 1u, 0x20u);
      v16 = Irp->Tail.Overlay.CurrentStackLocation;
      v16[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisQueryPowerCompleteSystemState;
      v16[-1].Context = a3;
      v16[-1].Control = -32;
      IofCallDriver(a3->NextDeviceObject, Irp);
      v10 = 259;
    }
  }
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( v10 < 0 )
  {
    Irp->IoStatus.Status = v10;
    IofCompleteRequest(Irp, 0);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x2Bu,
      (struct _GUID *)&WPP_dab0da38b1e3331efa7a05b6175d8ddc_Traceguids,
      (char)a3,
      v17);
  }
  return v10;
}
