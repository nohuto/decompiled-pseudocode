/*
 * XREFs of ?TelemetryProcessingErrorDetected@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@AEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x180165550
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180023E4C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180165B94 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@P.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapSz@G@@U3@U2@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U2@U2@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$01@@U6@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U5@U1@U1@U6@U1@U2@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@333AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapSz@G@@54AEBU?$_tlgWrapperByRef@$0BA@@@4444AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$01@@8777777777777338343@Z @ 0x18015D58C (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapSz@G@@U3@U2@U-.c)
 */

void __fastcall InteractionTraceProvider::TelemetryProcessingErrorDetected(
        const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *a1,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  wchar_t *v7; // rax
  bool v8; // cf
  wchar_t *v9; // rax
  char v10; // [rsp+140h] [rbp-80h] BYREF
  char v11; // [rsp+141h] [rbp-7Fh] BYREF
  char v12; // [rsp+142h] [rbp-7Eh] BYREF
  char v13; // [rsp+143h] [rbp-7Dh] BYREF
  char v14; // [rsp+144h] [rbp-7Ch] BYREF
  char v15; // [rsp+145h] [rbp-7Bh] BYREF
  _BYTE v16[2]; // [rsp+146h] [rbp-7Ah] BYREF
  __int16 v17; // [rsp+148h] [rbp-78h] BYREF
  __int16 v18; // [rsp+14Ah] [rbp-76h] BYREF
  __int16 v19; // [rsp+14Ch] [rbp-74h] BYREF
  int v20; // [rsp+150h] [rbp-70h] BYREF
  int v21; // [rsp+154h] [rbp-6Ch] BYREF
  int v22; // [rsp+158h] [rbp-68h] BYREF
  int v23; // [rsp+15Ch] [rbp-64h] BYREF
  int v24; // [rsp+160h] [rbp-60h] BYREF
  int v25; // [rsp+164h] [rbp-5Ch] BYREF
  int v26; // [rsp+168h] [rbp-58h] BYREF
  int v27; // [rsp+16Ch] [rbp-54h] BYREF
  int v28; // [rsp+170h] [rbp-50h] BYREF
  __int64 v29; // [rsp+178h] [rbp-48h] BYREF
  __int64 v30; // [rsp+180h] [rbp-40h] BYREF
  __int64 v31; // [rsp+188h] [rbp-38h] BYREF
  __int64 v32; // [rsp+190h] [rbp-30h] BYREF
  __int64 v33; // [rsp+198h] [rbp-28h] BYREF
  __int64 v34; // [rsp+1A0h] [rbp-20h] BYREF
  __int64 v35; // [rsp+1A8h] [rbp-18h] BYREF
  __int64 v36; // [rsp+1B0h] [rbp-10h] BYREF
  __int64 v37; // [rsp+1B8h] [rbp-8h] BYREF
  __int64 v38; // [rsp+1C0h] [rbp+0h] BYREF
  __int64 v39; // [rsp+1C8h] [rbp+8h] BYREF
  __int64 v40; // [rsp+1D0h] [rbp+10h] BYREF
  __int64 v41; // [rsp+1D8h] [rbp+18h] BYREF
  __int64 v42; // [rsp+1E0h] [rbp+20h] BYREF
  wchar_t *v43; // [rsp+1E8h] [rbp+28h] BYREF
  wchar_t *v44; // [rsp+1F0h] [rbp+30h] BYREF
  char v45; // [rsp+228h] [rbp+68h] BYREF

  if ( (unsigned int)dword_180346E48 > 5 && (qword_180346E58 & 8) != 0 && (qword_180346E60 & 8) == qword_180346E60 )
  {
    v20 = *((_DWORD *)a2 + 20);
    v45 = *((_BYTE *)a2 + 72);
    v21 = *((_DWORD *)a2 + 14);
    v17 = *((_WORD *)a2 + 30);
    v22 = *((_DWORD *)a2 + 17);
    v23 = *((_DWORD *)a2 + 16);
    v29 = *((_QWORD *)a2 + 5);
    v30 = *((_QWORD *)a2 + 4);
    v31 = *((_QWORD *)a2 + 3);
    v32 = *((_QWORD *)a2 + 2);
    v33 = *((_QWORD *)a2 + 1);
    v34 = *(_QWORD *)a2;
    v35 = *((_QWORD *)a1 + 22);
    v5 = *((_QWORD *)a1 + 21);
    v6 = *((_QWORD *)a1 + 25);
    v36 = v5;
    v38 = a3;
    v37 = a3 - v6;
    v40 = *((_QWORD *)a1 + 1);
    v18 = *((_WORD *)a1 + 65);
    v19 = *((_WORD *)a1 + 64);
    v10 = *((_BYTE *)a1 + 192);
    v41 = *((_QWORD *)a1 + 15);
    v11 = *((_BYTE *)a1 + 96);
    v12 = *((_BYTE *)a1 + 92);
    v13 = *((_BYTE *)a1 + 88);
    v14 = *((_BYTE *)a1 + 84);
    v42 = (__int64)a1 + 100;
    v15 = *((_BYTE *)a1 + 80);
    v7 = (wchar_t *)((char *)a1 + 48);
    v8 = *((_QWORD *)a1 + 9) < 8uLL;
    v39 = v6;
    if ( !v8 )
      v7 = *(wchar_t **)v7;
    v43 = v7;
    v9 = (wchar_t *)((char *)a1 + 16);
    if ( *((_QWORD *)a1 + 5) >= 8uLL )
      v9 = *(wchar_t **)v9;
    v44 = v9;
    v24 = *((_DWORD *)a1 + 37);
    v16[0] = *((_BYTE *)a1 + 144);
    v25 = *((_DWORD *)a1 + 35);
    v26 = *((_DWORD *)a1 + 34);
    v27 = *((_DWORD *)a1 + 33);
    v28 = 5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
      v6,
      byte_1802E529C,
      a3,
      a4,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)v16,
      (__int64)&v24,
      &v44,
      &v43,
      (__int64)&v15,
      &v42,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v41,
      (__int64)&v10,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v17,
      (__int64)&v21,
      (__int64)&v45,
      (__int64)&v20);
  }
}
