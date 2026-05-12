/*
 * XREFs of StorpTelemetryLogUnitErrorDataCriticalData @ 0x1C00544D4
 * Callers:
 *     StorpTelemetrySendUnitErrorDataSummary @ 0x1C00032C4 (StorpTelemetrySendUnitErrorDataSummary.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000E52C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C001A3E4 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C001A58C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C001A634 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitErrorDataCriticalData(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r10
  unsigned __int16 *v7; // r11
  int v8; // edx
  _DWORD *v9; // r10
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  char v13; // [rsp+30h] [rbp-D0h] BYREF
  char v14; // [rsp+31h] [rbp-CFh] BYREF
  char v15; // [rsp+32h] [rbp-CEh] BYREF
  char v16; // [rsp+33h] [rbp-CDh] BYREF
  int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  int v19; // [rsp+3Ch] [rbp-C4h] BYREF
  int v20; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+44h] [rbp-BCh] BYREF
  int v22; // [rsp+48h] [rbp-B8h] BYREF
  int v23; // [rsp+4Ch] [rbp-B4h] BYREF
  int v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v26; // [rsp+60h] [rbp-A0h] BYREF
  char *v27; // [rsp+80h] [rbp-80h]
  __int64 v28; // [rsp+88h] [rbp-78h]
  __int64 v29; // [rsp+90h] [rbp-70h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  int *v33; // [rsp+B0h] [rbp-50h]
  __int64 v34; // [rsp+B8h] [rbp-48h]
  char *v35; // [rsp+C0h] [rbp-40h]
  __int64 v36; // [rsp+C8h] [rbp-38h]
  char *v37; // [rsp+D0h] [rbp-30h]
  __int64 v38; // [rsp+D8h] [rbp-28h]
  char *v39; // [rsp+E0h] [rbp-20h]
  __int64 v40; // [rsp+E8h] [rbp-18h]
  _BYTE v41[16]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v42[16]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v43[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v44[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v45; // [rsp+130h] [rbp+30h]
  __int64 v46; // [rsp+138h] [rbp+38h]
  int *v47; // [rsp+140h] [rbp+40h]
  __int64 v48; // [rsp+148h] [rbp+48h]
  int *v49; // [rsp+150h] [rbp+50h]
  __int64 v50; // [rsp+158h] [rbp+58h]
  int *v51; // [rsp+160h] [rbp+60h]
  __int64 v52; // [rsp+168h] [rbp+68h]
  int *v53; // [rsp+170h] [rbp+70h]
  __int64 v54; // [rsp+178h] [rbp+78h]
  int *v55; // [rsp+180h] [rbp+80h]
  __int64 v56; // [rsp+188h] [rbp+88h]
  int *v57; // [rsp+190h] [rbp+90h]
  __int64 v58; // [rsp+198h] [rbp+98h]
  int *v59; // [rsp+1A0h] [rbp+A0h]
  __int64 v60; // [rsp+1A8h] [rbp+A8h]
  _QWORD *v61; // [rsp+1B0h] [rbp+B0h]
  __int64 v62; // [rsp+1B8h] [rbp+B8h]
  _DWORD *v63; // [rsp+1C0h] [rbp+C0h]
  _QWORD v64[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  _DWORD v65[2]; // [rsp+1E8h] [rbp+E8h] BYREF
  _DWORD *v66; // [rsp+1F0h] [rbp+F0h]
  __int64 v67; // [rsp+1F8h] [rbp+F8h]
  _DWORD *v68; // [rsp+200h] [rbp+100h]
  _DWORD v69[2]; // [rsp+208h] [rbp+108h] BYREF

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0069058 > 5 )
  {
    if ( tlgKeywordOn(a1, 0x800000000000LL) )
    {
      v3 = *(_QWORD *)(v1 + 24);
      v27 = &v13;
      v13 = 5;
      v28 = v2;
      v30 = 16LL;
      v29 = v3 + 5192;
      v31 = v1 + 1976;
      v32 = 16LL;
      v17 = *(_DWORD *)(v3 + 56);
      v33 = &v17;
      v14 = *(_BYTE *)(v1 + 96);
      v35 = &v14;
      v15 = *(_BYTE *)(v1 + 97);
      v37 = &v15;
      v16 = *(_BYTE *)(v1 + 98);
      v39 = &v16;
      v34 = 4LL;
      v36 = v2;
      v38 = v2;
      v40 = v2;
      tlgCreate1Sz_wchar_t((__int64)v41, *(_WORD **)(v3 + 4864));
      tlgCreate1Sz_char((__int64)v42, (_BYTE *)(v4 + 160));
      tlgCreate1Sz_char((__int64)v43, (_BYTE *)(v5 + 169));
      tlgCreate1Sz_char((__int64)v44, (_BYTE *)(v6 + 186));
      v8 = v7[1];
      v45 = &v25;
      v18 = v9[582];
      v47 = &v18;
      v19 = v9[583];
      v49 = &v19;
      v20 = v9[584];
      v51 = &v20;
      v21 = v9[585];
      v53 = &v21;
      v22 = v9[534];
      v55 = &v22;
      v25 = *(_QWORD *)&g_SystemUptime_s;
      v10 = *v7;
      v57 = &v23;
      v46 = 8LL;
      v48 = 4LL;
      v50 = 4LL;
      v52 = 4LL;
      v54 = 4LL;
      v56 = 4LL;
      v23 = v10;
      v58 = 4LL;
      v24 = v8;
      v59 = &v24;
      v61 = v64;
      v63 = v9 + 586;
      v64[1] = v65;
      v64[3] = v9 + 596;
      v65[0] = 40 * v10;
      v66 = v69;
      v68 = v9 + 696;
      v69[0] = 40 * v8;
      v60 = 4LL;
      v62 = 2LL;
      v64[0] = 40LL;
      v64[2] = 2LL;
      v65[1] = 0;
      v67 = 2LL;
      v69[1] = 0;
      tlgWriteTransfer_EtwWriteTransfer(v10, (unsigned __int8 *)dword_1C005E1CD, v11, v12, 0x1Bu, &v26);
    }
  }
}
