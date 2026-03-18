/*
 * XREFs of ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001AC20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 *     ?BeginInteraction@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_K@Z @ 0x180015E0C (-BeginInteraction@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo.c)
 *     ?BeginScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_K@Z @ 0x180015E54 (-BeginScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@.c)
 *     ?GetDwmRemotingMode@InteractionLatencyTelemetry@@YA?AW4Enum@DwmRemotingMode@@XZ @ 0x180015E8C (-GetDwmRemotingMode@InteractionLatencyTelemetry@@YA-AW4Enum@DwmRemotingMode@@XZ.c)
 *     ?IsStartInertia@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001A1DC (-IsStartInertia@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABA0 (-IsNewInteraction@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 *     ?IsValid@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABCC (-IsValid@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8 (-FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioI.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@877@Z @ 0x1801CFAF4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_1801CFAF4.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U3@U1@U1@U?$_tlgWrapperByVal@$01@@U1@U2@U1@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@555555555555555555555533AEBU?$_tlgWrapperByVal@$01@@34354@Z @ 0x1801D0898 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D0BFC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1801D0C98 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?ConvertHostPointerFrameTimesToContainerTimeline@InteractionLatencyTelemetry@@YA?AUtagTELEMETRY_POINTER_FRAME_TIMES@@AEBU2@@Z @ 0x1801D2824 (-ConvertHostPointerFrameTimesToContainerTimeline@InteractionLatencyTelemetry@@YA-AUtagTELEMETRY_.c)
 *     ?ForceRetireScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@@Z @ 0x1801D2E50 (-ForceRetireScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioI.c)
 *     ?TelemetryProcessingErrorDetected@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x1801D5C38 (-TelemetryProcessingErrorDetected@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUT.c)
 *     McTemplateU0xhhxqnttz_EventWriteTransfer @ 0x1801D6660 (McTemplateU0xhhxqnttz_EventWriteTransfer.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x18026BB8C (-IsVailContainer@@YA_NXZ.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UpdateInteractionProgress(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        unsigned __int64 a3,
        char a4,
        const unsigned __int64 *a5,
        unsigned int a6,
        const struct _LUID *a7,
        bool a8,
        struct InteractionLatencyTelemetry::TouchUpdateInfo **a9)
{
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  int v20; // ecx
  int v21; // r8d
  int v22; // r9d
  struct InteractionLatencyTelemetry::TouchScenarioInfo *Scenario; // r14
  __int64 v24; // rdi
  __int64 v25; // r11
  char IsNewInteraction; // al
  char v27; // si
  char v28; // bl
  LARGE_INTEGER v29; // rbx
  unsigned __int8 v30; // cl
  int v31; // ecx
  int v32; // r8d
  unsigned int v33; // r9d
  __int64 v34; // rcx
  char *v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // r8
  int v38; // esi
  int v39; // edi
  __int64 v40; // r11
  __int64 v41; // r10
  __int64 v42; // r9
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  struct InteractionLatencyTelemetry::TouchUpdateInfo **v45; // r8
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  int v53; // ecx
  int v54; // r8d
  unsigned int v55; // r9d
  int v57; // eax
  InteractionLatencyTelemetry::CMouseKeyboardInfo *v58; // r11
  const struct _LUID *v59; // r8
  int DwmRemotingMode; // eax
  int v61; // ecx
  __int64 v62; // r8
  char v63; // r9
  char v64; // r10
  int v65; // eax
  int v66; // eax
  int v67; // ecx
  int v68; // r8d
  unsigned int v69; // r9d
  __int128 *v70; // rax
  __int128 v71; // xmm1
  __int128 v72; // xmm0
  __int128 v73; // xmm1
  __int128 v74; // xmm0
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  __int128 v78; // xmm0
  InteractionLatencyTelemetry::CMouseKeyboardInfo *v79; // r11
  int v80; // eax
  __int64 v81; // r11
  int v82; // eax
  _QWORD *v83; // rdx
  _QWORD *v84; // rax
  bool v85; // cf
  _QWORD *v86; // rax
  void *v87; // rdx
  _QWORD *v88; // rax
  _QWORD *v89; // rax
  int v90; // [rsp+38h] [rbp-188h]
  char v91; // [rsp+140h] [rbp-80h] BYREF
  char v92; // [rsp+141h] [rbp-7Fh] BYREF
  char v93; // [rsp+142h] [rbp-7Eh] BYREF
  char v94; // [rsp+143h] [rbp-7Dh]
  char v95; // [rsp+144h] [rbp-7Ch]
  char v96; // [rsp+145h] [rbp-7Bh]
  __int16 v97; // [rsp+146h] [rbp-7Ah] BYREF
  unsigned int v98; // [rsp+148h] [rbp-78h] BYREF
  int v99; // [rsp+14Ch] [rbp-74h] BYREF
  int v100; // [rsp+150h] [rbp-70h] BYREF
  int v101; // [rsp+154h] [rbp-6Ch] BYREF
  LONG HighPart; // [rsp+158h] [rbp-68h] BYREF
  DWORD LowPart; // [rsp+15Ch] [rbp-64h] BYREF
  const struct _LUID *v104; // [rsp+160h] [rbp-60h] BYREF
  int v105; // [rsp+168h] [rbp-58h]
  LARGE_INTEGER PerformanceCount; // [rsp+170h] [rbp-50h] BYREF
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v107; // [rsp+178h] [rbp-48h] BYREF
  unsigned int v108; // [rsp+180h] [rbp-40h]
  _QWORD *v109; // [rsp+188h] [rbp-38h] BYREF
  _QWORD *v110; // [rsp+190h] [rbp-30h] BYREF
  char *v111; // [rsp+198h] [rbp-28h] BYREF
  int v112; // [rsp+1A0h] [rbp-20h] BYREF
  struct InteractionLatencyTelemetry::TouchUpdateInfo **v113; // [rsp+1A8h] [rbp-18h] BYREF
  __int64 v114; // [rsp+1B0h] [rbp-10h] BYREF
  __int64 v115; // [rsp+1B8h] [rbp-8h] BYREF
  __int64 v116; // [rsp+1C0h] [rbp+0h] BYREF
  __int64 v117; // [rsp+1C8h] [rbp+8h] BYREF
  __int64 v118; // [rsp+1D0h] [rbp+10h] BYREF
  __int64 v119; // [rsp+1D8h] [rbp+18h] BYREF
  __int64 v120; // [rsp+1E0h] [rbp+20h] BYREF
  __int64 v121; // [rsp+1E8h] [rbp+28h] BYREF
  __int64 v122; // [rsp+1F0h] [rbp+30h] BYREF
  __int64 v123; // [rsp+1F8h] [rbp+38h] BYREF
  __int64 v124; // [rsp+200h] [rbp+40h] BYREF
  unsigned __int64 v125; // [rsp+208h] [rbp+48h] BYREF
  __int64 v126; // [rsp+210h] [rbp+50h] BYREF
  __int64 v127; // [rsp+218h] [rbp+58h] BYREF
  __int64 v128; // [rsp+220h] [rbp+60h] BYREF
  __int64 v129; // [rsp+228h] [rbp+68h] BYREF
  __int64 v130; // [rsp+230h] [rbp+70h] BYREF
  __int64 v131; // [rsp+238h] [rbp+78h] BYREF
  __int64 v132; // [rsp+240h] [rbp+80h] BYREF
  __int64 v133; // [rsp+248h] [rbp+88h] BYREF
  _BYTE v134[144]; // [rsp+250h] [rbp+90h] BYREF
  __int128 v135; // [rsp+2E0h] [rbp+120h] BYREF
  __int128 v136; // [rsp+2F0h] [rbp+130h]
  __int128 v137; // [rsp+300h] [rbp+140h]
  __int128 v138; // [rsp+310h] [rbp+150h]
  __int128 v139; // [rsp+320h] [rbp+160h]
  __int128 v140; // [rsp+330h] [rbp+170h]
  __int128 v141; // [rsp+340h] [rbp+180h]
  __int128 v142; // [rsp+350h] [rbp+190h]
  __int128 v143; // [rsp+360h] [rbp+1A0h]

  v113 = a9;
  v94 = a4;
  v104 = a7;
  v108 = 0;
  *((_QWORD *)this + 863) = *a5;
  QueryPerformanceCounter(&PerformanceCount);
  v13 = *(_OWORD *)((char *)a2 + 24);
  v135 = *(_OWORD *)((char *)a2 + 8);
  v14 = *(_OWORD *)((char *)a2 + 40);
  v136 = v13;
  v15 = *(_OWORD *)((char *)a2 + 56);
  v137 = v14;
  v16 = *(_OWORD *)((char *)a2 + 72);
  v138 = v15;
  v17 = *(_OWORD *)((char *)a2 + 88);
  v139 = v16;
  v18 = *(_OWORD *)((char *)a2 + 104);
  v140 = v17;
  v19 = *(_OWORD *)((char *)a2 + 136);
  v141 = v18;
  v142 = *(_OWORD *)((char *)a2 + 120);
  v143 = v19;
  if ( (unsigned int)dword_1803D0EB8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 2LL) )
  {
    v100 = *((_DWORD *)a2 + 52);
    v92 = *((_BYTE *)a2 + 200);
    v99 = *((_DWORD *)a2 + 46);
    v97 = *((_WORD *)a2 + 94);
    v112 = *((_DWORD *)a2 + 49);
    v101 = *((_DWORD *)a2 + 48);
    v127 = *((_QWORD *)a2 + 22);
    v128 = *((_QWORD *)a2 + 21);
    v129 = *((_QWORD *)a2 + 20);
    v131 = *((_QWORD *)a2 + 19);
    v132 = *((_QWORD *)a2 + 18);
    v133 = *((_QWORD *)a2 + 17);
    v114 = *((_QWORD *)a2 + 16);
    v115 = *((_QWORD *)a2 + 15);
    v116 = *((_QWORD *)a2 + 14);
    v117 = *((_QWORD *)a2 + 13);
    v118 = *((_QWORD *)a2 + 12);
    v119 = *((_QWORD *)a2 + 11);
    v120 = *((_QWORD *)a2 + 10);
    v121 = *((_QWORD *)a2 + 9);
    v122 = *((_QWORD *)a2 + 8);
    v123 = *((_QWORD *)a2 + 7);
    v124 = *((_QWORD *)a2 + 6);
    v130 = *((_QWORD *)a2 + 5);
    v126 = *((_QWORD *)a2 + 4);
    v109 = (_QWORD *)*((_QWORD *)a2 + 3);
    v110 = (_QWORD *)*((_QWORD *)a2 + 2);
    v111 = (char *)*((_QWORD *)a2 + 1);
    v107 = *(struct InteractionLatencyTelemetry::TouchScenarioInfo **)a2;
    v93 = a8;
    HighPart = a7->HighPart;
    LowPart = a7->LowPart;
    v98 = a6;
    v91 = a4;
    v125 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
      v20,
      (unsigned int)&unk_18036BA77,
      v21,
      v22,
      (__int64)&v98,
      (__int64)&LowPart,
      (__int64)&HighPart,
      (__int64)&v93,
      (__int64)&v107,
      (__int64)&v111,
      (__int64)&v110,
      (__int64)&v109,
      (__int64)&v126,
      (__int64)&v130,
      (__int64)&v124,
      (__int64)&v123,
      (__int64)&v122,
      (__int64)&v121,
      (__int64)&v120,
      (__int64)&v119,
      (__int64)&v118,
      (__int64)&v117,
      (__int64)&v116,
      (__int64)&v115,
      (__int64)&v114,
      (__int64)&v133,
      (__int64)&v132,
      (__int64)&v131,
      (__int64)&v129,
      (__int64)&v128,
      (__int64)&v127,
      (__int64)&v101,
      (__int64)&v112,
      (__int64)&v97,
      (__int64)&v99,
      (__int64)&v92,
      (__int64)&v100,
      (__int64)&v125,
      (__int64)&v91);
  }
  Scenario = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  if ( Scenario )
  {
    if ( *((_WORD *)a2 + 94) && IsVailContainer() )
    {
      v70 = (__int128 *)InteractionLatencyTelemetry::ConvertHostPointerFrameTimesToContainerTimeline(v134, &v135);
      v25 = 0LL;
      v71 = v70[1];
      v135 = *v70;
      v72 = v70[2];
      v136 = v71;
      v73 = v70[3];
      v137 = v72;
      v74 = v70[4];
      v138 = v73;
      v75 = v70[5];
      v139 = v74;
      v76 = v70[6];
      v140 = v75;
      v77 = v70[7];
      v141 = v76;
      v78 = v70[8];
      v142 = v77;
      v143 = v78;
      v24 = v135;
      if ( (_QWORD)v135 && (_QWORD)v139 )
      {
LABEL_8:
        if ( *((_BYTE *)Scenario + 156)
          && *((_QWORD *)Scenario + 22)
          && (*((_WORD *)a2 + 94)
           || (IsNewInteraction = InteractionLatencyTelemetry::CMouseKeyboardInfo::IsNewInteraction(
                                    (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 6912),
                                    a3),
               v25 = 0LL,
               IsNewInteraction)) )
        {
          v28 = 1;
        }
        else
        {
          v27 = 0;
          v28 = 0;
          if ( !*(_BYTE *)Scenario )
            goto LABEL_13;
        }
        InteractionLatencyTelemetry::InteractionTraceProvider::ForceRetireScenario(Scenario);
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RetireScenario(this, Scenario, v28 != 1, 0);
        v25 = 0LL;
        v27 = v28;
        if ( *(_BYTE *)Scenario )
          return v108;
LABEL_13:
        if ( !*((_BYTE *)Scenario + 156) )
        {
          *(_BYTE *)Scenario = 0;
          *((_QWORD *)Scenario + 1) = *(_QWORD *)a2;
          *((_DWORD *)Scenario + 38) = 1;
          v57 = *((_DWORD *)a2 + 46);
          if ( v57 )
          {
            *((_DWORD *)Scenario + 21) = v57;
            *((_DWORD *)Scenario + 23) = *((_DWORD *)a2 + 50);
            *((_QWORD *)Scenario + 20) = v24;
          }
          else
          {
            if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsValid(
                   (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 6912),
                   a3) )
            {
              if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsValid(v58, a3) )
                v80 = *((_DWORD *)v79 + 6);
              else
                v80 = 0;
              *((_DWORD *)Scenario + 21) = v80;
              if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsValid(v79, a3) )
                v82 = *(_DWORD *)(v81 + 28);
              else
                v82 = 0;
              *((_DWORD *)Scenario + 23) = v82;
            }
            else
            {
              *((_DWORD *)Scenario + 21) = 0;
              *((_DWORD *)Scenario + 23) = 0;
            }
            *((_QWORD *)Scenario + 20) = *((_QWORD *)a2 + 19);
          }
          v59 = v104;
          *((_DWORD *)Scenario + 33) = a6;
          *((struct _LUID *)Scenario + 17) = *v59;
          *((_BYTE *)Scenario + 144) = a8;
          DwmRemotingMode = InteractionLatencyTelemetry::GetDwmRemotingMode();
          *((_WORD *)Scenario + 96) = 0;
          *((_DWORD *)Scenario + 52) = 0;
          LOWORD(v105) = 0;
          *((_DWORD *)Scenario + 37) = DwmRemotingMode;
          LOBYTE(DwmRemotingMode) = v94;
          *((_QWORD *)Scenario + 25) = a3;
          *((_QWORD *)Scenario + 27) = 0LL;
          *((_QWORD *)Scenario + 28) = 0LL;
          *((_QWORD *)Scenario + 29) = 0LL;
          *((_QWORD *)Scenario + 30) = 0LL;
          *((_QWORD *)Scenario + 31) = 0LL;
          *((_QWORD *)Scenario + 32) = 0LL;
          *((_QWORD *)Scenario + 33) = 0LL;
          *((_QWORD *)Scenario + 34) = 0LL;
          *((_QWORD *)Scenario + 35) = 0LL;
          *((_QWORD *)Scenario + 36) = 0LL;
          *((_QWORD *)Scenario + 37) = 0LL;
          *((_QWORD *)Scenario + 38) = 0LL;
          *((_QWORD *)Scenario + 39) = 0LL;
          *((_QWORD *)Scenario + 40) = 0LL;
          *((_WORD *)Scenario + 164) = 0;
          *((_BYTE *)Scenario + 212) = DwmRemotingMode;
          *((_BYTE *)Scenario + 330) = v25;
          *(_QWORD *)((char *)Scenario + 332) = 0LL;
          *(_QWORD *)((char *)Scenario + 340) = 0LL;
          *(_QWORD *)((char *)Scenario + 348) = 0LL;
          *(_QWORD *)((char *)Scenario + 356) = 0LL;
          *(_QWORD *)((char *)Scenario + 364) = 0LL;
          *(_QWORD *)((char *)Scenario + 372) = 0LL;
          *(_QWORD *)((char *)Scenario + 380) = 0LL;
          *(_QWORD *)((char *)Scenario + 388) = 0LL;
          *(_QWORD *)((char *)Scenario + 396) = 0LL;
          *(_QWORD *)((char *)Scenario + 404) = 0LL;
          *(_QWORD *)((char *)Scenario + 412) = 0LL;
          *(_QWORD *)((char *)Scenario + 420) = 0LL;
          *(_QWORD *)((char *)Scenario + 428) = 0LL;
          *(_QWORD *)((char *)Scenario + 436) = 0LL;
          *((_DWORD *)Scenario + 114) = 0;
          *(_QWORD *)((char *)Scenario + 460) = 0LL;
          *((_DWORD *)Scenario + 119) = v25;
          *((_DWORD *)Scenario + 117) = v25;
          *((_WORD *)Scenario + 236) = v25;
          *((_QWORD *)Scenario + 61) = v25;
          *((_QWORD *)Scenario + 62) = v25;
          LOBYTE(v104) = v25;
          WORD1(v104) = v25;
          HIDWORD(v104) = v25;
          *(_QWORD *)((char *)Scenario + 444) = v104;
          BYTE2(v105) = v25;
          *((_DWORD *)Scenario + 113) = v105;
          *((_DWORD *)Scenario + 126) = *((_DWORD *)a2 + 48);
          *((_DWORD *)Scenario + 127) = v25;
          *((_QWORD *)Scenario + 21) = v25;
          *((_QWORD *)Scenario + 23) = v25;
          *((_QWORD *)Scenario + 22) = v25;
          *((_WORD *)Scenario + 240) = v25;
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
          {
            v83 = (_QWORD *)((char *)Scenario + 16);
            if ( *((_QWORD *)Scenario + 5) >= 8uLL )
              v83 = (_QWORD *)*v83;
            McTemplateU0xhhxqnttz_EventWriteTransfer(
              v61,
              (_DWORD)v83,
              *(_QWORD *)a2,
              *((unsigned __int16 *)Scenario + 64),
              *((_WORD *)Scenario + 65),
              a3,
              v64,
              v90,
              v62,
              v63,
              *((_BYTE *)Scenario + 212),
              (__int64)v83);
            v25 = 0LL;
          }
          if ( v27 )
          {
            InteractionLatencyTelemetry::InteractionTraceProvider::BeginScenario(Scenario);
            InteractionLatencyTelemetry::InteractionTraceProvider::BeginInteraction(Scenario);
            v25 = 0LL;
          }
        }
        v29 = PerformanceCount;
        *((_QWORD *)Scenario + 62) = *((_QWORD *)Scenario + 61);
        *((LARGE_INTEGER *)Scenario + 61) = v29;
        if ( *((_BYTE *)Scenario + 156) != (_BYTE)v25 )
        {
          if ( *((_QWORD *)Scenario + 22) != v25 )
            goto LABEL_16;
          v66 = *((_DWORD *)Scenario + 21);
          if ( !v66 )
          {
LABEL_40:
            if ( *((_WORD *)a2 + 94) != (_WORD)v25 )
              goto LABEL_16;
            goto LABEL_41;
          }
          if ( v66 > 1 )
          {
            if ( v66 <= 3 )
              goto LABEL_40;
            switch ( v66 )
            {
              case 4:
                goto LABEL_95;
              case 5:
                goto LABEL_40;
              case 6:
LABEL_95:
                if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsStartInertia(
                       (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 6912),
                       a3) )
                {
LABEL_41:
                  *((_QWORD *)Scenario + 22) = *((_QWORD *)a2 + 19);
                }
                break;
            }
          }
LABEL_16:
          v30 = *((_BYTE *)a2 + 188);
          if ( *((_BYTE *)Scenario + 192) >= v30 )
            v30 = *((_BYTE *)Scenario + 192);
          *((_BYTE *)Scenario + 192) = v30;
          *((_BYTE *)Scenario + 193) = *((_BYTE *)a2 + 188);
          *((_DWORD *)Scenario + 127) = *((_DWORD *)Scenario + 126);
          *((_DWORD *)Scenario + 126) = *((_DWORD *)a2 + 48);
          *((_WORD *)Scenario + 240) = *((_WORD *)a2 + 102);
          *((_DWORD *)Scenario + 119) += *((unsigned __int16 *)a2 + 104);
          *((_BYTE *)Scenario + 156) = 1;
          if ( *((_QWORD *)Scenario + 25) == a3 )
          {
            if ( (unsigned int)dword_1803D0EB8 <= 4 )
              goto LABEL_24;
            if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
            {
              v98 = *((_DWORD *)Scenario + 38);
              v104 = (const struct _LUID *)*((_QWORD *)Scenario + 1);
              PerformanceCount.QuadPart = a3;
              v107 = Scenario;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                v67,
                (unsigned int)&unk_18036D87C,
                v68,
                v69,
                (__int64)&v107,
                (__int64)&v104,
                (__int64)&v98,
                (__int64)&PerformanceCount);
              v69 = dword_1803D0EB8;
            }
            if ( v69 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 2LL) )
              goto LABEL_24;
            v104 = (const struct _LUID *)*((_QWORD *)Scenario + 1);
            LOWORD(v99) = *((_WORD *)Scenario + 65);
            LOWORD(v100) = *((_WORD *)Scenario + 64);
            v94 = *((_BYTE *)Scenario + 192);
            v107 = (struct InteractionLatencyTelemetry::TouchScenarioInfo *)*((_QWORD *)Scenario + 15);
            v93 = *((_BYTE *)Scenario + 96);
            v92 = *((_BYTE *)Scenario + 92);
            v91 = *((_BYTE *)Scenario + 88);
            v95 = *((_BYTE *)Scenario + 84);
            v111 = (char *)Scenario + 100;
            v96 = *((_BYTE *)Scenario + 80);
            v84 = (_QWORD *)((char *)Scenario + 48);
            v85 = *((_QWORD *)Scenario + 9) < 8uLL;
            PerformanceCount.QuadPart = a3;
            if ( !v85 )
              v84 = (_QWORD *)*v84;
            v110 = v84;
            v86 = (_QWORD *)((char *)Scenario + 16);
            if ( *((_QWORD *)Scenario + 5) >= 8uLL )
              v86 = (_QWORD *)*v86;
            v109 = v86;
            v87 = &unk_18036DDCD;
            v98 = *((_DWORD *)Scenario + 37);
            LOBYTE(v97) = *((_BYTE *)Scenario + 144);
            LowPart = *((_DWORD *)Scenario + 35);
            HighPart = *((_DWORD *)Scenario + 34);
            v101 = *((_DWORD *)Scenario + 33);
          }
          else
          {
            if ( (unsigned int)dword_1803D0EB8 <= 4 )
              goto LABEL_24;
            if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
            {
              v98 = *((_DWORD *)Scenario + 38);
              v104 = (const struct _LUID *)*((_QWORD *)Scenario + 1);
              PerformanceCount.QuadPart = a3;
              v107 = Scenario;
              _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                v31,
                (unsigned int)&unk_18036D326,
                v32,
                v33,
                (__int64)&v107,
                (__int64)&v104,
                (__int64)&v98,
                (__int64)&PerformanceCount);
              v33 = dword_1803D0EB8;
            }
            if ( v33 <= 4 || !(unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 2LL) )
              goto LABEL_24;
            v104 = (const struct _LUID *)*((_QWORD *)Scenario + 1);
            LOWORD(v100) = *((_WORD *)Scenario + 65);
            LOWORD(v99) = *((_WORD *)Scenario + 64);
            LOBYTE(v97) = *((_BYTE *)Scenario + 192);
            v107 = (struct InteractionLatencyTelemetry::TouchScenarioInfo *)*((_QWORD *)Scenario + 15);
            v96 = *((_BYTE *)Scenario + 96);
            v95 = *((_BYTE *)Scenario + 92);
            v94 = *((_BYTE *)Scenario + 88);
            v93 = *((_BYTE *)Scenario + 84);
            v111 = (char *)Scenario + 100;
            v92 = *((_BYTE *)Scenario + 80);
            v88 = (_QWORD *)((char *)Scenario + 48);
            v85 = *((_QWORD *)Scenario + 9) < 8uLL;
            PerformanceCount.QuadPart = a3;
            if ( !v85 )
              v88 = (_QWORD *)*v88;
            v110 = v88;
            v89 = (_QWORD *)((char *)Scenario + 16);
            if ( *((_QWORD *)Scenario + 5) >= 8uLL )
              v89 = (_QWORD *)*v89;
            v109 = v89;
            v87 = &unk_18036DC70;
            v98 = *((_DWORD *)Scenario + 37);
            v91 = *((_BYTE *)Scenario + 144);
            LowPart = *((_DWORD *)Scenario + 35);
            HighPart = *((_DWORD *)Scenario + 34);
            v101 = *((_DWORD *)Scenario + 33);
          }
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v34,
            v87);
LABEL_24:
          v35 = (char *)operator new(0xD8uLL);
          if ( v35 )
          {
            v37 = *((_QWORD *)a2 + 19);
            v38 = *((_DWORD *)a2 + 49);
            v39 = *((_DWORD *)a2 + 48);
            v40 = *((_QWORD *)a2 + 22);
            v41 = *((_QWORD *)a2 + 21);
            v42 = *((_QWORD *)a2 + 20);
            *(_QWORD *)v35 = *(_QWORD *)a2;
            v43 = v135;
            *((_QWORD *)v35 + 19) = v37;
            v44 = v136;
            v45 = v113;
            *(_OWORD *)(v35 + 8) = v43;
            *((_QWORD *)v35 + 20) = v42;
            v46 = v137;
            *((LARGE_INTEGER *)v35 + 21) = v29;
            *(_OWORD *)(v35 + 24) = v44;
            *((_QWORD *)v35 + 22) = v41;
            v47 = v138;
            *((_QWORD *)v35 + 23) = v40;
            *(_OWORD *)(v35 + 40) = v46;
            *((_DWORD *)v35 + 48) = v39;
            v48 = v139;
            *((_DWORD *)v35 + 49) = v38;
            *(_OWORD *)(v35 + 56) = v47;
            *((_DWORD *)v35 + 50) = v38;
            v49 = v140;
            *((_QWORD *)v35 + 26) = this;
            *(_OWORD *)(v35 + 72) = v48;
            v50 = v141;
            *(_OWORD *)(v35 + 88) = v49;
            v51 = v142;
            *(_OWORD *)(v35 + 104) = v50;
            v52 = v143;
            *(_OWORD *)(v35 + 120) = v51;
            *(_OWORD *)(v35 + 136) = v52;
            *v45 = (struct InteractionLatencyTelemetry::TouchUpdateInfo *)v35;
            if ( a3 >= *((_QWORD *)Scenario + 25) )
            {
              ++*((_DWORD *)Scenario + 38);
              if ( (unsigned int)dword_1803D0EB8 > 5 )
              {
                if ( (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
                {
                  v113 = (struct InteractionLatencyTelemetry::TouchUpdateInfo **)*((_QWORD *)Scenario + 1);
                  v98 = v55;
                  PerformanceCount.QuadPart = (LONGLONG)Scenario;
                  _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                    v53,
                    (unsigned int)&unk_18036DF78,
                    v54,
                    v55,
                    (__int64)&PerformanceCount,
                    (__int64)&v113,
                    (__int64)&v98);
                }
              }
            }
          }
          else
          {
            v108 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024882, 0x30Bu, 0LL);
          }
          return v108;
        }
        v65 = *((_DWORD *)Scenario + 21);
        if ( v65 < 2 )
          goto LABEL_16;
        if ( v65 > 3 )
        {
          if ( v65 == 4 )
          {
LABEL_70:
            if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsNewInteraction(
                   (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 6912),
                   a3) )
            {
              *((_QWORD *)Scenario + 21) = *((_QWORD *)a2 + 19);
            }
            goto LABEL_16;
          }
          if ( v65 != 5 )
          {
            if ( v65 != 6 )
              goto LABEL_16;
            goto LABEL_70;
          }
        }
        if ( *((_WORD *)a2 + 94) != (_WORD)v25 )
          *((_QWORD *)Scenario + 21) = v24;
        goto LABEL_16;
      }
      *(_BYTE *)Scenario = 1;
      InteractionLatencyTelemetry::InteractionTraceProvider::TelemetryProcessingErrorDetected(Scenario, a2, a3);
    }
    else
    {
      v24 = v135;
    }
    v25 = 0LL;
    goto LABEL_8;
  }
  return v108;
}
