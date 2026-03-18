/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C00636D8
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C0063334 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C005C7C0 (INPUTDEST_FROM_PWND.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C0062854 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C0062F94 (ApiSetEditionWakeThreadForInput.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C00633E0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C006344C (ApiSetEditionMouseMoveShellResilience.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C00634F8 (ApiSetEditionUpdateRawMouseMode.c)
 *     EtwTraceWakePump @ 0x1C00635B0 (EtwTraceWakePump.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C00635EC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x1C0063880 (-SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0064EF0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C00655BC (QHelper--_anonymous_namespace_--GetQ.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0065680 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00658A4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C00699C8 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C0183C48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::DetectAndApplyMouseMovePostStrategy(
        CMouseProcessor *this,
        const struct CInputDest *a2,
        const struct tagLOGICALPOINT *a3,
        const struct CMouseProcessor::CMoveEvent *a4,
        struct _mouseCursorEvent *a5)
{
  __int64 v9; // r14
  char v10; // cl
  char v11; // di
  struct tagQ *Queue; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rcx
  const struct CInputDest *v16; // rdx
  const struct tagLOGICALPOINT *v17; // r8
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *v20; // r12
  char PtiFromInputDest; // al
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  _OWORD *v29; // rax
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rcx
  _OWORD v37[7]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v38[40]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v39; // [rsp+178h] [rbp+78h] BYREF
  __int64 v40; // [rsp+188h] [rbp+88h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  v9 = *((_QWORD *)a4 + 1);
  v10 = 4;
  LODWORD(v39) = 3;
  if ( *(_DWORD *)(v9 + 148) != 1 )
    v10 = 0;
  v11 = v10 | 1;
  if ( (*(_DWORD *)(v9 + 112) & 4) == 0 )
    v11 = v10;
  if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                       (unsigned int)&Feature_MinQMouseAndMiP__private_reporting,
                       22100935,
                       0,
                       0,
                       2)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(
      22100935LL,
      &Feature_InputVirtualization_logged_traits,
      0LL,
      1LL,
      &v39,
      0LL,
      0,
      1LL);
  }
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 2LL);
  v14 = (__int64)Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v13);
    goto LABEL_21;
  }
  CoalesceInputSourceMouseMoves(Queue, (_DWORD *)(v9 + 104));
  if ( *((_DWORD *)a2 + 23) == 2 )
    v15 = *((_QWORD *)a2 + 10);
  else
    v15 = 0LL;
  ApiSetEditionMouseMoveShellResilience(v15);
  QHelper::SetPtiMouse(a2, v16);
  ApiSetEditionUpdateRawMouseMode(v14);
  QHelper::SetMouseMovePoint(a2, a3, v17);
  if ( (unsigned int)dword_1C024C960 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024C960, 64LL, v18, v19) )
  {
    v26 = *((_QWORD *)a4 + 1);
    v39 = v14;
    v40 = *(_QWORD *)(v26 + 88);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C024C960,
      (unsigned int)&unk_1C0221210,
      v24,
      v25,
      (__int64)&v40,
      (__int64)&v39);
  }
  if ( *((_DWORD *)a2 + 23) == 2 )
    v20 = (__int64 *)*((_QWORD *)a2 + 10);
  else
    v20 = 0LL;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 0LL);
  EtwTraceWakePump(PtiFromInputDest, v20, 0);
  if ( CInputDest::IsCompositionInput(a2) )
  {
    v11 |= 2u;
    goto LABEL_21;
  }
  if ( (v11 & 1) != 0 )
  {
LABEL_21:
    CMouseProcessor::PostMouseMoveToInputDest(
      (__int64 *)this,
      (__int64)a2,
      v9,
      (unsigned __int16 *)a3,
      v11,
      (__int64)a5);
    return;
  }
  v22 = QHelper::_anonymous_namespace_::GetQ(a2);
  if ( v22 )
    *(_DWORD *)(v22 + 388) |= 0x20u;
  ApiSetEditionWakeThreadForInput((__int64)a2);
  v23 = *(_QWORD *)(v14 + 136);
  if ( v23 )
  {
    v27 = *(_QWORD *)(v23 + 16);
    v28 = (__int64)qword_1C02588E0;
    if ( qword_1C02588E0 )
      v28 = qword_1C02588E0(v27);
    if ( (v28 & 0x2000000000000LL) != 0 )
    {
      v29 = INPUTDEST_FROM_PWND(v38, *(_QWORD *)(v14 + 136));
      v30 = v29[1];
      v37[0] = *v29;
      v31 = v29[2];
      v37[1] = v30;
      v32 = v29[3];
      v37[2] = v31;
      v33 = v29[4];
      v37[3] = v32;
      v34 = v29[5];
      v37[4] = v33;
      v35 = v29[6];
      v37[5] = v34;
      v37[6] = v35;
      if ( !(unsigned __int8)CInputDest::operator==(a2, v37) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
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
