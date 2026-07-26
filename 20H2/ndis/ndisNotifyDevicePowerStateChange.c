/*
 * XREFs of ndisNotifyDevicePowerStateChange @ 0x1C0014ABC
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0013E3C (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1C008391C (ndisWdfDevicePowerOn.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1C012A270 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x1C012A830 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C0018E48 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     WPP_RECORDER_SF_d @ 0x1C001914C (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C0060108 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

void __fastcall ndisNotifyDevicePowerStateChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  GUID *v4; // r9
  PVOID v5; // rdi
  NTSTATUS v6; // eax
  int v7; // edx
  int v8; // ecx
  NTSTATUS v9; // esi
  GUID *v10; // r9
  PVOID v11; // rdi
  unsigned __int16 *v12; // rcx
  NTSTATUS v13; // eax
  int v14; // edx
  int v15; // ecx
  NTSTATUS v16; // esi
  __int64 v17; // [rsp+30h] [rbp-28h]
  PVOID WnodeEventItem; // [rsp+60h] [rbp+8h] BYREF

  WnodeEventItem = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x3Fu,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)a1,
      a2);
  v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON;
  if ( a2 != 1 )
    v4 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->MiniportName.Length + 2,
    v4,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v5 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    memmove(
      (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14),
      a1->MiniportName.Buffer,
      a1->MiniportName.Length);
    v6 = IoWMIWriteEvent(v5);
    v9 = v6;
    if ( v6 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v7,
          14,
          64,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          v6);
      }
      if ( (byte_1C00E61C1 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v8, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v9, 5, 0);
      ExFreePoolWithTag(v5, 0);
    }
  }
  v10 = &GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX;
  if ( a2 != 1 )
    v10 = &GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX;
  ndisSetupWmiNode(
    a1,
    a1->pAdapterInstanceName,
    a1->MiniportName.Length + 2,
    v10,
    (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
  v11 = WnodeEventItem;
  if ( WnodeEventItem )
  {
    v12 = (unsigned __int16 *)((char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14));
    *v12 = a1->MiniportName.Length;
    memmove(v12 + 1, a1->MiniportName.Buffer, a1->MiniportName.Length);
    v13 = IoWMIWriteEvent(v11);
    v16 = v13;
    if ( v13 < 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v14,
          14,
          65,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          v13);
      }
      if ( (byte_1C00E61C1 & 0x10) != 0 )
        McTemplateK0qqq_EtwWriteTransfer(v15, (unsigned int)&IoWMIWriteEventFailed, (_DWORD)a1 + 4008, v16, 6, 0);
      ExFreePoolWithTag(v11, 0);
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = a2;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x42u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      (char)a1,
      v17);
  }
}
