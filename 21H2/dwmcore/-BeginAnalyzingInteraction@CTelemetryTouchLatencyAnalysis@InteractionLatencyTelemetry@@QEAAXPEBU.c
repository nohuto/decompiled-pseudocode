/*
 * XREFs of ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180015B80
 * Callers:
 *     ?TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG@Z @ 0x180015A80 (-TelemetryBeginTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAXAEBUTOUCH_TELEMETRY_B.c)
 * Callees:
 *     ?BeginInteraction@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_K@Z @ 0x180015E0C (-BeginInteraction@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo.c)
 *     ?BeginScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_K@Z @ 0x180015E54 (-BeginScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@.c)
 *     ?GetDwmRemotingMode@InteractionLatencyTelemetry@@YA?AW4Enum@DwmRemotingMode@@XZ @ 0x180015E8C (-GetDwmRemotingMode@InteractionLatencyTelemetry@@YA-AW4Enum@DwmRemotingMode@@XZ.c)
 *     ?AllocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@XZ @ 0x180015EA8 (-AllocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScena.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8 (-FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioI.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180061A30 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180061B50 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180061B90 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801D0BFC (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?ReuseScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@_K@Z @ 0x1801D57F4 (-ReuseScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@.c)
 */

void __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::BeginAnalyzingInteraction(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_BEGIN_INFO *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        unsigned __int64 a5,
        unsigned int a6,
        const struct _LUID *a7,
        bool a8)
{
  struct InteractionLatencyTelemetry::TouchScenarioInfo *Scenario; // rax
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *v11; // rcx
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v12; // rbx
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v13; // rdi
  _WORD *v14; // rdx
  unsigned __int64 v15; // rcx
  _WORD *v16; // rax
  _WORD *v17; // rbx
  __int64 v18; // rbx
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int64 v23; // rcx
  __int128 v24; // xmm0
  int v25; // ecx
  int v26; // r8d
  int v27; // r9d
  _WORD *v28; // rcx
  int v29; // [rsp+40h] [rbp-59h] BYREF
  __int64 v30; // [rsp+48h] [rbp-51h] BYREF
  struct InteractionLatencyTelemetry::TouchScenarioInfo *v31; // [rsp+50h] [rbp-49h] BYREF
  __int128 v32; // [rsp+58h] [rbp-41h] BYREF
  __int128 v33; // [rsp+68h] [rbp-31h]
  _QWORD v34[2]; // [rsp+78h] [rbp-21h] BYREF
  unsigned __int64 v35; // [rsp+88h] [rbp-11h]
  unsigned __int64 v36; // [rsp+90h] [rbp-9h]

  *((_BYTE *)this + 6960) = 1;
  Scenario = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v12 = Scenario;
  if ( Scenario )
  {
    ++*((_DWORD *)Scenario + 38);
    if ( (unsigned int)dword_1803D0EB8 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1803D0EB8, 8LL) )
    {
      v30 = *((_QWORD *)v12 + 1);
      v29 = v27;
      v31 = v12;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        v25,
        (unsigned int)&unk_18036DF78,
        v26,
        v27,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29);
    }
    InteractionLatencyTelemetry::InteractionTraceProvider::ReuseScenario(v12, a5);
    *((_QWORD *)v12 + 15) = *((_QWORD *)a2 + 5);
    InteractionLatencyTelemetry::InteractionTraceProvider::BeginInteraction(v12, a5);
  }
  else if ( a4 || *((_DWORD *)a2 + 12) == 2 )
  {
    v13 = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::AllocateScenario(v11);
    if ( !a4 )
      a4 = &word_18032C468;
    std::wstring::wstring(v34, a4);
    v14 = v34;
    if ( v36 >= 8 )
      v14 = (_WORD *)v34[0];
    if ( v35 )
    {
      v15 = v35;
      v16 = v14;
      v17 = 0LL;
      if ( *v14 == 1 )
      {
LABEL_11:
        v17 = v16;
      }
      else
      {
        while ( v15 != 1 )
        {
          ++v16;
          --v15;
          if ( *v16 == 1 )
            goto LABEL_11;
        }
      }
      if ( v17 )
      {
        v18 = v17 - v14;
        if ( v18 != -1 )
        {
          *(_QWORD *)&v33 = 0LL;
          LOWORD(v32) = 0;
          *((_QWORD *)&v33 + 1) = 7LL;
          std::wstring::assign(&v32);
          if ( (__int128 *)((char *)v13 + 16) != &v32 )
          {
            std::wstring::_Tidy_deallocate((char *)v13 + 16);
            v19 = v33;
            *(_QWORD *)&v33 = 0LL;
            v20 = v32;
            *((_QWORD *)&v33 + 1) = 7LL;
            LOWORD(v32) = 0;
            *((_OWORD *)v13 + 1) = v20;
            *((_OWORD *)v13 + 2) = v19;
          }
          std::wstring::_Tidy_deallocate(&v32);
          *(_QWORD *)&v33 = 0LL;
          *((_QWORD *)&v33 + 1) = 7LL;
          LOWORD(v32) = 0;
          if ( v35 >= v18 + 1 )
          {
            std::wstring::assign(&v32);
            if ( (__int128 *)((char *)v13 + 48) != &v32 )
            {
              std::wstring::_Tidy_deallocate((char *)v13 + 48);
              v21 = v33;
              *(_QWORD *)&v33 = 0LL;
              v22 = v32;
              *((_QWORD *)&v33 + 1) = 7LL;
              LOWORD(v32) = 0;
              *((_OWORD *)v13 + 3) = v22;
              *((_OWORD *)v13 + 4) = v21;
            }
            std::wstring::_Tidy_deallocate(&v32);
LABEL_20:
            *((_QWORD *)v13 + 1) = *(_QWORD *)a2;
            *((_DWORD *)v13 + 20) = *((_DWORD *)a2 + 3);
            *((_WORD *)v13 + 64) = *((_WORD *)a2 + 4);
            *((_WORD *)v13 + 65) = *((_WORD *)a2 + 5);
            *((_DWORD *)v13 + 33) = a6;
            v23 = (__int64)*a7;
            *((_BYTE *)v13 + 144) = a8;
            *((_QWORD *)v13 + 17) = v23;
            *((_DWORD *)v13 + 37) = InteractionLatencyTelemetry::GetDwmRemotingMode();
            *((_DWORD *)v13 + 22) = *((_DWORD *)a2 + 4);
            v24 = *(_OWORD *)((char *)a2 + 20);
            *((_BYTE *)v13 + 156) = 0;
            *(_OWORD *)((char *)v13 + 100) = v24;
            *((_QWORD *)v13 + 15) = *((_QWORD *)a2 + 5);
            *((_DWORD *)v13 + 24) = *((_DWORD *)a2 + 12);
            InteractionLatencyTelemetry::InteractionTraceProvider::BeginScenario(v13, a5);
            InteractionLatencyTelemetry::InteractionTraceProvider::BeginInteraction(v13, a5);
            std::wstring::_Tidy_deallocate(v34);
            return;
          }
          std::_Xout_of_range("invalid string position");
          __debugbreak();
        }
      }
    }
    if ( (_QWORD *)((char *)v13 + 16) != v34 )
      std::wstring::assign((char *)v13 + 16);
    v28 = (_WORD *)((char *)v13 + 48);
    if ( *((_QWORD *)v13 + 9) >= 8uLL )
      v28 = (_WORD *)*((_QWORD *)v13 + 6);
    *((_QWORD *)v13 + 8) = 0LL;
    *v28 = 0;
    goto LABEL_20;
  }
}
