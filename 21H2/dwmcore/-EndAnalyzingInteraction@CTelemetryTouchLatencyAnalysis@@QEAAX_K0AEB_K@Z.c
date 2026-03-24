/*
 * XREFs of ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x180023D60
 * Callers:
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x180023F10 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180023090 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180023348 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U1@U1@U6@U1@U5@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@873383777@Z @ 0x18015ACC0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G_ea_18015ACC0.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18015BD2C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@3333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18015BEE4 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$0.c)
 *     McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer @ 0x180161C98 (McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        __int64 a2,
        LARGE_INTEGER a3,
        const unsigned __int64 *a4)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rbx
  int v9; // r9d
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // rcx
  LONGLONG v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v19; // [rsp+108h] [rbp-68h] BYREF
  __int64 v20; // [rsp+110h] [rbp-60h] BYREF
  __int64 v21; // [rsp+118h] [rbp-58h] BYREF
  _QWORD v22[16]; // [rsp+120h] [rbp-50h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+1B0h] [rbp+40h] BYREF
  __int64 v24; // [rsp+1B8h] [rbp+48h] BYREF
  LONGLONG v25; // [rsp+1C0h] [rbp+50h] BYREF
  LARGE_INTEGER v26; // [rsp+1C8h] [rbp+58h] BYREF

  if ( (unsigned int)dword_180344E48 > 5 && (qword_180344E58 & 8) != 0 && (qword_180344E60 & 8) == qword_180344E60 )
  {
    PerformanceCount = a3;
    v24 = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (unsigned int)&dword_180344E48,
      (unsigned int)&unk_1802E3F7B,
      a3.LowPart,
      (_DWORD)a4,
      (__int64)&v24,
      (__int64)&PerformanceCount);
  }
  *((_QWORD *)this + 640) = *a4;
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v10 = (PerformanceCount.QuadPart - *((_QWORD *)Scenario + 20)) / (qword_180347420 / 0x3E8uLL);
    v11 = (unsigned int)v10;
    if ( (unsigned int)dword_180344E48 > 4 && (qword_180344E58 & 8) != 0 && (qword_180344E60 & 8) == qword_180344E60 )
    {
      v12 = *((_QWORD *)Scenario + 25);
      LOBYTE(PerformanceCount.LowPart) = *(_BYTE *)Scenario;
      v26 = a3;
      v25 = a3.QuadPart - v12;
      LODWORD(v24) = *((_DWORD *)Scenario + 38);
      v20 = *((_QWORD *)Scenario + 1);
      v22[0] = v12;
      v21 = (unsigned int)v10;
      v19 = Scenario;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v12,
        (unsigned int)&unk_1802E5A4A,
        v10,
        v9,
        (__int64)&v19,
        (__int64)&v20,
        (__int64)&v24,
        (__int64)&v21,
        (__int64)v22,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&PerformanceCount);
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
      McTemplateU0xxqqqhhqqxxqntz_EventWriteTransfer(
        (_DWORD)Scenario + 136,
        *((_QWORD *)Scenario + 25) - *((unsigned __int16 *)Scenario + 104) - 1,
        *((_QWORD *)Scenario + 1),
        (_DWORD)Scenario,
        *((_DWORD *)Scenario + 21),
        *((_DWORD *)Scenario + 23),
        *((_DWORD *)Scenario + 24),
        *((_WORD *)Scenario + 64),
        *((_WORD *)Scenario + 65),
        v10,
        *((_WORD *)Scenario + 104),
        *((_QWORD *)Scenario + 25),
        *((_QWORD *)Scenario + 25) - *((_WORD *)Scenario + 104) - 1,
        *((_DWORD *)Scenario + 33));
    if ( (unsigned int)dword_180344E48 > 4 && (qword_180344E58 & 2) != 0 && (qword_180344E60 & 2) == qword_180344E60 )
    {
      v13 = a3.QuadPart - *((_QWORD *)Scenario + 25);
      v14 = *((_QWORD *)Scenario + 22);
      v22[3] = *((_QWORD *)Scenario + 25);
      v22[1] = v13;
      v15 = *((_QWORD *)Scenario + 23);
      if ( !v14 )
        v14 = *((_QWORD *)Scenario + 23);
      v22[2] = a3.QuadPart;
      v16 = v15 - v14;
      v22[4] = *((_QWORD *)Scenario + 1);
      LOBYTE(PerformanceCount.LowPart) = *((_BYTE *)Scenario + 192);
      v22[5] = *((_QWORD *)Scenario + 15);
      LOBYTE(v24) = *((_BYTE *)Scenario + 96);
      LOBYTE(v25) = *((_BYTE *)Scenario + 92);
      LOBYTE(v26.LowPart) = *((_BYTE *)Scenario + 88);
      v22[6] = (char *)Scenario + 100;
      v17 = (_QWORD *)((char *)Scenario + 48);
      if ( *((_QWORD *)Scenario + 9) >= 8uLL )
        v17 = (_QWORD *)*v17;
      v22[7] = v17;
      v18 = (_QWORD *)((char *)Scenario + 16);
      if ( *((_QWORD *)Scenario + 5) >= 8uLL )
        v18 = (_QWORD *)*v18;
      v22[8] = v18;
      LODWORD(v19) = *((_DWORD *)Scenario + 37);
      LODWORD(v20) = *((_DWORD *)Scenario + 35);
      LODWORD(v21) = *((_DWORD *)Scenario + 34);
      LODWORD(v22[0]) = *((_DWORD *)Scenario + 33);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v16,
        &unk_1802E5D4E);
    }
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(this, Scenario, v11, v9);
  }
}
