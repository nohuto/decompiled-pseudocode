/*
 * XREFs of StorpMeasuresMiniportEventUnit @ 0x1C00527A4
 * Callers:
 *     StorpTelemetryMiniportEvent @ 0x1C0054728 (StorpTelemetryMiniportEvent.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0002AFC (_tlgKeywordOn.c)
 *     _tlgCreate1Sz_char @ 0x1C0019900 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0019AA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019B50 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 */

char __fastcall StorpMeasuresMiniportEventUnit(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // rax
  __int128 *v5; // rbx
  __int64 v7; // rcx
  _WORD *v8; // rdx
  __int64 v9; // r10
  __int64 v10; // rax
  _BYTE *v11; // rdx
  _BYTE *v12; // r8
  __int64 v13; // r10
  _BYTE *v14; // rdx
  _BYTE *v15; // r8
  __int64 v16; // r10
  _BYTE *v17; // rdx
  _BYTE *v18; // r8
  __int64 v19; // r10
  __int64 v20; // r10
  __int64 v21; // r11
  _BYTE *v22; // rax
  char v23; // al
  __int16 v24; // ax
  __int16 v25; // cx
  __int16 v26; // cx
  __int16 v27; // cx
  int v28; // ecx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  char v34; // [rsp+30h] [rbp-D0h] BYREF
  char v35; // [rsp+31h] [rbp-CFh] BYREF
  __int16 v36; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v37; // [rsp+38h] [rbp-C8h] BYREF
  __int16 v38; // [rsp+3Ch] [rbp-C4h] BYREF
  __int16 v39; // [rsp+40h] [rbp-C0h] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  int v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  __int64 v50; // [rsp+88h] [rbp-78h] BYREF
  __int64 v51; // [rsp+90h] [rbp-70h] BYREF
  __int128 v52; // [rsp+98h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v53; // [rsp+B0h] [rbp-50h] BYREF
  char *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  char v58[16]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 *v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  __int128 *v61; // [rsp+110h] [rbp+10h]
  int v62; // [rsp+118h] [rbp+18h]
  int v63; // [rsp+11Ch] [rbp+1Ch]
  char v64[16]; // [rsp+120h] [rbp+20h] BYREF
  char v65[16]; // [rsp+130h] [rbp+30h] BYREF
  char v66[16]; // [rsp+140h] [rbp+40h] BYREF
  char v67[16]; // [rsp+150h] [rbp+50h] BYREF
  char *v68; // [rsp+160h] [rbp+60h]
  __int64 v69; // [rsp+168h] [rbp+68h]
  __int16 *v70; // [rsp+170h] [rbp+70h]
  __int64 v71; // [rsp+178h] [rbp+78h]
  __int16 *v72; // [rsp+180h] [rbp+80h]
  __int64 v73; // [rsp+188h] [rbp+88h]
  __int16 *v74; // [rsp+190h] [rbp+90h]
  __int64 v75; // [rsp+198h] [rbp+98h]
  __int16 *v76; // [rsp+1A0h] [rbp+A0h]
  __int64 v77; // [rsp+1A8h] [rbp+A8h]
  int *v78; // [rsp+1B0h] [rbp+B0h]
  __int64 v79; // [rsp+1B8h] [rbp+B8h]
  char v80[16]; // [rsp+1C0h] [rbp+C0h] BYREF
  int *v81; // [rsp+1D0h] [rbp+D0h]
  __int64 v82; // [rsp+1D8h] [rbp+D8h]
  int *v83; // [rsp+1E0h] [rbp+E0h]
  __int64 v84; // [rsp+1E8h] [rbp+E8h]
  int *v85; // [rsp+1F0h] [rbp+F0h]
  __int64 v86; // [rsp+1F8h] [rbp+F8h]
  _DWORD *v87; // [rsp+200h] [rbp+100h]
  __int64 v88; // [rsp+208h] [rbp+108h]
  __int64 v89; // [rsp+210h] [rbp+110h]
  _DWORD v90[2]; // [rsp+218h] [rbp+118h] BYREF
  char v91[16]; // [rsp+220h] [rbp+120h] BYREF
  __int64 *v92; // [rsp+230h] [rbp+130h]
  __int64 v93; // [rsp+238h] [rbp+138h]
  char v94[16]; // [rsp+240h] [rbp+140h] BYREF
  __int64 *v95; // [rsp+250h] [rbp+150h]
  __int64 v96; // [rsp+258h] [rbp+158h]
  char v97[16]; // [rsp+260h] [rbp+160h] BYREF
  __int64 *v98; // [rsp+270h] [rbp+170h]
  __int64 v99; // [rsp+278h] [rbp+178h]
  char v100[16]; // [rsp+280h] [rbp+180h] BYREF
  __int64 *v101; // [rsp+290h] [rbp+190h]
  __int64 v102; // [rsp+298h] [rbp+198h]
  char v103[16]; // [rsp+2A0h] [rbp+1A0h] BYREF
  __int64 *v104; // [rsp+2B0h] [rbp+1B0h]
  __int64 v105; // [rsp+2B8h] [rbp+1B8h]
  char v106[16]; // [rsp+2C0h] [rbp+1C0h] BYREF
  __int64 *v107; // [rsp+2D0h] [rbp+1D0h]
  __int64 v108; // [rsp+2D8h] [rbp+1D8h]
  char v109[16]; // [rsp+2E0h] [rbp+1E0h] BYREF
  __int64 *v110; // [rsp+2F0h] [rbp+1F0h]
  __int64 v111; // [rsp+2F8h] [rbp+1F8h]
  char v112[16]; // [rsp+300h] [rbp+200h] BYREF
  __int64 *v113; // [rsp+310h] [rbp+210h]
  __int64 v114; // [rsp+318h] [rbp+218h]
  __int128 v115; // [rsp+320h] [rbp+220h] BYREF
  char v116; // [rsp+330h] [rbp+230h]

  LOBYTE(v4) = 0;
  v5 = &v52;
  v116 = 0;
  v115 = 0LL;
  v52 = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a2 + 152);
    v5 = (__int128 *)(a2 + 1976);
    if ( v4 )
      v115 = *(_OWORD *)(v4 + 90);
  }
  if ( (unsigned int)dword_1C0068058 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn(a1, 0x400000000000LL);
    if ( (_BYTE)v4 )
    {
      v8 = *(_WORD **)(v7 + 4864);
      v54 = &v34;
      v34 = 2;
      v56 = v7 + 5192;
      v55 = 1LL;
      v57 = 16LL;
      tlgCreate1Sz_wchar_t((__int64)v58, v8);
      v10 = -1LL;
      v59 = v5;
      v60 = 16LL;
      do
        ++v10;
      while ( *((_BYTE *)&v115 + v10) );
      v63 = 0;
      v62 = v10 + 1;
      v61 = &v115;
      v11 = (_BYTE *)(v9 + 160);
      if ( !v9 )
        v11 = &unk_1C005A79C;
      tlgCreate1Sz_char((__int64)v64, v11);
      v14 = (_BYTE *)(v13 + 169);
      if ( !v13 )
        v14 = v12;
      tlgCreate1Sz_char((__int64)v65, v14);
      v17 = (_BYTE *)(v16 + 186);
      if ( !v16 )
        v17 = v15;
      tlgCreate1Sz_char((__int64)v66, v17);
      if ( v19 )
        v18 = (_BYTE *)(v19 + 442);
      tlgCreate1Sz_char((__int64)v67, v18);
      if ( v20 && (v22 = *(_BYTE **)(v20 + 104)) != 0LL )
        v23 = *v22 & 0x1F;
      else
        v23 = 31;
      v35 = v23;
      v68 = &v35;
      v24 = -1;
      v69 = 1LL;
      if ( v21 )
        v25 = *(_WORD *)(v21 + 2);
      else
        v25 = -1;
      v36 = v25;
      v70 = &v36;
      v71 = 2LL;
      if ( v21 )
        v26 = *(unsigned __int8 *)(v21 + 8);
      else
        v26 = -1;
      v37 = v26;
      v72 = &v37;
      v73 = 2LL;
      if ( v21 )
        v27 = *(unsigned __int8 *)(v21 + 9);
      else
        v27 = -1;
      v38 = v27;
      v74 = &v38;
      v75 = 2LL;
      if ( v21 )
        v24 = *(unsigned __int8 *)(v21 + 10);
      v39 = v24;
      v77 = 2LL;
      v76 = &v39;
      v40 = *a4;
      v78 = &v40;
      v79 = 4LL;
      tlgCreate1Sz_char((__int64)v80, (_BYTE *)a4 + 8);
      v28 = a4[1];
      v81 = &v41;
      v42 = a4[10];
      v83 = &v42;
      v43 = a4[11];
      v85 = &v43;
      v87 = v90;
      v89 = *((_QWORD *)a4 + 7);
      v29 = *((unsigned __int16 *)a4 + 24);
      v41 = v28;
      v90[0] = v29;
      v82 = 4LL;
      v84 = 4LL;
      v86 = 4LL;
      v88 = 2LL;
      v90[1] = 0;
      tlgCreate1Sz_char((__int64)v91, (_BYTE *)a4 + 64);
      v44 = *((_QWORD *)a4 + 12);
      v92 = &v44;
      v93 = 8LL;
      tlgCreate1Sz_char((__int64)v94, (_BYTE *)a4 + 104);
      v45 = *((_QWORD *)a4 + 17);
      v95 = &v45;
      v96 = 8LL;
      tlgCreate1Sz_char((__int64)v97, (_BYTE *)a4 + 144);
      v46 = *((_QWORD *)a4 + 22);
      v98 = &v46;
      v99 = 8LL;
      tlgCreate1Sz_char((__int64)v100, (_BYTE *)a4 + 184);
      v47 = *((_QWORD *)a4 + 27);
      v101 = &v47;
      v102 = 8LL;
      tlgCreate1Sz_char((__int64)v103, (_BYTE *)a4 + 224);
      v48 = *((_QWORD *)a4 + 32);
      v104 = &v48;
      v105 = 8LL;
      tlgCreate1Sz_char((__int64)v106, (_BYTE *)a4 + 264);
      v49 = *((_QWORD *)a4 + 37);
      v107 = &v49;
      v108 = 8LL;
      tlgCreate1Sz_char((__int64)v109, (_BYTE *)a4 + 304);
      v50 = *((_QWORD *)a4 + 42);
      v110 = &v50;
      v111 = 8LL;
      tlgCreate1Sz_char((__int64)v112, (_BYTE *)a4 + 344);
      v30 = *((_QWORD *)a4 + 47);
      v113 = &v51;
      v51 = v30;
      v114 = 8LL;
      LOBYTE(v4) = tlgWriteTransfer_EtwWriteTransfer(v30, (unsigned __int8 *)dword_1C005C6E5, v31, v32, 0x27u, &v53);
    }
  }
  return v4;
}
