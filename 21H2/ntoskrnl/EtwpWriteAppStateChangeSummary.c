/*
 * XREFs of EtwpWriteAppStateChangeSummary @ 0x1406A42DC
 * Callers:
 *     EtwTraceAppStateChange @ 0x1406A3FC0 (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1406F2A40 (EtwTraceProcess.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402709CC (_tlgCreate1Sz_wchar_t.c)
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

char __fastcall EtwpWriteAppStateChangeSummary(
        __int64 a1,
        char *a2,
        unsigned int *a3,
        __int64 a4,
        int *a5,
        unsigned __int16 *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r15d
  __int64 ProcessServerSilo; // rsi
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned __int16 *v17; // r9
  unsigned __int64 v18; // r10
  char v19; // cl
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r10d
  __int64 v43; // r8
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v50; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v53; // [rsp+68h] [rbp-98h] BYREF
  __int64 v54; // [rsp+70h] [rbp-90h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  __int64 v58; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v65; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v66; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 v67; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v68; // [rsp+E0h] [rbp-20h] BYREF
  unsigned __int64 v69; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v71; // [rsp+F8h] [rbp-8h] BYREF
  _OWORD v72[2]; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v73; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v74; // [rsp+140h] [rbp+40h]
  __int64 v75; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v76; // [rsp+150h] [rbp+50h]
  __int64 v77; // [rsp+158h] [rbp+58h]
  unsigned __int64 *v78; // [rsp+160h] [rbp+60h]
  __int64 v79; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v80; // [rsp+170h] [rbp+70h]
  __int64 v81; // [rsp+178h] [rbp+78h]
  unsigned __int64 *v82; // [rsp+180h] [rbp+80h]
  __int64 v83; // [rsp+188h] [rbp+88h]
  unsigned __int64 *v84; // [rsp+190h] [rbp+90h]
  __int64 v85; // [rsp+198h] [rbp+98h]
  unsigned __int64 *v86; // [rsp+1A0h] [rbp+A0h]
  __int64 v87; // [rsp+1A8h] [rbp+A8h]
  __int64 *v88; // [rsp+1B0h] [rbp+B0h]
  __int64 v89; // [rsp+1B8h] [rbp+B8h]
  __int64 *v90; // [rsp+1C0h] [rbp+C0h]
  __int64 v91; // [rsp+1C8h] [rbp+C8h]
  unsigned __int64 *v92; // [rsp+1D0h] [rbp+D0h]
  __int64 v93; // [rsp+1D8h] [rbp+D8h]
  unsigned __int64 *v94; // [rsp+1E0h] [rbp+E0h]
  __int64 v95; // [rsp+1E8h] [rbp+E8h]
  __int64 *v96; // [rsp+1F0h] [rbp+F0h]
  __int64 v97; // [rsp+1F8h] [rbp+F8h]
  unsigned __int64 *v98; // [rsp+200h] [rbp+100h]
  __int64 v99; // [rsp+208h] [rbp+108h]
  unsigned __int64 *v100; // [rsp+210h] [rbp+110h]
  __int64 v101; // [rsp+218h] [rbp+118h]
  __int64 *v102; // [rsp+220h] [rbp+120h]
  __int64 v103; // [rsp+228h] [rbp+128h]
  __int64 *v104; // [rsp+230h] [rbp+130h]
  __int64 v105; // [rsp+238h] [rbp+138h]
  __int64 *v106; // [rsp+240h] [rbp+140h]
  __int64 v107; // [rsp+248h] [rbp+148h]
  __int64 *v108; // [rsp+250h] [rbp+150h]
  __int64 v109; // [rsp+258h] [rbp+158h]
  unsigned __int64 *v110; // [rsp+260h] [rbp+160h]
  __int64 v111; // [rsp+268h] [rbp+168h]
  __int64 *v112; // [rsp+270h] [rbp+170h]
  __int64 v113; // [rsp+278h] [rbp+178h]
  unsigned __int64 *v114; // [rsp+280h] [rbp+180h]
  __int64 v115; // [rsp+288h] [rbp+188h]
  unsigned __int64 *v116; // [rsp+290h] [rbp+190h]
  __int64 v117; // [rsp+298h] [rbp+198h]
  unsigned __int64 *v118; // [rsp+2A0h] [rbp+1A0h]
  __int64 v119; // [rsp+2A8h] [rbp+1A8h]
  __int64 *v120; // [rsp+2B0h] [rbp+1B0h]
  __int64 v121; // [rsp+2B8h] [rbp+1B8h]
  _DWORD *v122; // [rsp+2C0h] [rbp+1C0h]
  __int64 v123; // [rsp+2C8h] [rbp+1C8h]
  __int64 v124; // [rsp+2D0h] [rbp+1D0h]
  _DWORD v125[2]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v126[16]; // [rsp+2E0h] [rbp+1E0h] BYREF
  char v127[16]; // [rsp+2F0h] [rbp+1F0h] BYREF
  int *v128; // [rsp+300h] [rbp+200h]
  __int64 v129; // [rsp+308h] [rbp+208h]
  int *v130; // [rsp+310h] [rbp+210h]
  __int64 v131; // [rsp+318h] [rbp+218h]
  _DWORD *v132; // [rsp+320h] [rbp+220h]
  __int64 v133; // [rsp+328h] [rbp+228h]
  __int64 v134; // [rsp+330h] [rbp+230h]
  _DWORD v135[2]; // [rsp+338h] [rbp+238h] BYREF
  _OWORD *v136; // [rsp+340h] [rbp+240h]
  __int64 v137; // [rsp+348h] [rbp+248h]
  __int64 *v138; // [rsp+350h] [rbp+250h]
  __int64 v139; // [rsp+358h] [rbp+258h]

  memset(v72, 0, 29);
  if ( dword_140C02BB8 && tlgKeywordOn((__int64)&dword_140C02BB8, 0x200000000000LL) )
  {
    v10 = 1LL;
    v11 = 257LL;
  }
  else
  {
    v10 = *(_QWORD *)&v72[0];
    v11 = 256LL;
  }
  v12 = *(_DWORD *)(a1 + 2004);
  if ( ((v12 + 1073741515) & 0xFFFFFFFB) == 0 )
    v10 = v11;
  *(_QWORD *)&v72[0] = v10;
  ProcessServerSilo = PsGetProcessServerSilo(a1);
  v14 = !PsIsHostSilo(ProcessServerSilo);
  v15 = (__int64 *)(ProcessServerSilo + 1256);
  if ( !v14 )
    v15 = PspNullGuid;
  if ( v15 )
    *(_OWORD *)((char *)v72 + 13) = *(_OWORD *)v15;
  v16 = *(_QWORD *)(a1 + 1472);
  if ( (unsigned int)dword_140C02BB8 > 5 )
  {
    LOBYTE(v16) = tlgKeywordOn((__int64)&dword_140C02BB8, 0x400000000000LL);
    if ( (_BYTE)v16 )
    {
      v19 = *a2;
      v20 = v18;
      v14 = *a2 == 0;
      v75 = 8LL;
      v77 = 8LL;
      LOBYTE(v20) = v14;
      v79 = 8LL;
      v47 = v20;
      v81 = 8LL;
      v74 = &v47;
      v21 = v18;
      LOBYTE(v21) = v19 == 1;
      v83 = 8LL;
      v48 = v21;
      v85 = 8LL;
      v76 = &v48;
      v22 = v18;
      LOBYTE(v22) = v19 == 2;
      v87 = 8LL;
      v49 = v22;
      v89 = 8LL;
      v78 = &v49;
      v23 = v18;
      LOBYTE(v23) = v19 == 3;
      v91 = 8LL;
      v50 = v23;
      v80 = &v50;
      v24 = v18;
      LOBYTE(v24) = v19 == 4;
      v51 = v24;
      v82 = &v51;
      v25 = v18;
      LOBYTE(v25) = v19 == 5;
      v52 = v25;
      v84 = &v52;
      v26 = v18;
      LOBYTE(v26) = v19 == 6;
      v53 = v26;
      v86 = &v53;
      v54 = *(_QWORD *)(a2 + 41);
      v88 = &v54;
      v55 = *(_QWORD *)(a2 + 49);
      v90 = &v55;
      v27 = v18;
      if ( a3 )
        LOBYTE(v27) = (*(_BYTE *)(a1 + 2171) & 7) != 0;
      v56 = v27;
      v92 = &v56;
      v28 = v18;
      v93 = 8LL;
      if ( a3 )
        LOBYTE(v28) = (*(_BYTE *)(a1 + 2171) & 0x38) != 0;
      v57 = v28;
      v94 = &v57;
      v29 = (unsigned int)v18;
      v95 = 8LL;
      if ( a3 )
        v29 = *a3;
      v58 = v29;
      v96 = &v58;
      v30 = v18;
      v97 = 8LL;
      if ( a3 )
        v30 = *(_QWORD *)(a3 + 1);
      v59 = v30;
      v98 = &v59;
      v31 = v18;
      v99 = 8LL;
      if ( a3 )
        v31 = *(_QWORD *)(a3 + 3);
      v60 = v31;
      v100 = &v60;
      v32 = (unsigned int)v18;
      v101 = 8LL;
      if ( a3 )
        v32 = a3[7];
      v61 = v32;
      v102 = &v61;
      v33 = (unsigned int)v18;
      v103 = 8LL;
      if ( a3 )
        v33 = a3[9];
      v62 = v33;
      v104 = &v62;
      v34 = (unsigned int)v18;
      v105 = 8LL;
      if ( a3 )
        v34 = a3[8];
      v63 = v34;
      v106 = &v63;
      v35 = (unsigned int)v18;
      v107 = 8LL;
      if ( a3 )
        v35 = a3[10];
      v64 = v35;
      v108 = &v64;
      v36 = v18;
      v109 = 8LL;
      if ( a3 )
        v36 = *(_QWORD *)(a3 + 5);
      v65 = v36;
      v110 = &v65;
      v111 = 8LL;
      if ( a3 )
        v37 = v12 >> 31;
      else
        v37 = (unsigned int)v18;
      v66 = v37;
      v112 = &v66;
      v38 = v18;
      v113 = 8LL;
      if ( a3 )
        LOBYTE(v38) = v12 == 0;
      v67 = v38;
      v114 = &v67;
      v39 = v18;
      v115 = 8LL;
      if ( a3 )
        LOBYTE(v39) = v12 == 1;
      v68 = v39;
      v116 = &v68;
      v117 = 8LL;
      if ( a3 )
        v40 = ((unsigned __int64)*(unsigned __int8 *)(a1 + 2171) >> 6) & 1;
      else
        v40 = v18;
      v69 = v40;
      v118 = &v69;
      v119 = 8LL;
      if ( v19 == 3 )
        v41 = *(unsigned int *)(a1 + 1832);
      else
        v41 = (unsigned int)v18;
      v70 = v41;
      v121 = 8LL;
      v120 = &v70;
      v123 = 2LL;
      v122 = v125;
      v124 = *((_QWORD *)v17 + 1);
      v125[0] = *v17;
      v125[1] = v18;
      tlgCreate1Sz_wchar_t((__int64)v126, (const size_t *)(a4 + 16));
      tlgCreate1Sz_wchar_t((__int64)v127, (const size_t *)(a4 + 272));
      v129 = 4LL;
      v131 = 4LL;
      v133 = 2LL;
      v45 = *a5;
      v128 = &v45;
      v46 = a5[1];
      v130 = &v46;
      v132 = v135;
      v134 = *((_QWORD *)a6 + 1);
      v135[0] = *a6;
      v136 = v72;
      v138 = &v71;
      v135[1] = v42;
      v137 = 29LL;
      v71 = 50331648LL;
      v139 = 8LL;
      LOBYTE(v16) = tlgWriteAgg((__int64)&dword_140C02BB8, (unsigned __int8 *)&byte_14002CD10, v43, 0x24u, &v73);
    }
  }
  return v16;
}
