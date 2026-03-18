/*
 * XREFs of ?ConvertHostPointerFrameTimesToContainerTimeline@InteractionLatencyTelemetry@@YA?AUtagTELEMETRY_POINTER_FRAME_TIMES@@AEBU2@@Z @ 0x1801D2824
 * Callers:
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline @ 0x1801D29AC (InteractionLatencyTelemetry--_anonymous_namespace_--ConvertHostQpcToContainerTimeline.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18026C27C (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18026C340 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::ConvertHostPointerFrameTimesToContainerTimeline(
        __int64 a1,
        __int128 *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rcx
  unsigned int MultiTimePrecise; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r8
  int v33; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v34[24]; // [rsp+28h] [rbp-30h] BYREF

  if ( !*((_QWORD *)a2 + 8) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( !*((_QWORD *)a2 + 9) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( !*((_QWORD *)a2 + 17) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  v4 = *a2;
  v33 = 0;
  v5 = a2[1];
  *(_OWORD *)a1 = v4;
  v6 = a2[2];
  *(_OWORD *)(a1 + 16) = v5;
  v7 = a2[3];
  *(_OWORD *)(a1 + 32) = v6;
  v8 = a2[4];
  *(_OWORD *)(a1 + 48) = v7;
  v9 = a2[5];
  *(_OWORD *)(a1 + 64) = v8;
  v10 = a2[6];
  *(_OWORD *)(a1 + 80) = v9;
  v11 = a2[8];
  *(_OWORD *)(a1 + 96) = v10;
  *(_OWORD *)(a1 + 112) = a2[7];
  *(_OWORD *)(a1 + 128) = v11;
  MultiTimePrecise = RtlGetMultiTimePrecise(v34, 3LL, &v33);
  if ( v33 != 3 )
    MicrosoftTelemetryAssertTriggeredArgs(v12, 3LL);
  if ( MultiTimePrecise )
    MicrosoftTelemetryAssertTriggeredArgs(v12, MultiTimePrecise);
  v14 = InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(
          v34,
          *(_QWORD *)a2,
          *((_QWORD *)a2 + 17));
  v15 = *((_QWORD *)a2 + 1);
  *(_QWORD *)a1 = v14;
  v17 = InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(v34, v15, v16);
  v18 = *((_QWORD *)a2 + 2);
  *(_QWORD *)(a1 + 8) = v17;
  v20 = InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(v34, v18, v19);
  v21 = *((_QWORD *)a2 + 3);
  *(_QWORD *)(a1 + 16) = v20;
  v23 = InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(v34, v21, v22);
  v24 = *((_QWORD *)a2 + 4);
  *(_QWORD *)(a1 + 24) = v23;
  v26 = InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(v34, v24, v25);
  v27 = *((_QWORD *)a2 + 5);
  *(_QWORD *)(a1 + 32) = v26;
  v29 = InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(v34, v27, v28);
  v30 = *((_QWORD *)a2 + 8);
  *(_QWORD *)(a1 + 40) = v29;
  *(_QWORD *)(a1 + 64) = InteractionLatencyTelemetry::_anonymous_namespace_::ConvertHostQpcToContainerTimeline(
                           v34,
                           v30,
                           v31);
  return a1;
}
