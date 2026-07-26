/*
 * XREFs of ndisMEmitTraceRundown @ 0x1C00AA9EC
 * Callers:
 *     ?ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z @ 0x1C00AA814 (-ndisEnableWppTracingCallback@@YAXPEBU_GUID@@_JEKE@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006E48 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C0016EF0 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_qqZ @ 0x1C0024D94 (WPP_RECORDER_SF_qqZ.c)
 *     ndisAoAcTraceRundown @ 0x1C00AA66C (ndisAoAcTraceRundown.c)
 *     WPP_RECORDER_SF_DDDDD @ 0x1C00AAF44 (WPP_RECORDER_SF_DDDDD.c)
 */

void __fastcall ndisMEmitTraceRundown(struct _NDIS_MINIPORT_BLOCK *a1)
{
  int v2; // r9d
  _NDIS_FILTER_BLOCK *LowestFilter; // rdi
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi
  int v5; // [rsp+20h] [rbp-48h]
  char v6[8]; // [rsp+30h] [rbp-38h]
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_qqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0xEu,
      (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids,
      (char)a1,
      (char)a1->DriverHandle,
      &a1->pAdapterInstanceName->Length);
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_DDDDD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        a1->DriverHandle->MajorNdisVersion,
        (a1->NetLuid.Value >> 24) & 0xFFFFFF,
        v2,
        v5,
        a1->DriverHandle->MajorNdisVersion,
        a1->DriverHandle->MinorNdisVersion,
        a1->IfIndex,
        *((_WORD *)&a1->NetLuid.Info + 3),
        BYTE3(a1->NetLuid.Value));
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v6 = a1->PnPDeviceState;
        WPP_RECORDER_SF_Dd(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x10u,
          (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids,
          a1->State,
          *(_QWORD *)v6);
      }
    }
  }
  if ( a1->AoAc )
    ndisAoAcTraceRundown(a1);
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  LowestFilter = a1->LowestFilter;
  if ( LowestFilter )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0x12u,
        (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids);
      LowestFilter = a1->LowestFilter;
    }
    while ( LowestFilter )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x13u,
          (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids,
          (char)LowestFilter,
          (char)LowestFilter->FilterDriver,
          &LowestFilter->FilterFriendlyName->Length);
      LowestFilter = LowestFilter->HigherFilter;
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0x11u,
      (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids);
  }
  OpenQueue = a1->OpenQueue;
  if ( OpenQueue )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        1u,
        2u,
        0x15u,
        (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids);
      OpenQueue = a1->OpenQueue;
    }
    while ( OpenQueue )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          1u,
          2u,
          0x16u,
          (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids,
          (char)OpenQueue,
          (char)OpenQueue->ProtocolHandle,
          &OpenQueue->ProtocolHandle->Name.Length);
      OpenQueue = OpenQueue->MiniportNextOpen;
    }
  }
  else if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      1u,
      2u,
      0x14u,
      (struct _GUID *)&WPP_25e5797846033f51a7e0c7e9f4ac6ec9_Traceguids);
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
}
