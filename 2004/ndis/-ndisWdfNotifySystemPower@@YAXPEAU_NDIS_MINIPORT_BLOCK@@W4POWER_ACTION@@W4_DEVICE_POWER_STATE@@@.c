/*
 * XREFs of ?ndisWdfNotifySystemPower@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4POWER_ACTION@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C003EA60
 * Callers:
 *     NdisWdfMiniportSetPower @ 0x1C0061DB0 (NdisWdfMiniportSetPower.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0013E3C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C00184FC (WPP_RECORDER_SF_qDD_ea_1C00184FC.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D018 (WPP_RECORDER_SF_qd.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060078 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C007126C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00834F8 (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 *     WPP_RECORDER_SF_DqZ @ 0x1C008420C (WPP_RECORDER_SF_DqZ.c)
 *     ?ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FDAF4 (-ndisCancelInitModeTimeoutTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 */

void __fastcall ndisWdfNotifySystemPower(__int64 a1, int a2, __int32 a3)
{
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  char v6; // di
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]

  v5 = (struct _NDIS_MINIPORT_BLOCK *)a1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      9,
      105,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a2,
      a1,
      *(_QWORD *)(a1 + 3856));
  v6 = 0;
  if ( a2 && a3 == 1 )
  {
    v6 = 1;
    if ( byte_1C00E61C3 < 0 )
      McTemplateK0jqxd_EtwWriteTransfer(
        a1,
        (unsigned int)&PowerWakeUpDevice,
        (_DWORD)v5 + 4008,
        (_DWORD)v5 + 4008,
        v5->IfIndex,
        v5->NetLuid.Value,
        1);
    v5->PnPFlags &= ~0x800u;
    a1 = MEMORY[0xFFFFF78000000014] - v5->LastSystemSleepTime.QuadPart;
    v5->TotalSystemSleepTimeMs += a1 / 10000;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x6Au,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        v5);
  }
  else if ( (unsigned int)(a2 - 4) <= 2 )
  {
    v6 = 6;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v7) = a2;
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x6Cu,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)v5,
        v7);
    }
    if ( (byte_1C00E61C3 & 4) != 0 )
      McTemplateK0jqxqq_EtwWriteTransfer(
        a1,
        (unsigned int)&MiniportPowerSystemState,
        (_DWORD)v5 + 4008,
        (_DWORD)v5 + 4008,
        v5->IfIndex,
        v5->NetLuid.Value,
        6,
        6);
    ndisSendSystemPowerStateIndication(v5, PowerSystemShutdown);
  }
  else
  {
    if ( a2 == 3 )
    {
      v6 = 5;
    }
    else
    {
      if ( a2 != 2 )
        goto LABEL_22;
      v6 = 4;
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v8) = a3;
      WPP_RECORDER_SF_qDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xEu,
        0x6Bu,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)v5,
        a2,
        v8);
    }
    KeClearEvent(&v5->OpenReadyEvent.Event);
    ndisCancelInitModeTimeoutTimer(v5, 1u);
    ndisPrepForLowPowerCommon(v5, (enum _DEVICE_POWER_STATE)a3);
  }
LABEL_22:
  if ( (byte_1C00E61C3 & 4) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      a1,
      (unsigned int)&MiniportPowerStates,
      (_DWORD)v5 + 4008,
      (_DWORD)v5 + 4008,
      v5->IfIndex,
      v5->NetLuid.Value,
      v6,
      a3);
}
