/*
 * XREFs of ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K0000000III0AEBUVAIL_TELEMETRY_TOUCH_INFO@1@@Z @ 0x180003EA8
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x180077C20 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z @ 0x180003FDC (-DetectInputGlitch@CTelemetryTouchLatencyAnalysis@@AEBAXAEAUTouchScenarioInfo@1@_K11111111III1@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180004108 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180004A54 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?IsVailContainer@@YA_NXZ @ 0x180004ABC (-IsVailContainer@@YA_NXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@877@Z @ 0x18015AA74 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_18015AA74.c)
 *     ??HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@AEBV01@@Z @ 0x18015C624 (--HCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@AEBV01@@Z.c)
 *     ?FrameLatencies@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@II_KAEBVCLatencyInfo@3@@Z @ 0x18015DC2C (-FrameLatencies@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysi.c)
 *     ?SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z @ 0x180160698 (-SetMax@CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAXAEBV12@@Z.c)
 *     ?TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyData@@_N_K@Z @ 0x180162F9C (-TryGetDataForInteraction@CTelemetryComputeScribbleAggregator@@SA_NIPEAUComputeScribbleLatencyDa.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180214448 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        unsigned __int64 a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        unsigned __int64 a13,
        const struct CTelemetryTouchLatencyAnalysis::VAIL_TELEMETRY_TOUCH_INFO *a14)
{
  unsigned __int64 v14; // rbx
  __int64 v16; // rcx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rdi
  __int64 v18; // rsi
  CTelemetryTouchLatencyAnalysis *v19; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  bool v29; // zf
  bool v30; // al
  char *v31; // rbx
  __int64 v32; // rax
  _DWORD *v33; // [rsp+30h] [rbp-110h]
  char *v34; // [rsp+38h] [rbp-108h]
  _BYTE *v35; // [rsp+68h] [rbp-D8h]
  _BYTE v36[2]; // [rsp+C2h] [rbp-7Eh] BYREF
  char v37; // [rsp+C4h] [rbp-7Ch] BYREF
  __int16 v38; // [rsp+C6h] [rbp-7Ah]
  __int16 v39; // [rsp+C8h] [rbp-78h]
  char *v40; // [rsp+D0h] [rbp-70h]
  int v41; // [rsp+D8h] [rbp-68h]
  _DWORD v42[3]; // [rsp+DCh] [rbp-64h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-58h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-48h]
  __int64 v45; // [rsp+108h] [rbp-38h]
  int v46; // [rsp+110h] [rbp-30h]
  unsigned __int64 v47; // [rsp+118h] [rbp-28h]
  __int64 v48; // [rsp+120h] [rbp-20h]
  __int64 v49; // [rsp+128h] [rbp-18h]
  _QWORD *v50; // [rsp+130h] [rbp-10h]
  _QWORD *v51; // [rsp+138h] [rbp-8h]
  unsigned int v52; // [rsp+140h] [rbp+0h] BYREF
  char *v53; // [rsp+148h] [rbp+8h]
  __int64 v54; // [rsp+150h] [rbp+10h]
  unsigned __int64 v55; // [rsp+158h] [rbp+18h]
  unsigned __int64 v56; // [rsp+160h] [rbp+20h]
  __int64 v57; // [rsp+170h] [rbp+30h]

  v14 = a8;
  if ( a8 >= a3 )
  {
    if ( a8 )
    {
      Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
      if ( Scenario )
      {
        if ( (unsigned int)dword_180341EB8 > 5 && (qword_180341EC8 & 8) != 0 && (qword_180341ED0 & 8) == qword_180341ED0 )
        {
          v47 = a13;
          v48 = *((_QWORD *)Scenario + 1);
          v38 = *((_WORD *)Scenario + 65);
          v39 = *((_WORD *)Scenario + 64);
          v49 = *((_QWORD *)Scenario + 15);
          v36[0] = *((_BYTE *)Scenario + 84);
          v40 = (char *)Scenario + 100;
          v36[1] = *((_BYTE *)Scenario + 80);
          v23 = (_QWORD *)((char *)Scenario + 48);
          if ( *((_QWORD *)Scenario + 9) >= 8uLL )
            v23 = (_QWORD *)*v23;
          v50 = v23;
          v24 = (_QWORD *)((char *)Scenario + 16);
          if ( *((_QWORD *)Scenario + 5) >= 8uLL )
            v24 = (_QWORD *)*v24;
          v51 = v24;
          v41 = *((_DWORD *)Scenario + 37);
          v37 = *((_BYTE *)Scenario + 144);
          v42[0] = *((_DWORD *)Scenario + 35);
          v42[1] = *((_DWORD *)Scenario + 34);
          v42[2] = *((_DWORD *)Scenario + 33);
          v35 = v36;
          v34 = &v37;
          v33 = v42;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
            v16,
            &unk_1802E1B06);
        }
        v18 = 0LL;
        v40 = 0LL;
        v19 = (CTelemetryTouchLatencyAnalysis *)*((_QWORD *)g_pComposition + 16);
        if ( *((_QWORD *)v19 + 1) != *((_QWORD *)v19 + 2)
          && CTelemetryComputeScribbleAggregator::TryGetDataForInteraction(
               a12,
               (struct ComputeScribbleLatencyData *)&v52,
               *((_DWORD *)Scenario + 24) == 2,
               *((_QWORD *)Scenario + 1)) )
        {
          a7 = v56;
          a6 = v55;
          v14 = v56;
          if ( *((_DWORD *)Scenario + 24) == 2 )
          {
            v18 = v54;
            a11 = v52;
            v40 = v53;
            *((_QWORD *)Scenario + 15) = v57;
          }
          else
          {
            *((_DWORD *)Scenario + 24) = 1;
          }
        }
        if ( !a3 )
          goto LABEL_7;
        v25 = qword_1803443F0;
        v45 = 0LL;
        v46 = 0;
        v26 = 0x431BDE82D7B634DBLL;
        v43 = 0LL;
        v44 = 0LL;
        v27 = qword_1803443F0 / 0x3E8uLL;
        v28 = (a7 - a6) % (qword_1803443F0 / 0x3E8uLL);
        v29 = *((_DWORD *)Scenario + 24) == 2;
        HIDWORD(v45) = (a7 - a6) / (qword_1803443F0 / 0x3E8uLL);
        if ( !v29 )
        {
          LODWORD(v43) = (v14 - a3) / v27;
          DWORD1(v43) = (a4 - a3) / (qword_1803443F0 / 0xF4240uLL);
          HIDWORD(v44) = (a5 - a4) / (qword_1803443F0 / 0xF4240uLL);
          LODWORD(v45) = (a6 - a5) / v27;
          v46 = (v14 - a7) / v27;
          v30 = IsVailContainer();
          v25 = qword_1803443F0;
          if ( v30 )
          {
            v26 = qword_1803443F0 / 0xF4240uLL;
            DWORD2(v43) = (*(_QWORD *)a14 - a3) / (qword_1803443F0 / 0xF4240uLL);
            HIDWORD(v43) = (*((_QWORD *)a14 + 1) - *(_QWORD *)a14) / (qword_1803443F0 / 0xF4240uLL);
            v28 = (a4 - *((_QWORD *)a14 + 1)) % (qword_1803443F0 / 0xF4240uLL);
            LODWORD(v44) = (a4 - *((_QWORD *)a14 + 1)) / (qword_1803443F0 / 0xF4240uLL);
          }
        }
        v31 = v40;
        if ( v40 )
        {
          if ( v18 )
            goto LABEL_28;
        }
        else if ( !v18 )
        {
LABEL_28:
          if ( *((_DWORD *)Scenario + 24) == 2 )
          {
            DWORD1(v44) = (v18 - (__int64)v31) / (v25 / 0xF4240);
            DWORD2(v44) = (a6 - v18) / (v25 / 0xF4240);
          }
          if ( *((_DWORD *)Scenario + 54) )
          {
            v32 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator+((char *)Scenario + 308, &v52, &v43);
            CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 308, v32);
            CTelemetryTouchLatencyAnalysis::CLatencyInfo::SetMax(
              (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)Scenario + 264),
              (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)&v43);
          }
          else
          {
            CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=((char *)Scenario + 216, &v43);
          }
          InteractionTraceProvider::FrameLatencies(
            Scenario,
            a10,
            a11,
            a13,
            (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)&v43);
          ++*((_WORD *)Scenario + 105);
LABEL_7:
          CTelemetryTouchLatencyAnalysis::DetectInputGlitch(
            v19,
            Scenario,
            a3,
            a4,
            a5,
            a6,
            (unsigned __int64)v33,
            (unsigned __int64)v34,
            *(_QWORD *)a14,
            *((_QWORD *)a14 + 1),
            a9,
            a10,
            a11,
            (unsigned int)v35,
            a13);
          ++*((_WORD *)Scenario + 104);
          return;
        }
        MicrosoftTelemetryAssertTriggeredNoArgs(v26, v28);
        v25 = qword_1803443F0;
        goto LABEL_28;
      }
    }
  }
}
