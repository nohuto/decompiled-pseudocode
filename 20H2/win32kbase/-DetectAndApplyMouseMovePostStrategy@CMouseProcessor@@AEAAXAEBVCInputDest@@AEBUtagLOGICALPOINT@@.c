/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0033488
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00330E0 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IHHPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C000E65C (-wil_details_FeatureReporting_ReportUsageToService@@YAXPEAUwil_details_FeatureReportingCache@@IH.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0032A74 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C0032D40 (ApiSetEditionWakeThreadForInput.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0033190 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C00331FC (ApiSetEditionMouseMoveShellResilience.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00332A8 (ApiSetEditionUpdateRawMouseMode.c)
 *     EtwTraceWakePump @ 0x1C0033360 (EtwTraceWakePump.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C003339C (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x1C0033624 (-SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0033690 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0033BCC (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0033CBC (QHelper--_anonymous_namespace_--GetQ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0033D14 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00553BC (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00A8AFC (INPUTDEST_FROM_PWND.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017BB18 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v9; // rsi
  char v10; // cl
  char v11; // di
  struct tagQ *Queue; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r14
  __int64 v18; // rcx
  const struct CInputDest *v19; // rdx
  const struct tagLOGICALPOINT *v20; // r8
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 *v23; // r12
  char PtiFromInputDest; // al
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // rax
  _OWORD *v32; // rax
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _OWORD v43[7]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v44[160]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v45; // [rsp+168h] [rbp+68h] BYREF
  __int64 v46; // [rsp+178h] [rbp+78h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v9 = *((_QWORD *)a4 + 1);
  v10 = 4;
  if ( *(_DWORD *)(v9 + 148) != 1 )
    v10 = 0;
  v11 = v10 | 1;
  if ( (*(_DWORD *)(v9 + 112) & 4) == 0 )
    v11 = v10;
  wil_details_FeatureReporting_ReportUsageToService(
    (__int64)&Feature_MinQMouseAndMiP__private_reporting,
    0x1513BC7u,
    0LL,
    0LL,
    (const struct FEATURE_LOGGED_TRAITS *)&Feature_InputVirtualization_logged_traits,
    1,
    3);
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 2LL);
  v17 = (__int64)Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    goto LABEL_20;
  }
  CoalesceInputSourceMouseMoves(Queue, (_DWORD *)(v9 + 104));
  if ( *((_DWORD *)a2 + 23) == 2 )
    v18 = *((_QWORD *)a2 + 10);
  else
    v18 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v18);
  QHelper::SetPtiMouse(a2, v19);
  ApiSetEditionUpdateRawMouseMode(v17);
  QHelper::SetMouseMovePoint(a2, a3, v20);
  if ( (unsigned int)dword_1C0244A70 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0244A70, 64LL, v21, v22) )
  {
    v30 = *((_QWORD *)a4 + 1);
    v45 = v17;
    v46 = *(_QWORD *)(v30 + 88);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C0244A70,
      (unsigned int)&unk_1C0219831,
      v28,
      v29,
      (__int64)&v46,
      (__int64)&v45);
  }
  if ( *((_DWORD *)a2 + 23) == 2 )
    v23 = (__int64 *)*((_QWORD *)a2 + 10);
  else
    v23 = 0LL;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 0LL);
  EtwTraceWakePump(PtiFromInputDest, v23, 0);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v11 |= 2u;
    goto LABEL_20;
  }
  if ( (v11 & 1) != 0 )
  {
LABEL_20:
    CMouseProcessor::PostMouseMoveToInputDest(
      (__int64 *)this,
      (__int64)a2,
      v9,
      (unsigned __int16 *)a3,
      v11,
      (__int64)a5);
    return;
  }
  v26 = QHelper::_anonymous_namespace_::GetQ(a2, v25);
  if ( v26 )
    *(_DWORD *)(v26 + 388) |= 0x20u;
  ApiSetEditionWakeThreadForInput((__int64)a2);
  v27 = *(_QWORD *)(v17 + 136);
  if ( v27 )
  {
    v31 = qword_1C0250920 ? qword_1C0250920(*(_QWORD *)(v27 + 16)) : 0LL;
    if ( (v31 & 0x2000000000000LL) != 0 )
    {
      v32 = (_OWORD *)INPUTDEST_FROM_PWND(v44, *(_QWORD *)(v17 + 136));
      v33 = v32[1];
      v43[0] = *v32;
      v34 = v32[2];
      v43[1] = v33;
      v35 = v32[3];
      v43[2] = v34;
      v36 = v32[4];
      v43[3] = v35;
      v37 = v32[5];
      v43[4] = v36;
      v38 = v32[6];
      v43[5] = v37;
      v43[6] = v38;
      if ( !(unsigned __int8)CInputDest::operator==(a2, v43) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v40, v39, v41, v42);
      CMouseProcessor::PostMouseMoveToInputDest(
        (__int64 *)this,
        (__int64)a2,
        v9,
        (unsigned __int16 *)a3,
        0,
        (__int64)a5);
    }
  }
}
