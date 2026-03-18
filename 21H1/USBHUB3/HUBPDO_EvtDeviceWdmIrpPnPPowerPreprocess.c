/*
 * XREFs of HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C00162D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B50 (WPP_RECORDER_SF_d.c)
 *     HUBPDO_QueryForD3ColdSupportInAcpi @ 0x1C0016070 (HUBPDO_QueryForD3ColdSupportInAcpi.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess @ 0x1C0016738 (HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess @ 0x1C00169D0 (HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess.c)
 *     HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess @ 0x1C0016D48 (HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess.c)
 *     HUBPDO_DispatchWdmPnpPowerIrpSynchronously @ 0x1C001A454 (HUBPDO_DispatchWdmPnpPowerIrpSynchronously.c)
 *     HUBIDLE_AddEvent @ 0x1C003BAF4 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_PublishBillboardDetails @ 0x1C0078DB0 (HUBPDO_PublishBillboardDetails.c)
 *     HUBPDO_PublishDualRoleFeaturesProperty @ 0x1C007907C (HUBPDO_PublishDualRoleFeaturesProperty.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x1C007CBB8 (HUBMISC_ReportPnPFailureProblem.c)
 *     HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C0081CD4 (HUBREG_UpdateSqmEnumerationFailureCode.c)
 */

__int64 __fastcall HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v3; // rbp
  int Status; // r15d
  int v7; // edi
  unsigned int MinorFunction; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int LowPart; // eax
  int v23; // edi
  _IO_STACK_LOCATION *v24; // rax
  _IO_STACK_LOCATION *v25; // rax
  __int64 v27; // [rsp+28h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0LL;
  Status = a2->IoStatus.Status;
  v7 = 2;
  if ( CurrentStackLocation->MajorFunction == 22 )
  {
    if ( CurrentStackLocation->MinorFunction == 2 && CurrentStackLocation->Parameters.Create.Options == 1 )
    {
      v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                         WdfDriverGlobals,
                         a1,
                         off_1C00660D0)
                     + 24);
      if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4 && *(_DWORD *)(v3 + 2460) == 3 )
      {
        v20 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 688))(
                WdfDriverGlobals,
                a1,
                3221226195LL);
        if ( v20 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
            3u,
            5u,
            0x33u,
            (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
            v20);
        v21 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C00660D0);
        HUBIDLE_AddEvent(v21 + 72, 6008LL, 0LL);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v27) = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 1432LL),
          4u,
          5u,
          0x34u,
          (__int64)&WPP_9f8e321b0e16315429714d1dd54efe91_Traceguids,
          v27);
      }
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      if ( LowPart > 1 )
      {
        *(_DWORD *)(v3 + 2700) = LowPart;
        LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      }
      *(_DWORD *)(v3 + 2460) = LowPart;
      v7 = 1;
    }
    goto LABEL_47;
  }
  if ( CurrentStackLocation->MajorFunction != 27 )
    goto LABEL_47;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 0xC )
  {
    v14 = MinorFunction - 19;
    if ( !v14 )
    {
      HUBPDO_EvtDeviceWdmIrpQueryIdPreprocess(a1);
      goto LABEL_47;
    }
    v15 = v14 - 1;
    if ( !v15 )
    {
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      if ( a2->IoStatus.Information )
      {
        v19 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                a1,
                off_1C00660D0);
        v3 = *(_QWORD *)(v19 + 24);
        if ( *(_DWORD *)(v3 + 2432) )
        {
          HUBREG_UpdateSqmEnumerationFailureCode(*(_QWORD *)(v19 + 24));
          HUBMISC_ReportPnPFailureProblem(a1);
        }
        goto LABEL_18;
      }
      goto LABEL_11;
    }
    v16 = v15 - 3;
    if ( v16 )
    {
      if ( v16 != 2 )
        goto LABEL_47;
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
      HUBPDO_QueryForD3ColdSupportInAcpi(a1);
      v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
              WdfDriverGlobals,
              a1,
              off_1C00660D0);
      v18 = *(_QWORD *)(v17 + 24);
      if ( *(_QWORD *)(v18 + 2640) )
      {
        HUBPDO_PublishBillboardDetails(v17);
        v18 = *(_QWORD *)(v17 + 24);
      }
      if ( (*(_DWORD *)(v18 + 1632) & 0x40000) != 0 )
        HUBPDO_PublishDualRoleFeaturesProperty(v17);
      a2->IoStatus.Status = 0;
      goto LABEL_18;
    }
LABEL_19:
    HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
    goto LABEL_18;
  }
  if ( MinorFunction == 12 )
    return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryDeviceTextPreprocess(a1);
  if ( !CurrentStackLocation->MinorFunction )
    goto LABEL_19;
  v9 = MinorFunction - 1;
  if ( !v9 )
  {
    v3 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                       WdfDriverGlobals,
                       a1,
                       off_1C00660D0)
                   + 24);
    if ( (*(_DWORD *)(v3 + 1644) & 0x4000000) == 0
      || *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                      WdfDriverGlobals,
                      a1,
                      off_1C00660D0)
                  + 512) != 1 )
    {
      goto LABEL_47;
    }
    a2->IoStatus.Status = -1073740537;
    goto LABEL_18;
  }
  v10 = v9 - 1;
  if ( v10 )
  {
    v11 = v10 - 6;
    if ( !v11 )
      return (unsigned int)HUBPDO_EvtDeviceWdmIrpQueryInterfacePreprocess(a1);
    if ( v11 == 3 )
    {
      HUBPDO_DispatchWdmPnpPowerIrpSynchronously(a1);
LABEL_11:
      a2->IoStatus.Status = Status;
LABEL_18:
      v7 = 0;
    }
  }
  else
  {
    *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                  WdfDriverGlobals,
                  a1,
                  off_1C00660D0)
              + 64) = 0LL;
  }
LABEL_47:
  if ( !v7 )
  {
    v13 = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
    return v13;
  }
  v23 = v7 - 1;
  if ( v23 )
  {
    if ( v23 != 1 )
      return (unsigned int)-1073741823;
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
  }
  else
  {
    v24 = a2->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&v24[-1].MajorFunction = *(_OWORD *)&v24->MajorFunction;
    *(_OWORD *)&v24[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v24->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&v24[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v24->Parameters.SetQuota + 6);
    v24[-1].FileObject = v24->FileObject;
    v24[-1].Control = 0;
    v25 = a2->Tail.Overlay.CurrentStackLocation;
    v25[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))HUBPDO_WdmPnpPowerIrpCompletionRoutineForAsynchronousCompletion;
    v25[-1].Context = (void *)v3;
    v25[-1].Control = -32;
  }
  return (unsigned int)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, IRP *))(WdfFunctions_01015 + 272))(
                         WdfDriverGlobals,
                         a1,
                         a2);
}
