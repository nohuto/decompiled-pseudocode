/*
 * XREFs of StorpTelemetryLogUnitSmartAttributesMeasures @ 0x1C0001008
 * Callers:
 *     StorpTelemetrySendUnitSmartAttributes @ 0x1C0001084 (StorpTelemetrySendUnitSmartAttributes.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0002A0C (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C0017A90 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0017C38 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0017CE0 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C0019FC0 (__security_check_cookie.c)
 */

void __fastcall StorpTelemetryLogUnitSmartAttributesMeasures(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r11
  __int64 v4; // r11
  __int64 v5; // r11
  __int64 v6; // r11
  bool v7; // al
  __int64 *v8; // r10
  int *v9; // rcx
  char v10; // al
  _WORD *v11; // rcx
  int v12; // r8d
  int v13; // r9d
  char v14; // [rsp+30h] [rbp-D0h] BYREF
  char v15; // [rsp+31h] [rbp-CFh] BYREF
  char v16; // [rsp+32h] [rbp-CEh] BYREF
  bool v17; // [rsp+33h] [rbp-CDh] BYREF
  char v18; // [rsp+34h] [rbp-CCh] BYREF
  char v19; // [rsp+35h] [rbp-CBh] BYREF
  char v20; // [rsp+36h] [rbp-CAh] BYREF
  __int16 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  int v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  __int64 v35; // [rsp+90h] [rbp-70h] BYREF
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-20h]
  __int64 v42; // [rsp+E8h] [rbp-18h]
  __int64 v43; // [rsp+F0h] [rbp-10h]
  __int64 v44; // [rsp+F8h] [rbp-8h]
  int *v45; // [rsp+100h] [rbp+0h]
  __int64 v46; // [rsp+108h] [rbp+8h]
  char *v47; // [rsp+110h] [rbp+10h]
  __int64 v48; // [rsp+118h] [rbp+18h]
  char *v49; // [rsp+120h] [rbp+20h]
  __int64 v50; // [rsp+128h] [rbp+28h]
  char *v51; // [rsp+130h] [rbp+30h]
  __int64 v52; // [rsp+138h] [rbp+38h]
  char v53[16]; // [rsp+140h] [rbp+40h] BYREF
  char v54[16]; // [rsp+150h] [rbp+50h] BYREF
  char v55[16]; // [rsp+160h] [rbp+60h] BYREF
  char v56[16]; // [rsp+170h] [rbp+70h] BYREF
  __int64 *v57; // [rsp+180h] [rbp+80h]
  __int64 v58; // [rsp+188h] [rbp+88h]
  bool *v59; // [rsp+190h] [rbp+90h]
  __int64 v60; // [rsp+198h] [rbp+98h]
  int *v61; // [rsp+1A0h] [rbp+A0h]
  __int64 v62; // [rsp+1A8h] [rbp+A8h]
  char *v63; // [rsp+1B0h] [rbp+B0h]
  __int64 v64; // [rsp+1B8h] [rbp+B8h]
  char *v65; // [rsp+1C0h] [rbp+C0h]
  __int64 v66; // [rsp+1C8h] [rbp+C8h]
  __int16 *v67; // [rsp+1D0h] [rbp+D0h]
  __int64 v68; // [rsp+1D8h] [rbp+D8h]
  __int16 *v69; // [rsp+1E0h] [rbp+E0h]
  __int64 v70; // [rsp+1E8h] [rbp+E8h]
  int *v71; // [rsp+1F0h] [rbp+F0h]
  __int64 v72; // [rsp+1F8h] [rbp+F8h]
  __int16 *v73; // [rsp+200h] [rbp+100h]
  __int64 v74; // [rsp+208h] [rbp+108h]
  char *v75; // [rsp+210h] [rbp+110h]
  __int64 v76; // [rsp+218h] [rbp+118h]
  __int64 *v77; // [rsp+220h] [rbp+120h]
  __int64 v78; // [rsp+228h] [rbp+128h]
  __int64 *v79; // [rsp+230h] [rbp+130h]
  __int64 v80; // [rsp+238h] [rbp+138h]
  __int64 *v81; // [rsp+240h] [rbp+140h]
  __int64 v82; // [rsp+248h] [rbp+148h]
  __int64 *v83; // [rsp+250h] [rbp+150h]
  __int64 v84; // [rsp+258h] [rbp+158h]
  __int64 *v85; // [rsp+260h] [rbp+160h]
  __int64 v86; // [rsp+268h] [rbp+168h]
  __int64 *v87; // [rsp+270h] [rbp+170h]
  __int64 v88; // [rsp+278h] [rbp+178h]
  __int64 *v89; // [rsp+280h] [rbp+180h]
  __int64 v90; // [rsp+288h] [rbp+188h]
  __int64 *v91; // [rsp+290h] [rbp+190h]
  __int64 v92; // [rsp+298h] [rbp+198h]
  __int64 *v93; // [rsp+2A0h] [rbp+1A0h]
  __int64 v94; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v95; // [rsp+2B0h] [rbp+1B0h]
  __int64 v96; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v97; // [rsp+2C0h] [rbp+1C0h]
  __int64 v98; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v99; // [rsp+2D0h] [rbp+1D0h]
  __int64 v100; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v101; // [rsp+2E0h] [rbp+1E0h]
  __int64 v102; // [rsp+2E8h] [rbp+1E8h]
  _WORD *v103; // [rsp+2F0h] [rbp+1F0h]
  __int64 v104; // [rsp+2F8h] [rbp+1F8h] BYREF

  if ( (unsigned int)dword_1C0068058 > 5 )
  {
    if ( (unsigned __int8)tlgKeywordOn(a1, 0x400000000000LL) )
    {
      v2 = *(_QWORD *)(v1 + 24);
      v42 = 16LL;
      v44 = 16LL;
      v41 = v2 + 5192;
      v43 = v1 + 1976;
      v24 = *(_DWORD *)(v2 + 56);
      v45 = &v24;
      v14 = *(_BYTE *)(v1 + 96);
      v47 = &v14;
      v15 = *(_BYTE *)(v1 + 97);
      v49 = &v15;
      v16 = *(_BYTE *)(v1 + 98);
      v51 = &v16;
      v46 = 4LL;
      v48 = 1LL;
      v50 = 1LL;
      v52 = 1LL;
      tlgCreate1Sz_wchar_t(v53, *(_QWORD *)(v2 + 4864));
      tlgCreate1Sz_char(v54, v3 + 160);
      tlgCreate1Sz_char(v55, v4 + 169);
      tlgCreate1Sz_char(v56, v5 + 186);
      v57 = &v27;
      v7 = (*(_DWORD *)(v6 + 1992) & 0x20) != 0;
      v27 = *(_QWORD *)&g_SystemUptime_s;
      v9 = (int *)*v8;
      v17 = v7;
      v59 = &v17;
      v58 = 8LL;
      v60 = 1LL;
      v25 = *v9;
      v61 = &v25;
      v62 = 4LL;
      v18 = *((_BYTE *)v9 + 4);
      v63 = &v18;
      v64 = 1LL;
      v10 = *((_BYTE *)v9 + 5);
      v11 = (_WORD *)v8[1];
      v19 = v10;
      v65 = &v19;
      v66 = 1LL;
      v21 = *v11;
      v67 = &v21;
      v22 = *((_WORD *)v8 + 8);
      v69 = &v22;
      v26 = *((_DWORD *)v8 + 5);
      v68 = 2LL;
      v70 = 2LL;
      v72 = 4LL;
      v71 = &v26;
      v23 = *((_WORD *)v8 + 12);
      v73 = &v23;
      v20 = *((_BYTE *)v8 + 26);
      v75 = &v20;
      v28 = v8[4];
      v77 = &v28;
      v29 = v8[5];
      v79 = &v29;
      v30 = v8[6];
      v81 = &v30;
      v31 = v8[7];
      v83 = &v31;
      v32 = v8[8];
      v85 = &v32;
      v33 = v8[9];
      v87 = &v33;
      v34 = v8[10];
      v89 = &v34;
      v35 = v8[11];
      v91 = &v35;
      v36 = v8[12];
      v93 = &v36;
      v37 = v8[13];
      v95 = &v37;
      v38 = v8[14];
      v97 = &v38;
      v39 = v8[15];
      v99 = &v39;
      v101 = &v104;
      v74 = 2LL;
      v76 = 1LL;
      v78 = 8LL;
      v80 = 8LL;
      v82 = 8LL;
      v84 = 8LL;
      v86 = 8LL;
      v88 = 8LL;
      v90 = 8LL;
      v92 = 8LL;
      v94 = 8LL;
      v96 = 8LL;
      v98 = 8LL;
      v100 = 8LL;
      v102 = 2LL;
      v103 = v11;
      v104 = 512LL;
      tlgWriteTransfer_EtwWriteTransfer((int)v11, (int)&dword_1C005CC2F, v12, v13, 0x24u, &v40);
    }
  }
}
