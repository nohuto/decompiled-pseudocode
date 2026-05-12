/*
 * XREFs of StorpTelemetryMiniportEventWStr @ 0x1C0054FC8
 * Callers:
 *     StorEtwMiniportEvent @ 0x1C004F338 (StorEtwMiniportEvent.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0002AFC (_tlgKeywordOn.c)
 *     RaidAdapterFindUnit @ 0x1C00075A4 (RaidAdapterFindUnit.c)
 *     _tlgCreate1Sz_char @ 0x1C0019900 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0019AA8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1C0019B50 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     memmove @ 0x1C001D740 (memmove.c)
 *     memset @ 0x1C001DA00 (memset.c)
 */

char __fastcall StorpTelemetryMiniportEventWStr(
        int a1,
        _WORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned int v13; // eax
  __int64 Unit; // rax
  unsigned int v15; // r15d
  _QWORD *v16; // rsi
  _OWORD *v17; // r14
  _WORD *v18; // rdx
  __int64 v19; // r8
  char v20; // si
  char v21; // r14
  char v22; // di
  _WORD *v23; // rdx
  __int64 v24; // r10
  int v25; // ecx
  __int64 v26; // r10
  __int64 *v27; // r11
  __int64 v28; // r10
  __int64 v29; // r10
  int v30; // r8d
  __int64 v31; // r8
  __int64 v32; // r9
  _WORD *v33; // rdx
  __int64 v34; // r10
  int v35; // ecx
  __int64 v36; // r10
  __int64 *v37; // r11
  __int64 v38; // r10
  __int64 v39; // r10
  int v40; // r8d
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int8 *v43; // rdx
  char v44; // r9
  _WORD *v45; // rdx
  int v46; // ecx
  ULONG v48; // [rsp+28h] [rbp-E0h]
  char v49; // [rsp+38h] [rbp-D0h] BYREF
  char v50; // [rsp+39h] [rbp-CFh] BYREF
  char v51; // [rsp+3Ah] [rbp-CEh] BYREF
  char v52; // [rsp+3Bh] [rbp-CDh] BYREF
  int v53; // [rsp+3Ch] [rbp-CCh] BYREF
  int v54; // [rsp+40h] [rbp-C8h] BYREF
  int v55; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v56; // [rsp+48h] [rbp-C0h]
  __int64 v57; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v58; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v59; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v61; // [rsp+70h] [rbp-98h] BYREF
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  __int64 v63; // [rsp+80h] [rbp-88h] BYREF
  __int64 v64; // [rsp+88h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h] BYREF
  __int128 v66; // [rsp+98h] [rbp-70h]
  struct _EVENT_DATA_DESCRIPTOR v67; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v68; // [rsp+C8h] [rbp-40h]
  __int64 v69; // [rsp+D0h] [rbp-38h]
  char *v70; // [rsp+D8h] [rbp-30h]
  __int64 v71; // [rsp+E0h] [rbp-28h]
  _BYTE v72[16]; // [rsp+E8h] [rbp-20h] BYREF
  int *v73; // [rsp+F8h] [rbp-10h]
  __int64 v74; // [rsp+100h] [rbp-8h]
  int *v75; // [rsp+108h] [rbp+0h]
  __int64 v76; // [rsp+110h] [rbp+8h]
  __int64 v77; // [rsp+118h] [rbp+10h]
  __int64 v78; // [rsp+120h] [rbp+18h]
  int *v79; // [rsp+128h] [rbp+20h]
  __int64 v80; // [rsp+130h] [rbp+28h]
  _BYTE v81[16]; // [rsp+138h] [rbp+30h] BYREF
  char *v82; // [rsp+148h] [rbp+40h] BYREF
  __int64 v83; // [rsp+150h] [rbp+48h]
  char *v84; // [rsp+158h] [rbp+50h]
  __int64 v85; // [rsp+160h] [rbp+58h]
  char *v86; // [rsp+168h] [rbp+60h] BYREF
  __int64 v87; // [rsp+170h] [rbp+68h]
  __int64 *v88; // [rsp+178h] [rbp+70h]
  __int64 v89; // [rsp+180h] [rbp+78h]
  _BYTE v90[16]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v91[2]; // [rsp+198h] [rbp+90h] BYREF
  _BYTE v92[16]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 *v93; // [rsp+1B8h] [rbp+B0h]
  __int64 v94; // [rsp+1C0h] [rbp+B8h]
  _BYTE v95[16]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 *v96; // [rsp+1D8h] [rbp+D0h]
  __int64 v97; // [rsp+1E0h] [rbp+D8h]
  _BYTE v98[16]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 *v99; // [rsp+1F8h] [rbp+F0h]
  __int64 v100; // [rsp+200h] [rbp+F8h]
  _BYTE v101[16]; // [rsp+208h] [rbp+100h] BYREF
  __int64 *v102; // [rsp+218h] [rbp+110h]
  __int64 v103; // [rsp+220h] [rbp+118h]
  _BYTE v104[16]; // [rsp+228h] [rbp+120h] BYREF
  __int64 *v105; // [rsp+238h] [rbp+130h]
  __int64 v106; // [rsp+240h] [rbp+138h]
  _BYTE v107[16]; // [rsp+248h] [rbp+140h] BYREF
  __int64 *v108; // [rsp+258h] [rbp+150h]
  __int64 v109; // [rsp+260h] [rbp+158h]
  _BYTE v110[16]; // [rsp+268h] [rbp+160h] BYREF
  __int64 *v111; // [rsp+278h] [rbp+170h]
  __int64 v112; // [rsp+280h] [rbp+178h]
  _BYTE v113[16]; // [rsp+288h] [rbp+180h] BYREF
  __int64 *v114; // [rsp+298h] [rbp+190h]
  __int64 v115; // [rsp+2A0h] [rbp+198h]
  _BYTE v116[16]; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 *v117; // [rsp+2B8h] [rbp+1B0h]
  __int64 v118; // [rsp+2C0h] [rbp+1B8h]
  _OWORD v119[40]; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int128 v120; // [rsp+548h] [rbp+440h] BYREF
  char v121; // [rsp+558h] [rbp+450h]
  _QWORD v122[18]; // [rsp+568h] [rbp+460h] BYREF

  LODWORD(v56) = a1;
  memset(v119, 0, sizeof(v119));
  memset(v122, 0, 0x82uLL);
  v53 = 0;
  v11 = -1LL;
  v121 = 0;
  v12 = -1LL;
  v120 = 0LL;
  v66 = 0LL;
  do
    ++v12;
  while ( a2[v12] );
  if ( (_DWORD)v12 )
  {
    v13 = 64;
    if ( (unsigned int)v12 < 0x40 )
      v13 = v12;
    memmove(v122, a2, 2LL * v13);
    LOWORD(Unit) = aNull_0[4];
  }
  else
  {
    LOWORD(Unit) = aNull_0[4];
    LOWORD(v122[1]) = aNull_0[4];
    v122[0] = *(_QWORD *)L"NULL";
  }
  v15 = 0;
  if ( a6 )
  {
    v16 = a8;
    v17 = v119;
    do
    {
      v18 = *(_WORD **)((char *)v16 + a7 - (_QWORD)a8);
      if ( v18 )
      {
        v12 = -1LL;
        do
          ++v12;
        while ( v18[v12] );
      }
      else
      {
        v12 = 0LL;
      }
      if ( (_DWORD)v12 )
      {
        v19 = 32LL;
        if ( (unsigned int)v12 < 0x20 )
          v19 = (unsigned int)v12;
        memmove(&v119[5 * v15], v18, 2 * v19);
        *((_QWORD *)v17 + 9) = *v16;
        LOWORD(Unit) = aNull_0[4];
      }
      else
      {
        *(_QWORD *)v17 = *(_QWORD *)L"NULL";
        *((_WORD *)v17 + 4) = Unit;
      }
      ++v15;
      ++v16;
      v17 += 5;
    }
    while ( v15 < a6 );
  }
  if ( !a4
    || *(_WORD *)a4 != 1
    || *(_DWORD *)(a4 + 4) < 4u
    || (v20 = *(_BYTE *)(a4 + 8),
        v21 = *(_BYTE *)(a4 + 9),
        v22 = *(_BYTE *)(a4 + 10),
        BYTE2(v53) = v22,
        LOBYTE(v53) = v20,
        BYTE1(v53) = v21,
        (Unit = RaidAdapterFindUnit(a3, v53)) == 0) )
  {
    if ( (unsigned int)dword_1C0068058 <= 5 )
      return Unit;
    LOBYTE(Unit) = tlgKeywordOn(v12, 0x400000000000LL);
    if ( !(_BYTE)Unit )
      return Unit;
    v45 = *(_WORD **)(a3 + 4864);
    v68 = &v65;
    v65 = 0x1000000LL;
    v70 = &v49;
    v69 = 8LL;
    v49 = v44;
    v71 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v72, v45);
    v46 = *(_DWORD *)(a3 + 4420);
    v73 = &v55;
    v54 = *(_DWORD *)(a3 + 56);
    v75 = &v54;
    v77 = a3 + 5192;
    v53 = v56;
    v55 = v46;
    v79 = &v53;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 16LL;
    v80 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v81, v122);
    tlgCreate1Sz_wchar_t((__int64)&v82, v119);
    v64 = *((_QWORD *)&v119[4] + 1);
    v84 = (char *)&v64;
    v85 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)&v86, &v119[5]);
    v63 = *((_QWORD *)&v119[9] + 1);
    v88 = &v63;
    v89 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v90, &v119[10]);
    v62 = *((_QWORD *)&v119[14] + 1);
    v91[0] = &v62;
    v91[1] = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v92, &v119[15]);
    v61 = *((_QWORD *)&v119[19] + 1);
    v93 = &v61;
    v94 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v95, &v119[20]);
    v60 = *((_QWORD *)&v119[24] + 1);
    v96 = &v60;
    v97 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v98, &v119[25]);
    v99 = &v59;
    v59 = *((_QWORD *)&v119[29] + 1);
    v100 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v101, &v119[30]);
    v58 = *((_QWORD *)&v119[34] + 1);
    v102 = &v58;
    v103 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v104, &v119[35]);
    v106 = 8LL;
    v105 = &v57;
    v43 = (unsigned __int8 *)&dword_1C005F92B;
    v48 = 26;
