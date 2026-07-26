/*
 * XREFs of ndisWmiEnableEvents @ 0x1C00296C4
 * Callers:
 *     ndisWMIDispatch @ 0x1C0010B00 (ndisWMIDispatch.c)
 * Callees:
 *     ?ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z @ 0x1C0008980 (-ndisWmiGetGuid@@YAJPEAPEAU_NDIS_GUID@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@H@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisWmiEnableEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _GUID *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int Flags; // eax
  struct _NDIS_GUID *v17; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0;
  v17 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x43u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      a1);
  ndisWmiGetGuid(&v17, a1, a2, 0);
  if ( v17 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_BIND.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_BIND.Data4;
    if ( !v5 )
      goto LABEL_39;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_UNBIND.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_UNBIND.Data4;
    if ( !v6 )
      goto LABEL_39;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON.Data4;
    if ( !v7 )
      goto LABEL_39;
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF.Data4;
    if ( !v8 )
      goto LABEL_39;
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_ARRIVAL.Data4;
    if ( !v9 )
      goto LABEL_39;
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_ADAPTER_REMOVAL.Data4;
    if ( !v10 )
      goto LABEL_39;
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_REMOVAL.Data4;
    if ( !v11 )
      goto LABEL_39;
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_FILTER_ARRIVAL.Data4;
    if ( !v12 )
      goto LABEL_39;
    v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data1 )
      v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_ON_EX.Data4;
    if ( !v13 )
      goto LABEL_39;
    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data1 )
      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_NDIS_NOTIFY_DEVICE_POWER_OFF_EX.Data4;
    if ( v14 )
    {
      Flags = v17->Flags;
      if ( (Flags & 2) != 0 )
        v17->Flags = Flags | 0x80000000;
      else
        v2 = -1073741808;
    }
    else
    {
LABEL_39:
      v17->Flags |= 0x80000000;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x12u,
        0x44u,
        (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
        a1);
    v2 = -1073741811;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x12u,
      0x45u,
      (struct _GUID *)&WPP_7186f6cd088f325f5824ac053472a623_Traceguids,
      (char)a1,
      v2);
  return v2;
}
