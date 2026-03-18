/*
 * XREFs of ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C
 * Callers:
 *     ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K@Z @ 0x180013AA8 (-TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K@Z.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@XZ @ 0x180015EA8 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScena.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@@Z @ 0x18001B538 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchS.c)
 *     ??1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ @ 0x1801ADD08 (--1CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?DeallocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N@Z @ 0x180013DAC (-DeallocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchSc.c)
 *     ??4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z @ 0x180014160 (--4InteractionFrameLatency@InteractionLatencyTelemetry@@QEAAAEAV01@AEBV01@@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U4@U2@U?$_tlgWrapperByVal@$01@@U6@U1@U4@U4@U4@U4@U1@U2@U1@U1@U1@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByRef@$0BA@@@44464AEBU?$_tlgWrapperByVal@$01@@836666343336@Z @ 0x1801D0E10 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@U-$_tlgWrapper.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5@Z @ 0x1801D1484 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@@-$_tl.c)
 *     ?AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTouchScenarioInfo@2@_NGGAEBVInteractionFrameLatency@2@I@Z @ 0x1801D215C (-AddToInteractionSummary@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEBUTo.c)
 *     ?InteractionAnalysis@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@AEBVInteractionFrameLatency@2@G@Z @ 0x1801D32FC (-InteractionAnalysis@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioI.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RetireScenario(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        struct InteractionLatencyTelemetry::TouchScenarioInfo *a2,
        bool a3,
        bool a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r13
  LARGE_INTEGER v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rdi
  LARGE_INTEGER v12; // r10
  int v13; // ecx
  char v14; // r8
  __int64 v15; // r11
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r14
  unsigned int v23; // r9d
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // r10
  LARGE_INTEGER v27; // r9
  __m128i v28; // xmm2
  __m128i v29; // xmm3
  unsigned int v30; // r9d
  __m128i v31; // xmm4
  __m128i v32; // xmm5
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 i; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rtt
  _QWORD *v40; // rax
  _QWORD *v41; // rax
  char v42; // [rsp+F0h] [rbp-80h] BYREF
  char v43; // [rsp+F1h] [rbp-7Fh] BYREF
  bool v44; // [rsp+F2h] [rbp-7Eh]
  char v45; // [rsp+F3h] [rbp-7Dh]
  char v46; // [rsp+F4h] [rbp-7Ch]
  char v47; // [rsp+F5h] [rbp-7Bh]
  char v48; // [rsp+F6h] [rbp-7Ah]
  char v49; // [rsp+F7h] [rbp-79h]
  __int16 v50; // [rsp+F8h] [rbp-78h]
  int v51; // [rsp+FCh] [rbp-74h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+100h] [rbp-70h] BYREF
  int v53; // [rsp+108h] [rbp-68h]
  int v54; // [rsp+10Ch] [rbp-64h]
  int v55; // [rsp+110h] [rbp-60h]
  int v56; // [rsp+114h] [rbp-5Ch]
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v57; // [rsp+118h] [rbp-58h] BYREF
  __int128 v58; // [rsp+120h] [rbp-50h]
  __m128i v59; // [rsp+130h] [rbp-40h]
  __m128i v60; // [rsp+140h] [rbp-30h]
  __m128i v61; // [rsp+150h] [rbp-20h]
  __int128 v62; // [rsp+160h] [rbp-10h]
  __int128 v63; // [rsp+170h] [rbp+0h]
  __int128 v64; // [rsp+180h] [rbp+10h]
  __int64 v65; // [rsp+190h] [rbp+20h]
  __int64 v66; // [rsp+198h] [rbp+28h]
  __int64 v67; // [rsp+1A0h] [rbp+30h]
  __int64 v68; // [rsp+1A8h] [rbp+38h]
  __int64 v69; // [rsp+1B0h] [rbp+40h]
  char *v70; // [rsp+1B8h] [rbp+48h]
  _QWORD *v71; // [rsp+1C0h] [rbp+50h]
  _QWORD *v72; // [rsp+1C8h] [rbp+58h]
  __int64 v73; // [rsp+1D0h] [rbp+60h]
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v74; // [rsp+1D8h] [rbp+68h]
  _OWORD v75[7]; // [rsp+1E0h] [rbp+70h] BYREF
  _BYTE v76[112]; // [rsp+250h] [rbp+E0h] BYREF

  v44 = a3;
  if ( *((_QWORD *)a2 + 4) || *((_DWORD *)a2 + 24) == 2 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v7 = *((_QWORD *)a2 + 21);
    LOWORD(v8) = 0;
    v9 = PerformanceCount;
    LOWORD(v10) = 0;
    v11 = qword_1803D32C0;
    v12 = *(LARGE_INTEGER *)((char *)a2 + 176);
    *((LARGE_INTEGER *)a2 + 23) = PerformanceCount;
    if ( v7 )
    {
      v27 = v12;
      if ( !v12.QuadPart )
        v27 = v9;
      v8 = (v27.QuadPart - v7) / (v11 / 0x3E8);
    }
    if ( v12.QuadPart )
      v10 = (v9.QuadPart - v12.QuadPart) / (v11 / 0x3E8);
    memset_0(v76, 0, sizeof(v76));
    v13 = *((unsigned __int16 *)a2 + 105);
    v14 = 1;
    if ( (unsigned __int16)v13 > 1u )
    {
      v28 = *(__m128i *)((char *)a2 + 332);
      v29 = *(__m128i *)((char *)a2 + 348);
      v30 = v13 - 1;
      v31 = *(__m128i *)((char *)a2 + 364);
      v32 = *(__m128i *)((char *)a2 + 380);
      v33 = *(_OWORD *)((char *)a2 + 396);
      v34 = *(_OWORD *)((char *)a2 + 412);
      v59 = v29;
      v60 = v31;
      v62 = v33;
      LODWORD(v58) = _mm_cvtsi128_si32(v28) / (unsigned int)(v13 - 1);
      v61 = v32;
      DWORD1(v58) = v28.m128i_i32[1] / (unsigned int)(v13 - 1);
      v63 = v34;
      DWORD2(v58) = v28.m128i_i32[2] / (unsigned int)(v13 - 1);
      HIDWORD(v58) = v28.m128i_i32[3] / (unsigned int)(v13 - 1);
      v64 = *(_OWORD *)((char *)a2 + 428);
      v59.m128i_i32[0] = _mm_cvtsi128_si32(v29) / (unsigned int)(v13 - 1);
      v59.m128i_i32[1] = v29.m128i_i32[1] / (unsigned int)(v13 - 1);
      v59.m128i_i32[2] = v29.m128i_i32[2] / (unsigned int)(v13 - 1);
      v59.m128i_i32[3] = v29.m128i_i32[3] / (unsigned int)(v13 - 1);
      v60.m128i_i32[0] = _mm_cvtsi128_si32(v31) / (unsigned int)(v13 - 1);
      v60.m128i_i32[1] = v31.m128i_i32[1] / (unsigned int)(v13 - 1);
      v60.m128i_i32[2] = v31.m128i_i32[2] / (unsigned int)(v13 - 1);
      v60.m128i_i32[3] = v31.m128i_i32[3] / (unsigned int)(v13 - 1);
      v61.m128i_i32[0] = _mm_cvtsi128_si32(v32) / (unsigned int)(v13 - 1);
      for ( i = 0LL; i < 15; ++i )
        v61.m128i_i32[i + 1] /= v30;
      v75[0] = v58;
      v75[2] = v60;
      v75[1] = v59;
      v75[4] = v62;
      v75[3] = v61;
      v75[6] = v64;
      v75[5] = v63;
      InteractionLatencyTelemetry::InteractionFrameLatency::operator=(v76, v75);
    }
    else
    {
      v15 = 0LL;
    }
    v16 = *((_DWORD *)a2 + 117);
    v17 = *((_DWORD *)a2 + 116);
    if ( v16 <= v17 || (v18 = v16 - v17, v19 = *((unsigned __int16 *)a2 + 231), v19 > v18) )
    {
      v14 = v15;
      v20 = v15;
    }
    else
    {
      v20 = 100 * v19 / v18;
    }
    v21 = *((_QWORD *)this + 863);
    LOWORD(v22) = v15;
    if ( v21 )
    {
      v22 = 0x989680 / v21;
      if ( v14 )
        *((_WORD *)a2 + 236) = (100 - v20) * (0x989680uLL / (unsigned int)v21) / 0x64;
    }
    v23 = dword_1803D0EB8;
    if ( (unsigned int)dword_1803D0EB8 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
    {
      v42 = v44;
      v51 = *((_DWORD *)a2 + 38);
      PerformanceCount = *(LARGE_INTEGER *)((char *)a2 + 8);
      v43 = a4;
      v57 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v24,
        (unsigned int)&unk_18036D817,
        v25,
        v23,
        (__int64)&v57,
        (__int64)&PerformanceCount,
        (__int64)&v51,
        (__int64)&v43,
        (__int64)&v42);
      v23 = dword_1803D0EB8;
      v15 = 0LL;
      v11 = qword_1803D32C0;
    }
    if ( !*((_WORD *)a2 + 104)
      || *((_QWORD *)a2 + 1) == v15
      || *((_QWORD *)a2 + 1) == 0xDDEECCCCDDEE0001uLL
      || *((_DWORD *)a2 + 21) == (_DWORD)v15
      || *((_DWORD *)a2 + 23) == (_DWORD)v15
      || *(_BYTE *)a2 != (_BYTE)v15 )
    {
      if ( v23 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
      {
        v37 = *((_QWORD *)a2 + 25);
        v43 = *(_BYTE *)a2;
        v66 = v37;
        v67 = v26;
        v65 = v37 + v26;
        v38 = *((_QWORD *)a2 + 1);
        v39 = *((_QWORD *)a2 + 23) - *((_QWORD *)a2 + 20);
        v69 = v38;
        v53 = v39 / (v11 / 0x3E8);
        v68 = *((_QWORD *)a2 + 15);
        v42 = *((_BYTE *)a2 + 96);
        v45 = *((_BYTE *)a2 + 92);
        v46 = *((_BYTE *)a2 + 88);
        v47 = *((_BYTE *)a2 + 84);
        v50 = *((_WORD *)a2 + 65);
        LOWORD(v51) = *((_WORD *)a2 + 64);
        v54 = *((_DWORD *)a2 + 37);
        v48 = *((_BYTE *)a2 + 144);
        v55 = *((_DWORD *)a2 + 35);
        v56 = *((_DWORD *)a2 + 34);
        LODWORD(v57) = *((_DWORD *)a2 + 33);
        v70 = (char *)a2 + 100;
        v49 = *((_BYTE *)a2 + 80);
        v40 = (_QWORD *)((char *)a2 + 48);
        if ( *((_QWORD *)a2 + 9) >= 8uLL )
          v40 = (_QWORD *)*v40;
        v71 = v40;
        v41 = (_QWORD *)((char *)a2 + 16);
        if ( *((_QWORD *)a2 + 5) >= 8uLL )
          v41 = (_QWORD *)*v41;
        v72 = v41;
        PerformanceCount.LowPart = *((_DWORD *)a2 + 38);
        v73 = v38;
        v74 = a2;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
          v38,
          &unk_18036C1FE);
      }
    }
    else
    {
      InteractionLatencyTelemetry::InteractionTraceProvider::InteractionAnalysis(
        a2,
        (const struct InteractionLatencyTelemetry::InteractionFrameLatency *)v76,
        v22);
      v36 = *((_DWORD *)a2 + 21);
      if ( !v36 || (unsigned int)(v36 - 2) <= 4 )
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::AddToInteractionSummary(
          this,
          a2,
          a4,
          v8,
          v10,
          (const struct InteractionLatencyTelemetry::InteractionFrameLatency *)v76,
          *((_DWORD *)a2 + 117) - *((_DWORD *)a2 + 116));
    }
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::DeallocateScenario(this, a2, v44);
  }
}