LABEL_41:
    v57 = *((_QWORD *)&v119[39] + 1);
    LOBYTE(Unit) = tlgWriteTransfer_EtwWriteTransfer(*((__int64 *)&v119[39] + 1), v43, v41, v42, v48, &v67);
    return Unit;
  }
  Unit = *(_QWORD *)(Unit + 152);
  if ( Unit )
    v120 = *(_OWORD *)(Unit + 90);
  if ( a5 )
  {
    if ( (unsigned int)dword_1C0068058 <= 5 )
      return Unit;
    LOBYTE(Unit) = tlgKeywordOn(v12, 0x400000000000LL);
    if ( !(_BYTE)Unit )
      return Unit;
    v33 = *(_WORD **)(a3 + 4864);
    v68 = &v65;
    v65 = 0x1000000LL;
    v70 = &v49;
    v69 = 8LL;
    v49 = 1;
    v71 = 1LL;
    tlgCreate1Sz_wchar_t((__int64)v72, v33);
    v35 = *(_DWORD *)(v34 + 3280);
    v73 = &v55;
    v54 = *(_DWORD *)(a3 + 56);
    v75 = &v54;
    v77 = a3 + 5192;
    v53 = v56;
    v55 = v35;
    v79 = &v53;
    v74 = 4LL;
    v76 = 4LL;
    v78 = 16LL;
    v80 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v81, v122);
    v52 = v20;
    v83 = 1LL;
    v82 = &v52;
    v51 = v21;
    v84 = &v51;
    v85 = 1LL;
    v86 = &v50;
    v50 = v22;
    v87 = 1LL;
    v88 = v37;
    v89 = 16LL;
    tlgCreate1Sz_char((__int64)v90, (_BYTE *)(v36 + 160));
    tlgCreate1Sz_char((__int64)v91, (_BYTE *)(v38 + 169));
    tlgCreate1Sz_char((__int64)v92, (_BYTE *)(v39 + 186));
    do
      ++v11;
    while ( *((_BYTE *)&v120 + v11) );
    v94 = (unsigned int)(v40 + v11);
    v93 = (__int64 *)&v120;
    tlgCreate1Sz_wchar_t((__int64)v95, v119);
    v64 = *((_QWORD *)&v119[4] + 1);
    v96 = &v64;
    v97 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v98, &v119[5]);
    v63 = *((_QWORD *)&v119[9] + 1);
    v99 = &v63;
    v100 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v101, &v119[10]);
    v62 = *((_QWORD *)&v119[14] + 1);
    v102 = &v62;
    v103 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v104, &v119[15]);
    v61 = *((_QWORD *)&v119[19] + 1);
    v105 = &v61;
    v106 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v107, &v119[20]);
    v60 = *((_QWORD *)&v119[24] + 1);
    v108 = &v60;
    v109 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v110, &v119[25]);
    v59 = *((_QWORD *)&v119[29] + 1);
    v111 = &v59;
    v112 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v113, &v119[30]);
    v58 = *((_QWORD *)&v119[34] + 1);
    v114 = &v58;
    v115 = 8LL;
    tlgCreate1Sz_wchar_t((__int64)v116, &v119[35]);
    v118 = 8LL;
    v117 = &v57;
    v43 = (unsigned __int8 *)&unk_1C005D0B2;
    v48 = 34;
    goto LABEL_41;
  }
  if ( (unsigned int)dword_1C0068058 > 5 )
  {
    LOBYTE(Unit) = tlgKeywordOn(v12, 0x400000000000LL);
    if ( (_BYTE)Unit )
    {
      v23 = *(_WORD **)(a3 + 4864);
      v68 = &v57;
      v57 = 0x1000000LL;
      v70 = &v50;
      v69 = 8LL;
      v50 = 1;
      v71 = 1LL;
      tlgCreate1Sz_wchar_t((__int64)v72, v23);
      v25 = *(_DWORD *)(v24 + 3280);
      v73 = &v53;
      v54 = *(_DWORD *)(a3 + 56);
      v75 = &v54;
      v77 = a3 + 5192;
      v55 = v56;
      v53 = v25;
      v79 = &v55;
      v74 = 4LL;
      v76 = 4LL;
      v78 = 16LL;
      v80 = 4LL;
      tlgCreate1Sz_wchar_t((__int64)v81, v122);
      v51 = v20;
      v83 = 1LL;
      v82 = &v51;
      v52 = v21;
      v84 = &v52;
      v85 = 1LL;
      v86 = &v49;
      v49 = v22;
      v87 = 1LL;
      v88 = v27;
      v89 = 16LL;
      tlgCreate1Sz_char((__int64)v90, (_BYTE *)(v26 + 160));
      tlgCreate1Sz_char((__int64)v91, (_BYTE *)(v28 + 169));
      tlgCreate1Sz_char((__int64)v92, (_BYTE *)(v29 + 186));
      do
        ++v11;
      while ( *((_BYTE *)&v120 + v11) );
      v94 = (unsigned int)(v30 + v11);
      v93 = (__int64 *)&v120;
      tlgCreate1Sz_wchar_t((__int64)v95, v119);
      v58 = *((_QWORD *)&v119[4] + 1);
      v96 = &v58;
      v97 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v98, &v119[5]);
      v59 = *((_QWORD *)&v119[9] + 1);
      v99 = &v59;
      v100 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v101, &v119[10]);
      v60 = *((_QWORD *)&v119[14] + 1);
      v102 = &v60;
      v103 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v104, &v119[15]);
      v61 = *((_QWORD *)&v119[19] + 1);
      v105 = &v61;
      v106 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v107, &v119[20]);
      v62 = *((_QWORD *)&v119[24] + 1);
      v108 = &v62;
      v109 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v110, &v119[25]);
      v63 = *((_QWORD *)&v119[29] + 1);
      v111 = &v63;
      v112 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v113, &v119[30]);
      v64 = *((_QWORD *)&v119[34] + 1);
      v114 = &v64;
      v115 = 8LL;
      tlgCreate1Sz_wchar_t((__int64)v116, &v119[35]);
      v117 = &v65;
      v65 = *((_QWORD *)&v119[39] + 1);
      v118 = 8LL;
      LOBYTE(Unit) = tlgWriteTransfer_EtwWriteTransfer(
                       *((__int64 *)&v119[39] + 1),
                       byte_1C005EDC8,
                       v31,
                       v32,
                       0x22u,
                       &v67);
    }
  }
  return Unit;
}
