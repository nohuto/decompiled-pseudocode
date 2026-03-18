/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180013564
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x180012F20 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180013098 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ.c)
 *     ?BeginInteraction@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_K@Z @ 0x18001311C (-BeginInteraction@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnaly.c)
 *     ?GetDwmRemotingMode@CTelemetryTouchLatencyAnalysis@@CA?AW4Enum@DwmRemotingMode@@XZ @ 0x180013148 (-GetDwmRemotingMode@CTelemetryTouchLatencyAnalysis@@CA-AW4Enum@DwmRemotingMode@@XZ.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180014598 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180095920 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18009663C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800966B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18015D69C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18015D738 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?ReuseScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_K@Z @ 0x180161BF8 (-ReuseScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        LONG a6,
        LARGE_INTEGER *a7,
        bool a8)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  CTelemetryTouchLatencyAnalysis *v14; // r11
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v15; // rbx
  LARGE_INTEGER *v16; // rax
  const unsigned __int16 *v17; // rdx
  LARGE_INTEGER *v18; // rbx
  _WORD *v19; // rdx
  unsigned __int64 v20; // rcx
  _WORD *v21; // rax
  _WORD *v22; // rdi
  __int64 v23; // rdi
  __int128 v24; // xmm0
  __m128i v25; // xmm1
  __int128 v26; // xmm0
  __m128i v27; // xmm1
  LARGE_INTEGER v28; // rcx
  __int64 v29; // rdx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  __int128 v33; // xmm0
  int v34; // edx
  LARGE_INTEGER *QuadPart; // rcx
  int LowPart; // [rsp+40h] [rbp-89h] BYREF
  __int64 v37; // [rsp+48h] [rbp-81h] BYREF
  unsigned __int64 v38; // [rsp+50h] [rbp-79h] BYREF
  LARGE_INTEGER *v39; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v40[2]; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 v41; // [rsp+70h] [rbp-59h]
  unsigned __int64 v42; // [rsp+78h] [rbp-51h]
  __int128 v43; // [rsp+80h] [rbp-49h] BYREF
  __m128i si128; // [rsp+90h] [rbp-39h]
  __int128 v45; // [rsp+A0h] [rbp-29h] BYREF
  __m128i v46; // [rsp+B0h] [rbp-19h]

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v15 = Scenario;
  if ( !Scenario )
  {
    if ( !a4 && *((_DWORD *)a2 + 12) != 2 )
      return;
    v16 = CTelemetryTouchLatencyAnalysis::AllocateScenario(v14);
    v17 = (const unsigned __int16 *)&unk_18028970C;
    v18 = v16;
    if ( a4 )
      v17 = a4;
    std::wstring::wstring(v40, v17);
    v19 = v40;
    if ( v42 >= 8 )
      v19 = (_WORD *)v40[0];
    if ( !v41 )
      goto LABEL_31;
    v20 = v41;
    v21 = v19;
    v22 = 0LL;
    if ( *v19 == 1 )
    {
LABEL_11:
      v22 = v21;
    }
    else
    {
      while ( v20 != 1 )
      {
        ++v21;
        --v20;
        if ( *v21 == 1 )
          goto LABEL_11;
      }
    }
    if ( v22 )
      v23 = v22 - v19;
    else
LABEL_31:
      v23 = -1LL;
    if ( v23 != -1 )
    {
      LOWORD(v43) = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      std::wstring::assign(&v43);
      if ( &v18[2] != (LARGE_INTEGER *)&v43 )
      {
        std::wstring::_Tidy_deallocate(&v18[2]);
        v24 = v43;
        LOWORD(v43) = 0;
        v25 = si128;
        *(_OWORD *)&v18[2].LowPart = v24;
        si128 = _mm_load_si128((const __m128i *)&_xmm);
        *(__m128i *)&v18[4].LowPart = v25;
      }
      std::wstring::_Tidy_deallocate(&v43);
      LOWORD(v45) = 0;
      v46 = _mm_load_si128((const __m128i *)&_xmm);
      if ( v41 >= v23 + 1 )
      {
        std::wstring::assign(&v45);
        if ( &v18[6] != (LARGE_INTEGER *)&v45 )
        {
          std::wstring::_Tidy_deallocate(&v18[6]);
          v26 = v45;
          LOWORD(v45) = 0;
          v27 = v46;
          *(_OWORD *)&v18[6].LowPart = v26;
          v46 = _mm_load_si128((const __m128i *)&_xmm);
          *(__m128i *)&v18[8].LowPart = v27;
        }
        std::wstring::_Tidy_deallocate(&v45);
LABEL_21:
        v18[1] = *(LARGE_INTEGER *)a2;
        v18[10].LowPart = *((_DWORD *)a2 + 3);
        LOWORD(v18[16].LowPart) = *((_WORD *)a2 + 4);
        HIWORD(v18[16].u.LowPart) = *((_WORD *)a2 + 5);
        v18[16].HighPart = a6;
        v28 = *a7;
        LOBYTE(v18[18].LowPart) = a8;
        v18[17] = v28;
        v18[18].HighPart = CTelemetryTouchLatencyAnalysis::GetDwmRemotingMode();
        v18[11].LowPart = *((_DWORD *)a2 + 4);
        v33 = *(_OWORD *)((char *)a2 + 20);
        v18[19].HighPart = 0;
        *(_OWORD *)((char *)&v18[12].QuadPart + 4) = v33;
        v18[15] = *(LARGE_INTEGER *)((char *)a2 + 40);
        v18[12].LowPart = *((_DWORD *)a2 + 12);
        if ( (unsigned int)dword_180342E48 > 4 && (qword_180342E58 & 8) != 0 && (qword_180342E60 & 8) == qword_180342E60 )
        {
          LowPart = v18[19].LowPart;
          v37 = v29;
          v38 = a5;
          v39 = v18;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
            v30,
            (unsigned int)&unk_1802E3B7F,
            v31,
            v32,
            (__int64)&v39,
            (__int64)&v37,
            (__int64)&LowPart,
            (__int64)&v38);
        }
        InteractionTraceProvider::BeginInteraction((const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v18);
        std::wstring::_Tidy_deallocate(v40);
        return;
      }
      std::_Xout_of_range("invalid string position");
      __debugbreak();
    }
    if ( &v18[2] != (LARGE_INTEGER *)v40 )
      std::wstring::assign(&v18[2]);
    QuadPart = v18 + 6;
    if ( v18[9].QuadPart >= 8uLL )
      QuadPart = (LARGE_INTEGER *)v18[6].QuadPart;
    v18[8].QuadPart = 0LL;
    LOWORD(QuadPart->LowPart) = 0;
    goto LABEL_21;
  }
  v34 = *((_DWORD *)Scenario + 38) + 1;
  *((_DWORD *)Scenario + 38) = v34;
  if ( (unsigned int)dword_180342E48 > 5 && (qword_180342E58 & 8) != 0 && (qword_180342E60 & 8) == qword_180342E60 )
  {
    v37 = *((_QWORD *)Scenario + 1);
    LowPart = v34;
    v38 = (unsigned __int64)Scenario;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      v11,
      (unsigned int)&unk_1802E3D36,
      v12,
      v13,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&LowPart);
  }
  InteractionTraceProvider::ReuseScenario(v15, a5);
  *((_QWORD *)v15 + 15) = *((_QWORD *)a2 + 5);
  InteractionTraceProvider::BeginInteraction(v15);
}
