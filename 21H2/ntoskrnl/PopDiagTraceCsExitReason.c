/*
 * XREFs of PopDiagTraceCsExitReason @ 0x1408E9094
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x14027F7C0 (EtwWrite.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PopDiagTraceCsExitReason(int *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned __int8 v6; // cl
  unsigned int v7; // ecx
  int v8; // r14d
  int v9; // r15d
  int v10; // esi
  struct _EVENT_DATA_DESCRIPTOR *UserData; // rax
  struct _EVENT_DATA_DESCRIPTOR *v12; // rdi
  char v13; // [rsp+38h] [rbp-D0h] BYREF
  char v14; // [rsp+39h] [rbp-CFh] BYREF
  char v15; // [rsp+3Ah] [rbp-CEh] BYREF
  char v16; // [rsp+3Bh] [rbp-CDh] BYREF
  int v17; // [rsp+3Ch] [rbp-CCh] BYREF
  int v18; // [rsp+40h] [rbp-C8h] BYREF
  int v19; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v20; // [rsp+48h] [rbp-C0h] BYREF
  int v21; // [rsp+4Ch] [rbp-BCh] BYREF
  int v22; // [rsp+50h] [rbp-B8h] BYREF
  int v23; // [rsp+54h] [rbp-B4h] BYREF
  int v24; // [rsp+58h] [rbp-B0h] BYREF
  int v25; // [rsp+5Ch] [rbp-ACh] BYREF
  int v26; // [rsp+60h] [rbp-A8h] BYREF
  int v27; // [rsp+64h] [rbp-A4h] BYREF
  int v28; // [rsp+68h] [rbp-A0h] BYREF
  int v29; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v30; // [rsp+70h] [rbp-98h] BYREF
  int v31; // [rsp+74h] [rbp-94h] BYREF
  int v32; // [rsp+78h] [rbp-90h] BYREF
  int v33; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v34; // [rsp+80h] [rbp-88h] BYREF
  BOOL v35; // [rsp+84h] [rbp-84h] BYREF
  int v36; // [rsp+88h] [rbp-80h] BYREF
  int v37; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v38; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+94h] [rbp-74h] BYREF
  int v40; // [rsp+98h] [rbp-70h] BYREF
  int v41; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v42; // [rsp+A0h] [rbp-68h] BYREF
  int v43; // [rsp+A4h] [rbp-64h] BYREF
  int v44; // [rsp+A8h] [rbp-60h] BYREF
  int v45; // [rsp+ACh] [rbp-5Ch] BYREF
  __int64 v46; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v49; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v50; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v51; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v52; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v56; // [rsp+100h] [rbp-8h] BYREF
  __int64 v57; // [rsp+108h] [rbp+0h] BYREF
  __int64 v58; // [rsp+110h] [rbp+8h] BYREF
  __int64 v59; // [rsp+118h] [rbp+10h] BYREF
  __int64 v60; // [rsp+120h] [rbp+18h] BYREF
  __int64 v61; // [rsp+128h] [rbp+20h] BYREF
  __int64 v62; // [rsp+130h] [rbp+28h] BYREF
  __int64 v63; // [rsp+138h] [rbp+30h] BYREF
  __int64 v64; // [rsp+140h] [rbp+38h] BYREF
  __int64 v65; // [rsp+148h] [rbp+40h] BYREF
  __int64 v66; // [rsp+150h] [rbp+48h] BYREF
  __int64 v67; // [rsp+158h] [rbp+50h] BYREF
  __int64 v68; // [rsp+160h] [rbp+58h] BYREF
  __int64 v69; // [rsp+168h] [rbp+60h] BYREF
  __int64 v70; // [rsp+170h] [rbp+68h] BYREF
  __int64 v71; // [rsp+178h] [rbp+70h] BYREF
  __int64 v72; // [rsp+180h] [rbp+78h] BYREF
  __int64 v73; // [rsp+188h] [rbp+80h] BYREF
  __int64 v74; // [rsp+190h] [rbp+88h] BYREF
  __int64 v75; // [rsp+198h] [rbp+90h] BYREF
  __int64 v76; // [rsp+1A0h] [rbp+98h] BYREF
  __int64 v77; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v78; // [rsp+1B0h] [rbp+A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 *v80; // [rsp+1D8h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+D8h]
  int *v82; // [rsp+1E8h] [rbp+E0h]
  __int64 v83; // [rsp+1F0h] [rbp+E8h]
  __int64 *v84; // [rsp+1F8h] [rbp+F0h]
  __int64 v85; // [rsp+200h] [rbp+F8h]
  __int64 *v86; // [rsp+208h] [rbp+100h]
  __int64 v87; // [rsp+210h] [rbp+108h]
  __int64 *v88; // [rsp+218h] [rbp+110h]
  __int64 v89; // [rsp+220h] [rbp+118h]
  __int64 *v90; // [rsp+228h] [rbp+120h]
  __int64 v91; // [rsp+230h] [rbp+128h]
  __int64 *v92; // [rsp+238h] [rbp+130h]
  __int64 v93; // [rsp+240h] [rbp+138h]
  int *v94; // [rsp+248h] [rbp+140h]
  __int64 v95; // [rsp+250h] [rbp+148h]
  char *v96; // [rsp+258h] [rbp+150h]
  __int64 v97; // [rsp+260h] [rbp+158h]
  BOOL *v98; // [rsp+268h] [rbp+160h]
  __int64 v99; // [rsp+270h] [rbp+168h]
  int *v100; // [rsp+278h] [rbp+170h]
  __int64 v101; // [rsp+280h] [rbp+178h]
  __int64 *v102; // [rsp+288h] [rbp+180h]
  __int64 v103; // [rsp+290h] [rbp+188h]
  __int64 *v104; // [rsp+298h] [rbp+190h]
  __int64 v105; // [rsp+2A0h] [rbp+198h]
  int *v106; // [rsp+2A8h] [rbp+1A0h]
  __int64 v107; // [rsp+2B0h] [rbp+1A8h]
  __int64 *v108; // [rsp+2B8h] [rbp+1B0h]
  __int64 v109; // [rsp+2C0h] [rbp+1B8h]
  __int64 *v110; // [rsp+2C8h] [rbp+1C0h]
  __int64 v111; // [rsp+2D0h] [rbp+1C8h]
  int *v112; // [rsp+2D8h] [rbp+1D0h]
  __int64 v113; // [rsp+2E0h] [rbp+1D8h]
  int *v114; // [rsp+2E8h] [rbp+1E0h]
  __int64 v115; // [rsp+2F0h] [rbp+1E8h]
  __int64 *v116; // [rsp+2F8h] [rbp+1F0h]
  __int64 v117; // [rsp+300h] [rbp+1F8h]
  int *v118; // [rsp+308h] [rbp+200h]
  __int64 v119; // [rsp+310h] [rbp+208h]
  int *v120; // [rsp+318h] [rbp+210h]
  __int64 v121; // [rsp+320h] [rbp+218h]
  int *v122; // [rsp+328h] [rbp+220h]
  __int64 v123; // [rsp+330h] [rbp+228h]
  int *v124; // [rsp+338h] [rbp+230h]
  __int64 v125; // [rsp+340h] [rbp+238h]
  int *v126; // [rsp+348h] [rbp+240h]
  __int64 v127; // [rsp+350h] [rbp+248h]
  int *v128; // [rsp+358h] [rbp+250h]
  __int64 v129; // [rsp+360h] [rbp+258h]
  __int64 *v130; // [rsp+368h] [rbp+260h]
  __int64 v131; // [rsp+370h] [rbp+268h]
  __int64 *v132; // [rsp+378h] [rbp+270h]
  __int64 v133; // [rsp+380h] [rbp+278h]
  __int64 *v134; // [rsp+388h] [rbp+280h]
  __int64 v135; // [rsp+390h] [rbp+288h]
  __int64 *v136; // [rsp+398h] [rbp+290h]
  __int64 v137; // [rsp+3A0h] [rbp+298h]
  __int64 *v138; // [rsp+3A8h] [rbp+2A0h]
  __int64 v139; // [rsp+3B0h] [rbp+2A8h]
  __int64 *v140; // [rsp+3B8h] [rbp+2B0h]
  __int64 v141; // [rsp+3C0h] [rbp+2B8h]
  char *v142; // [rsp+3C8h] [rbp+2C0h]
  __int64 v143; // [rsp+3D0h] [rbp+2C8h]
  char *v144; // [rsp+3D8h] [rbp+2D0h]
  __int64 v145; // [rsp+3E0h] [rbp+2D8h]
  __int64 v146; // [rsp+430h] [rbp+328h] BYREF

  v146 = a2;
  v3 = *((_QWORD *)a1 + 4);
  v4 = *((_QWORD *)a1 + 11);
  v18 = *a1;
  v49 = *((_QWORD *)a1 + 5);
  v46 = *((_QWORD *)a1 + 6);
  v19 = a1[14];
  v48 = *((_QWORD *)a1 + 8);
  v47 = *((_QWORD *)a1 + 9);
  v52 = *((_QWORD *)a1 + 12);
  v55 = *((_QWORD *)a1 + 13);
  v56 = *((_QWORD *)a1 + 10);
  v5 = *((_QWORD *)a1 + 16);
  v6 = *((_BYTE *)a1 + 124);
  v53 = v5;
  v13 = v6 >> 1;
  v21 = a1[29];
  v54 = *((_QWORD *)a1 + 19);
  v22 = v6 & 1;
  v7 = *((unsigned __int8 *)a1 + 125);
  LOBYTE(v5) = *((_BYTE *)a1 + 125);
  v17 = 0;
  v24 = v5 & 1;
  v58 = *((_QWORD *)a1 + 28);
  v57 = *((_QWORD *)a1 + 29);
  v59 = *((_QWORD *)a1 + 30);
  v60 = *((_QWORD *)a1 + 31);
  v61 = *((_QWORD *)a1 + 32);
  v30 = a1[45];
  v31 = a1[46];
  v26 = (unsigned __int8)PopConsoleExternalDisplayConnected;
  v25 = (unsigned __int8)PopLidOpened;
  v32 = *((unsigned __int8 *)a1 + 188);
  v27 = a1[48];
  v28 = a1[49];
  v29 = a1[54];
  v51 = v3;
  v50 = v4;
  v23 = (v7 >> 1) & 1;
  if ( !v3 )
  {
    v46 = 0LL;
    v4 = 0LL;
    v49 = 0LL;
    v48 = 0LL;
    v47 = 0LL;
    v50 = 0LL;
  }
  v8 = a1[66];
  v9 = a1[67];
  v10 = 0;
  v20 = v4 != 0;
  if ( PopDiagHandleRegistered && EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON) )
  {
    UserData = (struct _EVENT_DATA_DESCRIPTOR *)ExAllocatePoolWithTag(PagedPool, 0x2E0uLL, 0x50455654u);
    v12 = UserData;
    if ( UserData )
    {
      *(_QWORD *)&UserData->Size = 4LL;
      UserData->Ptr = (ULONGLONG)&v18;
      UserData[1].Ptr = (ULONGLONG)&v46;
      *(_QWORD *)&UserData[1].Size = 8LL;
      UserData[2].Ptr = (ULONGLONG)&v47;
      *(_QWORD *)&UserData[2].Size = 8LL;
      UserData[3].Ptr = (ULONGLONG)&v48;
      *(_QWORD *)&UserData[3].Size = 8LL;
      UserData[4].Ptr = (ULONGLONG)&v49;
      *(_QWORD *)&UserData[4].Size = 8LL;
      UserData[5].Ptr = (ULONGLONG)&v51;
      *(_QWORD *)&UserData[5].Size = 8LL;
      UserData[6].Ptr = (ULONGLONG)&v19;
      *(_QWORD *)&UserData[6].Size = 4LL;
      UserData[7].Ptr = (ULONGLONG)&v13;
      *(_QWORD *)&UserData[7].Size = 1LL;
      UserData[8].Ptr = (ULONGLONG)&v20;
      *(_QWORD *)&UserData[8].Size = 4LL;
      UserData[9].Ptr = (ULONGLONG)&v21;
      *(_QWORD *)&UserData[9].Size = 4LL;
      UserData[10].Ptr = (ULONGLONG)&v50;
      *(_QWORD *)&UserData[10].Size = 8LL;
      UserData[11].Ptr = (ULONGLONG)&v52;
      *(_QWORD *)&UserData[11].Size = 8LL;
      UserData[12].Ptr = (ULONGLONG)&v22;
      *(_QWORD *)&UserData[12].Size = 4LL;
      UserData[13].Ptr = (ULONGLONG)&v53;
      *(_QWORD *)&UserData[13].Size = 8LL;
      UserData[14].Ptr = (ULONGLONG)&v54;
      *(_QWORD *)&UserData[14].Size = 8LL;
      UserData[15].Ptr = (ULONGLONG)&v23;
      *(_QWORD *)&UserData[15].Size = 4LL;
      UserData[16].Ptr = (ULONGLONG)&v24;
      *(_QWORD *)&UserData[16].Size = 4LL;
      UserData[17].Ptr = (ULONGLONG)&v55;
      *(_QWORD *)&UserData[17].Size = 8LL;
      UserData[18].Ptr = (ULONGLONG)&v30;
      *(_QWORD *)&UserData[18].Size = 4LL;
      UserData[19].Ptr = (ULONGLONG)&v31;
      *(_QWORD *)&UserData[19].Size = 4LL;
      UserData[20].Ptr = (ULONGLONG)&v25;
      *(_QWORD *)&UserData[20].Size = 4LL;
      UserData[21].Ptr = (ULONGLONG)&v26;
      *(_QWORD *)&UserData[21].Size = 4LL;
      UserData[22].Ptr = (ULONGLONG)&v146;
      *(_QWORD *)&UserData[22].Size = 1LL;
      UserData[23].Ptr = (ULONGLONG)&v32;
      *(_QWORD *)&UserData[23].Size = 4LL;
      UserData[24].Ptr = (ULONGLONG)&v27;
      *(_QWORD *)&UserData[24].Size = 4LL;
      UserData[25].Ptr = (ULONGLONG)&v28;
      *(_QWORD *)&UserData[25].Size = 4LL;
      UserData[26].Ptr = (ULONGLONG)&PopWnfCsEnterScenarioId;
      *(_QWORD *)&UserData[26].Size = 8LL;
      *(_QWORD *)&UserData[27].Size = 4LL;
      UserData[27].Ptr = 0xFFFFF780000002C4uLL;
      *(_QWORD *)&UserData[28].Size = 4LL;
      UserData[28].Ptr = (ULONGLONG)&v29;
      *(_QWORD *)&UserData[29].Size = 8LL;
      UserData[29].Ptr = (ULONGLONG)&v56;
      UserData[30].Ptr = (ULONGLONG)&v57;
      *(_QWORD *)&UserData[30].Size = 8LL;
      UserData[31].Ptr = (ULONGLONG)&v58;
      *(_QWORD *)&UserData[31].Size = 8LL;
      UserData[32].Ptr = (ULONGLONG)&v59;
      *(_QWORD *)&UserData[32].Size = 8LL;
      UserData[33].Ptr = (ULONGLONG)&v60;
      *(_QWORD *)&UserData[33].Size = 8LL;
      UserData[34].Ptr = (ULONGLONG)&v61;
      *(_QWORD *)&UserData[34].Size = 8LL;
      v17 = *((unsigned __int8 *)a1 + 272);
      UserData[35].Ptr = (ULONGLONG)&v17;
      *(_QWORD *)&UserData[35].Size = 4LL;
      UserData[36].Ptr = (ULONGLONG)(a1 + 72);
      *(_QWORD *)&UserData[36].Size = 4LL;
      UserData[37].Ptr = (ULONGLONG)(a1 + 73);
      *(_QWORD *)&UserData[37].Size = 4LL;
      UserData[38].Ptr = (ULONGLONG)(a1 + 70);
      *(_QWORD *)&UserData[38].Size = 8LL;
      UserData[39].Ptr = (ULONGLONG)(a1 + 78);
      *(_QWORD *)&UserData[39].Size = 4LL;
      UserData[40].Ptr = (ULONGLONG)(a1 + 79);
      *(_QWORD *)&UserData[40].Size = 4LL;
      UserData[41].Ptr = (ULONGLONG)(a1 + 76);
      *(_QWORD *)&UserData[41].Size = 8LL;
      UserData[42].Ptr = (ULONGLONG)(a1 + 74);
      *(_QWORD *)&UserData[42].Size = 4LL;
      UserData[43].Ptr = (ULONGLONG)(a1 + 75);
      *(_QWORD *)&UserData[43].Size = 4LL;
      UserData[44].Ptr = (ULONGLONG)(a1 + 80);
      *(_QWORD *)&UserData[44].Size = 4LL;
      UserData[45].Ptr = (ULONGLONG)(a1 + 81);
      *(_QWORD *)&UserData[45].Size = 4LL;
      EtwWrite(PopDiagHandle, &POP_ETW_EVENT_CS_EXIT_REASON, 0LL, 0x2Eu, UserData);
      ExFreePoolWithTag(v12, 0x50455654u);
    }
    else
    {
      v10 = -1073741670;
    }
  }
  if ( (unsigned int)dword_140C02228 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_140C02228, 0x400000000000LL) )
    {
      v62 = PopWnfCsEnterScenarioId;
      v80 = &v62;
      v33 = v18;
      v82 = &v33;
      v63 = v46;
      v84 = &v63;
      v64 = v47;
      v86 = &v64;
      v65 = v48;
      v88 = &v65;
      v66 = v49;
      v90 = &v66;
      v67 = v51;
      v92 = &v67;
      v34 = v19;
      v94 = &v34;
      v14 = v13;
      v96 = &v14;
      v35 = v20;
      v98 = &v35;
      v36 = v21;
      v100 = &v36;
      v68 = v50;
      v102 = &v68;
      v69 = v52;
      v104 = &v69;
      v37 = v22;
      v106 = &v37;
      v70 = v53;
      v108 = &v70;
      v71 = v54;
      v110 = &v71;
      v81 = 8LL;
      v83 = 4LL;
      v85 = 8LL;
      v87 = 8LL;
      v89 = 8LL;
      v91 = 8LL;
      v93 = 8LL;
      v95 = 4LL;
      v97 = 1LL;
      v99 = 4LL;
      v101 = 4LL;
      v103 = 8LL;
      v105 = 8LL;
      v107 = 4LL;
      v109 = 8LL;
      v111 = 8LL;
      v38 = v23;
      v112 = &v38;
      v39 = v24;
      v114 = &v39;
      v72 = v55;
      v116 = &v72;
      v40 = v25;
      v118 = &v40;
      v41 = v26;
      v120 = &v41;
      v42 = v27;
      v122 = &v42;
      v43 = v28;
      v124 = &v43;
      v126 = &v44;
      v45 = v29;
      v128 = &v45;
      v73 = v56;
      v130 = &v73;
      v74 = v57;
      v132 = &v74;
      v75 = v58;
      v134 = &v75;
      v76 = v59;
      v136 = &v76;
      v77 = v60;
      v138 = &v77;
      v78 = v61;
      v140 = &v78;
      v142 = &v15;
      v144 = &v16;
      v113 = 4LL;
      v115 = 4LL;
      v117 = 8LL;
      v119 = 4LL;
      v121 = 4LL;
      v123 = 4LL;
      v125 = 4LL;
      v44 = v10;
      v127 = 4LL;
      v129 = 4LL;
      v131 = 8LL;
      v133 = 8LL;
      v135 = 8LL;
      v137 = 8LL;
      v139 = 8LL;
      v141 = 8LL;
      v15 = v8;
      v143 = 1LL;
      v16 = v9;
      v145 = 1LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C02228,
        (unsigned __int8 *)word_1400288F2,
        0LL,
        0LL,
        0x23u,
        &v79);
    }
  }
}
