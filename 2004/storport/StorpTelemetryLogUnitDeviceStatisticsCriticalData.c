/*
 * XREFs of StorpTelemetryLogUnitDeviceStatisticsCriticalData @ 0x1C0052C70
 * Callers:
 *     StorpTelemetrySendUnitDeviceStatistics @ 0x1C00024C8 (StorpTelemetrySendUnitDeviceStatistics.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0002AFC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C0019900 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0019AA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019B50 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitDeviceStatisticsCriticalData(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r11
  __int64 v4; // r11
  __int64 v5; // r11
  __int64 v6; // r8
  __int64 v7; // r10
  int v8; // edx
  __int16 *v9; // rax
  __int16 v10; // cx
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  char v28; // [rsp+30h] [rbp-D0h] BYREF
  char v29; // [rsp+31h] [rbp-CFh] BYREF
  char v30; // [rsp+32h] [rbp-CEh] BYREF
  char v31; // [rsp+33h] [rbp-CDh] BYREF
  char v32; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  int v35; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+44h] [rbp-BCh] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+4Ch] [rbp-B4h] BYREF
  int v39; // [rsp+50h] [rbp-B0h] BYREF
  int v40; // [rsp+54h] [rbp-ACh] BYREF
  int v41; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  int *v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  char *v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h]
  char *v53; // [rsp+D0h] [rbp-30h]
  __int64 v54; // [rsp+D8h] [rbp-28h]
  char *v55; // [rsp+E0h] [rbp-20h]
  __int64 v56; // [rsp+E8h] [rbp-18h]
  char v57[16]; // [rsp+F0h] [rbp-10h] BYREF
  char v58[16]; // [rsp+100h] [rbp+0h] BYREF
  char v59[16]; // [rsp+110h] [rbp+10h] BYREF
  char v60[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 *v61; // [rsp+130h] [rbp+30h]
  __int64 v62; // [rsp+138h] [rbp+38h]
  __int16 *v63; // [rsp+140h] [rbp+40h]
  __int64 v64; // [rsp+148h] [rbp+48h]
  _DWORD *v65; // [rsp+150h] [rbp+50h]
  __int64 v66; // [rsp+158h] [rbp+58h]
  _QWORD *v67; // [rsp+160h] [rbp+60h]
  _DWORD v68[2]; // [rsp+168h] [rbp+68h] BYREF
  int *v69; // [rsp+170h] [rbp+70h]
  __int64 v70; // [rsp+178h] [rbp+78h]
  int *v71; // [rsp+180h] [rbp+80h]
  __int64 v72; // [rsp+188h] [rbp+88h]
  __int64 *v73; // [rsp+190h] [rbp+90h]
  __int64 v74; // [rsp+198h] [rbp+98h]
  _DWORD *v75; // [rsp+1A0h] [rbp+A0h]
  __int64 v76; // [rsp+1A8h] [rbp+A8h]
  __int64 v77; // [rsp+1B0h] [rbp+B0h]
  _DWORD v78[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  _DWORD *v79; // [rsp+1C0h] [rbp+C0h]
  __int64 v80; // [rsp+1C8h] [rbp+C8h]
  __int64 v81; // [rsp+1D0h] [rbp+D0h]
  _DWORD v82[2]; // [rsp+1D8h] [rbp+D8h] BYREF
  _DWORD *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  __int64 v85; // [rsp+1F0h] [rbp+F0h]
  _DWORD v86[2]; // [rsp+1F8h] [rbp+F8h] BYREF
  int *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  int *v89; // [rsp+210h] [rbp+110h]
  __int64 v90; // [rsp+218h] [rbp+118h]
  _DWORD *v91; // [rsp+220h] [rbp+120h]
  __int64 v92; // [rsp+228h] [rbp+128h]
  __int64 v93; // [rsp+230h] [rbp+130h]
  _DWORD v94[2]; // [rsp+238h] [rbp+138h] BYREF
  char *v95; // [rsp+240h] [rbp+140h]
  __int64 v96; // [rsp+248h] [rbp+148h]
  _DWORD *v97; // [rsp+250h] [rbp+150h]
  __int64 v98; // [rsp+258h] [rbp+158h]
  _QWORD *v99; // [rsp+260h] [rbp+160h]
  _DWORD v100[2]; // [rsp+268h] [rbp+168h] BYREF
  int *v101; // [rsp+270h] [rbp+170h]
  __int64 v102; // [rsp+278h] [rbp+178h]
  int *v103; // [rsp+280h] [rbp+180h]
  __int64 v104; // [rsp+288h] [rbp+188h]
  int *v105; // [rsp+290h] [rbp+190h]
  __int64 v106; // [rsp+298h] [rbp+198h]
  _DWORD *v107; // [rsp+2A0h] [rbp+1A0h]
  __int64 v108; // [rsp+2A8h] [rbp+1A8h]
  __int64 v109; // [rsp+2B0h] [rbp+1B0h]
  _DWORD v110[2]; // [rsp+2B8h] [rbp+1B8h] BYREF
  char *v111; // [rsp+2C0h] [rbp+1C0h]
  __int64 v112; // [rsp+2C8h] [rbp+1C8h]

  ++g_StorpTraceLoggingCriticalEventsLogged;
  if ( (unsigned int)dword_1C0068058 > 5 && tlgKeywordOn(a1, 0x800000000000LL) )
  {
    v2 = *(_QWORD *)(v1 + 24);
    v46 = 16LL;
    v48 = 16LL;
    v45 = v2 + 5192;
    v47 = v1 + 1976;
    v34 = *(_DWORD *)(v2 + 56);
    v49 = &v34;
    v28 = *(_BYTE *)(v1 + 96);
    v51 = &v28;
    v29 = *(_BYTE *)(v1 + 97);
    v53 = &v29;
    v30 = *(_BYTE *)(v1 + 98);
    v55 = &v30;
    v50 = 4LL;
    v52 = 1LL;
    v54 = 1LL;
    v56 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v57, *(_WORD **)(v2 + 4864));
    tlgCreate1Sz_char((__int64)v58, (_BYTE *)(v3 + 160));
    tlgCreate1Sz_char((__int64)v59, (_BYTE *)(v4 + 169));
    tlgCreate1Sz_char((__int64)v60, (_BYTE *)(v5 + 186));
    v61 = &v42;
    v8 = -1;
    v9 = *(__int16 **)v7;
    v42 = *(_QWORD *)&g_SystemUptime_s;
    v62 = 8LL;
    v10 = *v9;
    v63 = &v33;
    v33 = v10;
    v11 = *(_QWORD **)(v7 + 8);
    v65 = v68;
    v68[0] = *(unsigned __int16 *)(v7 + 64);
    v64 = 2LL;
    v66 = 2LL;
    v67 = v11;
    v68[1] = 0;
    v12 = v11[1];
    if ( v12 >= 0 || (v12 & 0x4000000000000000LL) == 0 )
      LODWORD(v12) = -1;
    v35 = v12;
    v69 = &v35;
    v70 = 4LL;
    v13 = v11[2];
    if ( v13 >= 0 || (v13 & 0x4000000000000000LL) == 0 )
      LODWORD(v13) = -1;
    v36 = v13;
    v71 = &v36;
    v72 = 4LL;
    v14 = v11[9];
    if ( v14 < 0 && (v14 & 0x4000000000000000LL) != 0 )
      v15 = (unsigned __int16)v14;
    else
      v15 = -1LL;
    v43 = v15;
    v16 = *(_QWORD *)(v7 + 32);
    v73 = &v43;
    v75 = v78;
    v77 = *(_QWORD *)(v7 + 16);
    v78[0] = *(unsigned __int16 *)(v7 + 66);
    v79 = v82;
    v81 = *(_QWORD *)(v7 + 24);
    v82[0] = *(unsigned __int16 *)(v7 + 68);
    v83 = v86;
    v86[0] = *(unsigned __int16 *)(v7 + 70);
    v74 = 8LL;
    v76 = 2LL;
    v78[1] = 0;
    v80 = 2LL;
    v82[1] = 0;
    v84 = 2LL;
    v85 = v16;
    v86[1] = 0;
    v17 = *(_QWORD *)(v16 + 8);
    if ( v17 >= 0 || (v17 & 0x4000000000000000LL) == 0 )
      LODWORD(v17) = -1;
    v37 = v17;
    v87 = &v37;
    v88 = 4LL;
    v18 = *(_QWORD *)(v16 + 16);
    if ( v18 >= 0 || (v18 & 0x4000000000000000LL) == 0 )
      LODWORD(v18) = -1;
    v19 = *(_QWORD *)(v7 + 40);
    LOBYTE(v6) = -1;
    v38 = v18;
    v89 = &v38;
    v91 = v94;
    v94[0] = *(unsigned __int16 *)(v7 + 72);
    v90 = 4LL;
    v92 = 2LL;
    v93 = v19;
    v94[1] = 0;
    v20 = *(_QWORD *)(v19 + 8);
    if ( v20 >= 0 || (v20 & 0x4000000000000000LL) == 0 )
      LOBYTE(v20) = -1;
    v21 = *(_QWORD **)(v7 + 48);
    v31 = v20;
    v95 = &v31;
    v97 = v100;
    v100[0] = *(unsigned __int16 *)(v7 + 74);
    v96 = 1LL;
    v98 = 2LL;
    v99 = v21;
    v100[1] = 0;
    v22 = v21[1];
    if ( v22 >= 0 || (v23 = (unsigned __int8)v22, (v22 & 0x4000000000000000LL) == 0) )
      v23 = 0xFFFFFFFFLL;
    v39 = v23;
    v101 = &v39;
    v102 = 4LL;
    v24 = v21[2];
    if ( v24 >= 0 || (v24 & 0x4000000000000000LL) == 0 )
      LODWORD(v24) = -1;
    v40 = v24;
    v103 = &v40;
    v104 = 4LL;
    v25 = v21[3];
    if ( v25 < 0 && (v25 & 0x4000000000000000LL) != 0 )
      v8 = v21[3];
    v26 = *(_QWORD *)(v7 + 56);
    v105 = &v41;
    v107 = v110;
    v110[0] = *(unsigned __int16 *)(v7 + 76);
    v41 = v8;
    v106 = 4LL;
    v108 = 2LL;
    v109 = v26;
    v110[1] = 0;
    v27 = *(_QWORD *)(v26 + 8);
    if ( v27 < 0 && (v27 & 0x4000000000000000LL) != 0 )
      LOBYTE(v6) = *(_QWORD *)(v26 + 8);
    v32 = v6;
    v111 = &v32;
    v112 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(v26, (unsigned __int8 *)dword_1C005F6BE, v6, v23, 0x26u, &v44);
  }
}
