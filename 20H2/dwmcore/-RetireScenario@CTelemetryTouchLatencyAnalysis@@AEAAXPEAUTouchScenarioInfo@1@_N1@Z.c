/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800041CC
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18000399C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180003E50 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180004C4C (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAX_K@Z @ 0x18001B9D0 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAX_K@Z.c)
 *     ??1CPartitionVerticalBlankScheduler@@UEAA@XZ @ 0x1801533D4 (--1CPartitionVerticalBlankScheduler@@UEAA@XZ.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180161224 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N@Z @ 0x1800043C8 (-DeallocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N@Z.c)
 *     ??4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z @ 0x180004A54 (--4CLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U4@U2@U?$_tlgWrapperByVal@$01@@U6@U1@U4@U4@U4@U4@U1@U2@U1@U1@U1@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@44464AEBU?$_tlgWrapperByVal@$01@@836666343336@Z @ 0x18015BAA0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapper.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x18015C114 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@@-$_tl.c)
 *     ??KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA?AV01@I@Z @ 0x18015C6D8 (--KCLatencyInfo@CTelemetryTouchLatencyAnalysis@@QEAA-AV01@I@Z.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCLatencyInfo@1@I@Z @ 0x18015C790 (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@@AEAAXPEBUTouchScenarioInfo@1@_NGGAEBVCL.c)
 *     ?InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBVCLatencyInfo@3@G@Z @ 0x18015DF40 (-InteractionAnalysis@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAn.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::RetireScenario(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        bool a3,
        bool a4)
{
  unsigned __int64 v4; // r14
  unsigned __int64 v8; // r8
  LARGE_INTEGER v9; // rax
  unsigned __int64 v10; // r13
  LARGE_INTEGER v11; // rcx
  unsigned __int64 v12; // r12
  LARGE_INTEGER v13; // r10
  unsigned __int64 v14; // r11
  int LowPart_high; // ecx
  char v16; // di
  unsigned int HighPart; // ecx
  DWORD LowPart; // eax
  unsigned int v19; // ecx
  unsigned int QuadPart_high; // eax
  __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rcx
  bool v25; // di
  __int64 LowPart_low; // r8
  LARGE_INTEGER v27; // r9
  __int64 v28; // rax
  LONG v29; // eax
  LARGE_INTEGER v30; // rdx
  LARGE_INTEGER v31; // rcx
  unsigned __int64 v32; // rtt
  LARGE_INTEGER *v33; // rax
  LARGE_INTEGER *v34; // rax
  char QuadPart; // [rsp+F0h] [rbp-80h] BYREF
  char v36; // [rsp+F1h] [rbp-7Fh] BYREF
  char v37; // [rsp+F2h] [rbp-7Eh] BYREF
  char v38; // [rsp+F3h] [rbp-7Dh] BYREF
  char v39; // [rsp+F4h] [rbp-7Ch] BYREF
  char v40; // [rsp+F5h] [rbp-7Bh] BYREF
  __int16 v41; // [rsp+F6h] [rbp-7Ah] BYREF
  DWORD v42; // [rsp+F8h] [rbp-78h] BYREF
  int v43; // [rsp+FCh] [rbp-74h] BYREF
  LONG v44; // [rsp+100h] [rbp-70h] BYREF
  LONG v45; // [rsp+104h] [rbp-6Ch] BYREF
  DWORD v46; // [rsp+108h] [rbp-68h] BYREF
  LARGE_INTEGER *v47; // [rsp+110h] [rbp-60h] BYREF
  LARGE_INTEGER v48; // [rsp+118h] [rbp-58h] BYREF
  LONGLONG v49; // [rsp+120h] [rbp-50h] BYREF
  LARGE_INTEGER v50; // [rsp+128h] [rbp-48h] BYREF
  __int64 v51; // [rsp+130h] [rbp-40h] BYREF
  LARGE_INTEGER v52; // [rsp+138h] [rbp-38h] BYREF
  LARGE_INTEGER v53; // [rsp+140h] [rbp-30h] BYREF
  char *v54; // [rsp+148h] [rbp-28h] BYREF
  LARGE_INTEGER *v55; // [rsp+150h] [rbp-20h] BYREF
  LARGE_INTEGER *v56; // [rsp+158h] [rbp-18h] BYREF
  LARGE_INTEGER v57; // [rsp+160h] [rbp-10h] BYREF
  LARGE_INTEGER *v58; // [rsp+168h] [rbp-8h] BYREF
  _OWORD v59[2]; // [rsp+170h] [rbp+0h] BYREF
  __int64 v60; // [rsp+190h] [rbp+20h]
  int v61; // [rsp+198h] [rbp+28h]
  char v62[96]; // [rsp+1A0h] [rbp+30h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+218h] [rbp+A8h] BYREF
  bool v64; // [rsp+220h] [rbp+B0h]

  v64 = a3;
  LOWORD(v4) = 0;
  if ( a2[4].QuadPart || a2[12].LowPart == 2 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v9 = a2[21];
    LOWORD(v10) = 0;
    v11 = PerformanceCount;
    LOWORD(v12) = 0;
    v13 = a2[22];
    v14 = qword_1803443F0;
    a2[23] = PerformanceCount;
    if ( v9.QuadPart )
    {
      v27 = v11;
      if ( v13.QuadPart )
        v27 = v13;
      v8 = v14 / 0x3E8;
      v10 = (v27.QuadPart - v9.QuadPart) / (v14 / 0x3E8);
    }
    if ( v13.QuadPart )
    {
      v8 = v14 / 0x3E8;
      v12 = (v11.QuadPart - v13.QuadPart) / (v14 / 0x3E8);
    }
    LowPart_high = HIWORD(a2[26].u.LowPart);
    v60 = 0LL;
    memset(v59, 0, sizeof(v59));
    v61 = 0;
    v16 = 1;
    if ( (unsigned __int16)LowPart_high > 1u )
    {
      v28 = CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator/(
              (char *)&a2[38].QuadPart + 4,
              v62,
              (unsigned int)(LowPart_high - 1));
      CTelemetryTouchLatencyAnalysis::CLatencyInfo::operator=(v59, v28);
      v14 = qword_1803443F0;
    }
    HighPart = a2[45].HighPart;
    LowPart = a2[45].LowPart;
    if ( HighPart <= LowPart || (v19 = HighPart - LowPart, QuadPart_high = HIWORD(a2[44].QuadPart), QuadPart_high > v19) )
    {
      v16 = 0;
      v21 = 0LL;
    }
    else
    {
      v21 = 100 * QuadPart_high / v19;
    }
    v22 = *((_QWORD *)this + 640);
    if ( v22 )
    {
      LODWORD(v8) = 10000000;
      v4 = 0x989680 / v22;
      if ( v16 )
      {
        v8 = (unsigned int)(100 - v21) * (0x989680uLL / (unsigned int)v22) / 0x64;
        LOWORD(a2[46].LowPart) = v8;
      }
    }
    v23 = dword_180341EB8;
    v24 = qword_180341ED0;
    if ( (unsigned int)dword_180341EB8 > 4 && (qword_180341EC8 & 8) != 0 && (qword_180341ED0 & 8) == qword_180341ED0 )
    {
      v25 = v64;
      v42 = a2[19].LowPart;
      v48 = a2[1];
      LOBYTE(PerformanceCount.LowPart) = v64;
      QuadPart = a4;
      v47 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        qword_180341ED0,
        (unsigned int)&unk_1802E27FB,
        v8,
        v21,
        (__int64)&v47,
        (__int64)&v48,
        (__int64)&v42,
        (__int64)&QuadPart,
        (__int64)&PerformanceCount);
      v14 = qword_1803443F0;
      v24 = qword_180341ED0;
      v23 = dword_180341EB8;
    }
    else
    {
      v25 = v64;
    }
    LowPart_low = LOWORD(a2[26].LowPart);
    if ( (_WORD)LowPart_low
      && a2[1].QuadPart
      && a2[1].QuadPart != 0xDDEECCCCDDEE0001uLL
      && !LOBYTE(a2->LowPart)
      && (a2[12].LowPart == 2 || a2[10].HighPart && a2[11].HighPart) )
    {
      InteractionTraceProvider::InteractionAnalysis(
        (const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)a2,
        (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)v59,
        v4);
      v29 = a2[10].HighPart;
      if ( !v29 || (unsigned int)(v29 - 2) <= 4 )
        CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
          this,
          (const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)a2,
          a4,
          v10,
          v12,
          (const struct CTelemetryTouchLatencyAnalysis::CLatencyInfo *)v59,
          a2[45].HighPart - a2[45].LowPart);
    }
    else if ( v23 > 5 && (qword_180341EC8 & 8) != 0 && (v24 & 8) == v24 )
    {
      v30 = a2[25];
      LOBYTE(PerformanceCount.LowPart) = a2->LowPart;
      v50 = v30;
      v51 = LowPart_low;
      v49 = v30.QuadPart + LowPart_low;
      v31 = a2[1];
      v32 = a2[23].QuadPart - a2[20].QuadPart;
      v53 = v31;
      v43 = v32 / (v14 / 0x3E8);
      v52 = a2[15];
      QuadPart = a2[12].QuadPart;
      v36 = BYTE4(a2[11].QuadPart);
      v37 = a2[11].QuadPart;
      v38 = BYTE4(a2[10].QuadPart);
      v41 = HIWORD(a2[16].u.LowPart);
      LOWORD(v42) = a2[16].LowPart;
      v44 = a2[18].HighPart;
      v39 = a2[18].QuadPart;
      v45 = a2[17].HighPart;
      v46 = a2[17].LowPart;
      LODWORD(v47) = a2[16].HighPart;
      v54 = (char *)&a2[12].QuadPart + 4;
      v40 = a2[10].QuadPart;
      v33 = a2 + 6;
      if ( a2[9].QuadPart >= 8uLL )
        v33 = (LARGE_INTEGER *)v33->QuadPart;
      v55 = v33;
      v34 = a2 + 2;
      if ( a2[5].QuadPart >= 8uLL )
        v34 = (LARGE_INTEGER *)v34->QuadPart;
      v56 = v34;
      v48.LowPart = a2[19].LowPart;
      v57 = v31;
      v58 = a2;
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>)(
        (LARGE_INTEGER)v31.QuadPart,
        &unk_1802E16A5,
        LowPart_low,
        v21,
        &v58,
        &v57,
        &v48,
        &v56,
        &v55,
        &v40,
        &v54,
        &v47,
        &v46,
        &v45,
        &v39,
        &v44,
        &v42,
        &v41,
        &v53,
        &v38,
        &v37,
        &v36,
        &QuadPart,
        &v52,
        &v43,
        &v51,
        &v50,
        &v49,
        &PerformanceCount);
    }
    CTelemetryTouchLatencyAnalysis::DeallocateScenario(
      this,
      (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)a2,
      v25);
  }
}
