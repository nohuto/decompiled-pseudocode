/*
 * XREFs of ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E5A8
 * Callers:
 *     ?DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDeliveryContext@1@PEAU_mouseCursorEvent@@@Z @ 0x1C006E208 (-DeliverMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCMoveEvent@1@AEBVCInputDest@@AEBUInputDel.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C0047564 (INPUTDEST_FROM_PWND.c)
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@PEAU_mouseCursorEvent@@@Z @ 0x1C006DB74 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagL.c)
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ApiSetEditionWakeThreadForInput @ 0x1C006DE68 (ApiSetEditionWakeThreadForInput.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C006E2B0 (CoalesceInputSourceMouseMoves.c)
 *     ApiSetEditionMouseMoveShellResilience @ 0x1C006E31C (ApiSetEditionMouseMoveShellResilience.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C006E3C8 (ApiSetEditionUpdateRawMouseMode.c)
 *     EtwTraceWakePump @ 0x1C006E480 (EtwTraceWakePump.c)
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C006E4BC (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 *     ?SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z @ 0x1C006E750 (-SetPtiMouse@QHelper@@YAXAEBVCInputDest@@@Z.c)
 *     ?SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z @ 0x1C006E7C4 (-SetMouseMovePoint@QHelper@@YAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C00708C0 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0070F8C (QHelper--_anonymous_namespace_--GetQ.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1C0071050 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0071274 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C007471C (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x1C017DF48 (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rcx
  const struct CInputDest *v19; // rdx
  const struct tagLOGICALPOINT *v20; // r8
  __int64 *v21; // r12
  char PtiFromInputDest; // al
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  _OWORD *v30; // rax
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _OWORD v42[7]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v43[40]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+178h] [rbp+78h] BYREF
  __int64 v45; // [rsp+188h] [rbp+88h] BYREF

  if ( !*(_DWORD *)a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  v9 = *((_QWORD *)a4 + 1);
  v10 = 4;
  LODWORD(v44) = 3;
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
      &v44,
      0LL,
      0,
      1LL);
  }
  Queue = (struct tagQ *)CInputDest::GetQueue(a2, 2LL);
  v17 = (__int64)Queue;
  if ( !Queue )
  {
    if ( !*(_QWORD *)(v9 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15, v16);
    goto LABEL_21;
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
  if ( (unsigned int)dword_1C0246A70 > 5 && tlgKeywordOn((__int64)&dword_1C0246A70, 64LL) )
  {
    v27 = *((_QWORD *)a4 + 1);
    v44 = v17;
    v45 = *(_QWORD *)(v27 + 88);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_1C0246A70,
      (unsigned int)&unk_1C021B6A0,
      v25,
      v26,
      (__int64)&v45,
      (__int64)&v44);
  }
  if ( *((_DWORD *)a2 + 23) == 2 )
    v21 = (__int64 *)*((_QWORD *)a2 + 10);
  else
    v21 = 0LL;
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 0LL);
  EtwTraceWakePump(PtiFromInputDest, v21, 0);
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
  v23 = QHelper::_anonymous_namespace_::GetQ(a2);
  if ( v23 )
    *(_DWORD *)(v23 + 388) |= 0x20u;
  ApiSetEditionWakeThreadForInput((__int64)a2);
  v24 = *(_QWORD *)(v17 + 136);
  if ( v24 )
  {
    v28 = *(_QWORD *)(v24 + 16);
    v29 = (__int64)qword_1C0252920;
    if ( qword_1C0252920 )
      v29 = qword_1C0252920(v28);
    if ( (v29 & 0x2000000000000LL) != 0 )
    {
      v30 = INPUTDEST_FROM_PWND(v43, *(_QWORD *)(v17 + 136));
      v31 = v30[1];
      v42[0] = *v30;
      v32 = v30[2];
      v42[1] = v31;
      v33 = v30[3];
      v42[2] = v32;
      v34 = v30[4];
      v42[3] = v33;
      v35 = v30[5];
      v42[4] = v34;
      v36 = v30[6];
      v42[5] = v35;
      v42[6] = v36;
      if ( !(unsigned __int8)CInputDest::operator==(a2, v42, v37) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v39, v38, v40, v41);
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
