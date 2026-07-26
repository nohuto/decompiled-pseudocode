/*
 * XREFs of ?ndisSetSystemPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00149E8
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015314 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014000 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014120 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0014870 (-ndisRequestedDevicePowerIrpComplete@@YAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015F34 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z @ 0x1C0015FE4 (-ndisInvokeMiniportSysPowerNotify@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1@Z.c)
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0016038 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0017598 (WPP_RECORDER_SF_LqZ.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C001870C (WPP_RECORDER_SF_qDD_ea_1C001870C.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C00713EC (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0083678 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F8840 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FDCA4 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE_POWER_STATE@@E@Z @ 0x1C012AE18 (-ndisMPowerPolicy@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@1PEAW4_DEVICE.c)
 *     ?ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013971C (-ndisMShutdownMiniport@@_Y2PAGENPNP@@AJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

NTSTATUS __fastcall ndisSetSystemPower(
        _IO_STATUS_BLOCK *Context,
        struct _IO_STACK_LOCATION *a2,
        struct _NDIS_MINIPORT_BLOCK *a3)
{
  enum _SYSTEM_POWER_STATE SystemState; // ebx
  int v4; // r14d
  int *v8; // rcx
  int v9; // edx
  int v10; // ecx
  POWER_STATE v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  int v15; // ecx
  unsigned __int64 Information; // rax
  unsigned __int64 v17; // rax
  _DEVICE_OBJECT *PhysicalDeviceObject; // rcx
  __int64 v19; // [rsp+30h] [rbp-20h]
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+40h] [rbp-10h] BYREF
  POWER_STATE PowerState; // [rsp+88h] [rbp+38h] BYREF

  SystemState = a2->Parameters.Power.State.SystemState;
  v4 = 0;
  PowerState.SystemState = PowerSystemUnspecified;
  HIDWORD(IoStatus.Pointer) = 0;
  a3->WaitWakeSystemState = SystemState;
  v8 = &WPP_RECORDER_INITIALIZED;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (int)a3,
      100,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      SystemState,
      (char)a3,
      (__int64)a3->pAdapterInstanceName);
    v8 = &WPP_RECORDER_INITIALIZED;
  }
  if ( a3->State != NdisMiniportHalted || a3->PnPDeviceState == NdisPnPDeviceStarted )
  {
    if ( SystemState == PowerSystemWorking )
    {
      if ( (a3->PnPFlags & 0x800) == 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            3u,
            0xEu,
            0x66u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            a3);
        ndisPowerSaveStop(a3, 6LL);
      }
      ndisMPowerPolicy(
        a3,
        PowerSystemWorking,
        (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
        (enum _DEVICE_POWER_STATE *)&PowerState,
        0);
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x67u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          a3);
      if ( (byte_1C00E6183 & 4) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v15,
          (unsigned int)&MiniportPowerStates,
          (_DWORD)a3 + 4008,
          (_DWORD)a3 + 4008,
          a3->IfIndex,
          a3->NetLuid.Value,
          1,
          PowerState.SystemState);
      Information = Context[11].Information;
      *(_OWORD *)(Information - 72) = *(_OWORD *)Information;
      *(_OWORD *)(Information - 56) = *(_OWORD *)(Information + 16);
      *(_OWORD *)(Information - 40) = *(_OWORD *)(Information + 32);
      *(_QWORD *)(Information - 24) = *(_QWORD *)(Information + 48);
      *(_BYTE *)(Information - 69) = 0;
      v17 = Context[11].Information;
      *(_QWORD *)(v17 - 16) = ndisSetSystemPowerOnComplete;
      *(_QWORD *)(v17 - 8) = a3;
      *(_BYTE *)(v17 - 69) = -32;
      *(_BYTE *)(Context[11].Information + 3) |= 1u;
      IofCallDriver(a3->NextDeviceObject, (PIRP)Context);
    }
    else
    {
      if ( SystemState <= PowerSystemWorking )
        return v4;
      if ( SystemState > PowerSystemHibernate )
      {
        if ( SystemState == PowerSystemShutdown )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v19) = 6;
            WPP_RECORDER_SF_qL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xEu,
              0x65u,
              (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
              (char)a3,
              v19);
          }
          if ( (byte_1C00E6183 & 4) != 0 )
            McTemplateK0jqxqq_EtwWriteTransfer(
              (_DWORD)v8,
              (unsigned int)&MiniportPowerSystemState,
              (_DWORD)a3 + 4008,
              (_DWORD)a3 + 4008,
              a3->IfIndex,
              a3->NetLuid.Value,
              0,
              6);
          ndisSendSystemPowerStateIndication(a3, PowerSystemShutdown);
          if ( !ndisAllowWakeFromS5 )
            ndisCancelWaitWake(a3);
          ndisPowerSaveStop(a3, 6LL);
          ndisInvokeMiniportSysPowerNotify(
            a3,
            (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
            (enum _SYSTEM_POWER_STATE)((unsigned __int16)a2->Parameters.Read.Length >> 12));
          if ( (a3->DriverHandle->Flags & 1) == 0 )
            ndisMShutdownMiniport(a3);
          ++BYTE3(Context[4].Pointer);
          Context[11].Information += 72LL;
          Context[3].Status = 0;
          return IofCallDriver(a3->NextDeviceObject, (PIRP)Context);
        }
        return v4;
      }
      ndisWaitForKernelObject(&a3->PowerD0CompleteEvent);
      ndisPowerSaveStop(a3, 6LL);
      ndisInvokeMiniportSysPowerNotify(
        a3,
        (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
        (enum _SYSTEM_POWER_STATE)((unsigned __int16)a2->Parameters.Read.Length >> 12));
      if ( (unsigned int)ndisMPowerPolicy(
                           a3,
                           SystemState,
                           (enum _SYSTEM_POWER_STATE)((a2->Parameters.Read.Length >> 8) & 0xF),
                           (enum _DEVICE_POWER_STATE *)&PowerState,
                           0) == -2147483633 )
      {
        Context[3].Status = 0;
        IofCompleteRequest((PIRP)Context, 0);
        return v4;
      }
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_qDD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          104,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          (char)a3,
          SystemState,
          PowerState.SystemState);
      }
      if ( (byte_1C00E6183 & 4) != 0 )
        McTemplateK0jqxqq_EtwWriteTransfer(
          v10,
          (unsigned int)&MiniportPowerStates,
          (_DWORD)a3 + 4008,
          (_DWORD)a3 + 4008,
          a3->IfIndex,
          a3->NetLuid.Value,
          SystemState,
          PowerState.SystemState);
      KeClearEvent(&a3->OpenReadyEvent.Event);
      ndisCancelInitModeTimeoutTimer(a3, 1u);
      ndisPrepForLowPower(a3, (enum _NDIS_DEVICE_POWER_STATE)PowerState.SystemState);
      v11.SystemState = PowerState.SystemState;
      *(_QWORD *)(Context[11].Information - 32) = a3->DeviceObject;
      *(_BYTE *)(Context[11].Information + 3) |= 1u;
      v12 = ndisRequestDeviceLowPower(
              a3,
              PowerState,
              (PREQUEST_POWER_COMPLETE)ndisRequestedDevicePowerIrpComplete,
              Context,
              NdisMEventDx_SystemSleep);
      if ( v12 != 259 )
      {
        PhysicalDeviceObject = a3->PhysicalDeviceObject;
        IoStatus.Status = v12;
        IoStatus.Information = 0LL;
        LOBYTE(v13) = 2;
        ndisRequestedDevicePowerIrpComplete(
          PhysicalDeviceObject,
          v13,
          (unsigned int)v11.SystemState,
          Context,
          &IoStatus);
      }
    }
    return 259;
  }
  ++BYTE3(Context[4].Pointer);
  Context[11].Information += 72LL;
  Context[3].Status = 0;
  return IofCallDriver(a3->NextDeviceObject, (PIRP)Context);
}
