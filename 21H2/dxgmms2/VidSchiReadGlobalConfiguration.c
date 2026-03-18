/*
 * XREFs of VidSchiReadGlobalConfiguration @ 0x1C00AF784
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00AE220 (VidSchInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchiReadNodeConfiguration @ 0x1C00B04F8 (VidSchiReadNodeConfiguration.c)
 */

bool __fastcall VidSchiReadGlobalConfiguration(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rdx
  int v4; // edi
  bool v5; // sf
  bool v6; // of
  int NodeConfiguration; // eax
  unsigned int v8; // edx
  __int64 v9; // r11
  unsigned int v10; // r8d
  int *v11; // rcx
  __int64 v12; // r9
  _DWORD *v13; // rcx
  _DWORD *v14; // rax
  int *v15; // rax
  int v16; // r10d
  int *v17; // rax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // edx
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // eax
  bool IsEnabled; // al
  int v26; // ecx
  _QWORD *v27; // r8
  __int64 v28; // rdx
  int v29; // ecx
  __int64 v30; // rax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // edx
  unsigned int v35; // edx
  int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // ecx
  bool v39; // cc
  __int64 v40; // rdx
  int v41; // eax
  bool result; // al
  _DWORD *v43; // rax
  __int64 v44; // rcx
  int v45; // eax
  unsigned int v46; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+5Ch] [rbp-ACh] BYREF
  unsigned int v48; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v49; // [rsp+64h] [rbp-A4h] BYREF
  unsigned int v50; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v51; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v52; // [rsp+70h] [rbp-98h] BYREF
  int v53; // [rsp+74h] [rbp-94h] BYREF
  int v54; // [rsp+78h] [rbp-90h] BYREF
  int v55; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v56; // [rsp+80h] [rbp-88h] BYREF
  int v57; // [rsp+84h] [rbp-84h] BYREF
  int v58; // [rsp+88h] [rbp-80h] BYREF
  int v59; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v60; // [rsp+90h] [rbp-78h] BYREF
  unsigned int v61; // [rsp+94h] [rbp-74h] BYREF
  unsigned int v62; // [rsp+98h] [rbp-70h] BYREF
  unsigned int v63; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v64; // [rsp+A0h] [rbp-68h] BYREF
  int v65; // [rsp+A4h] [rbp-64h] BYREF
  int v66; // [rsp+A8h] [rbp-60h] BYREF
  int v67; // [rsp+ACh] [rbp-5Ch] BYREF
  int v68; // [rsp+B0h] [rbp-58h] BYREF
  int v69; // [rsp+B4h] [rbp-54h] BYREF
  int v70; // [rsp+B8h] [rbp-50h] BYREF
  int v71; // [rsp+BCh] [rbp-4Ch] BYREF
  int v72; // [rsp+C0h] [rbp-48h] BYREF
  int v73; // [rsp+C4h] [rbp-44h] BYREF
  int v74; // [rsp+C8h] [rbp-40h] BYREF
  int v75; // [rsp+CCh] [rbp-3Ch] BYREF
  int v76; // [rsp+D0h] [rbp-38h] BYREF
  int v77; // [rsp+D4h] [rbp-34h] BYREF
  int v78; // [rsp+D8h] [rbp-30h] BYREF
  int v79; // [rsp+DCh] [rbp-2Ch] BYREF
  BOOL v80; // [rsp+E0h] [rbp-28h] BYREF
  int v81; // [rsp+E4h] [rbp-24h] BYREF
  int v82; // [rsp+E8h] [rbp-20h] BYREF
  int v83; // [rsp+ECh] [rbp-1Ch] BYREF
  int v84; // [rsp+F0h] [rbp-18h] BYREF
  int v85; // [rsp+F4h] [rbp-14h] BYREF
  int v86; // [rsp+F8h] [rbp-10h] BYREF
  int v87; // [rsp+FCh] [rbp-Ch] BYREF
  int v88; // [rsp+100h] [rbp-8h] BYREF
  int v89; // [rsp+104h] [rbp-4h] BYREF
  int v90; // [rsp+108h] [rbp+0h] BYREF
  int v91; // [rsp+10Ch] [rbp+4h] BYREF
  int v92; // [rsp+110h] [rbp+8h] BYREF
  int v93; // [rsp+114h] [rbp+Ch] BYREF
  int v94; // [rsp+118h] [rbp+10h] BYREF
  int v95; // [rsp+11Ch] [rbp+14h] BYREF
  int v96; // [rsp+120h] [rbp+18h] BYREF
  int v97; // [rsp+124h] [rbp+1Ch] BYREF
  int v98; // [rsp+128h] [rbp+20h] BYREF
  int v99; // [rsp+12Ch] [rbp+24h] BYREF
  int v100; // [rsp+130h] [rbp+28h] BYREF
  int v101; // [rsp+134h] [rbp+2Ch] BYREF
  int v102; // [rsp+138h] [rbp+30h] BYREF
  int v103; // [rsp+13Ch] [rbp+34h] BYREF
  int v104; // [rsp+140h] [rbp+38h] BYREF
  unsigned int v105; // [rsp+144h] [rbp+3Ch] BYREF
  int v106; // [rsp+148h] [rbp+40h] BYREF
  int v107; // [rsp+14Ch] [rbp+44h] BYREF
  int v108; // [rsp+150h] [rbp+48h] BYREF
  BOOL v109; // [rsp+154h] [rbp+4Ch] BYREF
  _QWORD v110[232]; // [rsp+158h] [rbp+50h] BYREF

  v82 = 25000;
  v81 = 0;
  v83 = 50000;
  v2 = *(_DWORD *)(a1 + 228);
  v87 = 0;
  v84 = 1;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 16;
  v85 = 2;
  v103 = 16;
  v86 = 3;
  v88 = 0;
  v89 = 1;
  v90 = 1;
  v91 = 0;
  v94 = 0;
  v92 = 20;
  v93 = 2;
  v53 = 7;
  v96 = 0;
  v97 = 900;
  v98 = 1000;
  v95 = 1;
  v99 = 8;
  v100 = 0;
  v65 = 10;
  v101 = 1;
  v102 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v104 = 100;
  v72 = 64;
  v105 = v2;
  v6 = __OFSUB__(*(_DWORD *)(v3 + 2692), 2000);
  v5 = *(_DWORD *)(v3 + 2692) - 2000 < 0;
  v55 = 0;
  v48 = 25000;
  v109 = v5 == v6;
  v80 = v109;
  v49 = 50000;
  v57 = 1;
  v54 = 2;
  v50 = 3;
  v78 = 0;
  v56 = 0;
  v58 = 1;
  v74 = 1;
  v75 = 0;
  v76 = 0;
  v51 = 20;
  v77 = 2;
  v52 = 7;
  v59 = 0;
  v67 = 900;
  v68 = 1000;
  v73 = 1;
  v70 = 8;
  v66 = 0;
  v64 = 10;
  v60 = 1;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v69 = 16;
  v71 = 100;
  v46 = 64;
  v79 = 0;
  v47 = v2;
  if ( *(int *)(v3 + 2692) >= 1300 && *(_BYTE *)(v3 + 2629) )
  {
    v53 = 1;
    v52 = 1;
  }
  memset(v110, 0, 0x738uLL);
  v110[7] = 0LL;
  LODWORD(v110[1]) = 288;
  LODWORD(v110[4]) = 67108868;
  LODWORD(v110[6]) = 4;
  v110[2] = L"AutoSyncToCPUPriority";
  v110[3] = &v55;
  v110[5] = &v81;
  v110[9] = L"QuantumUnit";
  v110[10] = &v48;
  v110[12] = &v82;
  v110[16] = L"PreemptionQuantumUnit";
  v110[17] = &v49;
  v110[19] = &v83;
  v110[23] = L"EnablePreemption";
  v110[24] = &v57;
  v110[26] = &v84;
  v110[30] = L"HwQueuedRenderPacketGroupLimit";
  v110[31] = &v54;
  v110[33] = &v85;
  v110[37] = L"QueuedPresentLimit";
  v110[38] = &v50;
  v110[40] = &v86;
  v110[44] = L"InitDriverFenceId";
  v110[45] = &v78;
  v110[47] = &v87;
  v110[51] = L"CarryOverUsedQuantum";
  LODWORD(v110[8]) = 288;
  LODWORD(v110[11]) = 67108868;
  LODWORD(v110[13]) = 4;
  v110[14] = 0LL;
  LODWORD(v110[15]) = 288;
  LODWORD(v110[18]) = 67108868;
  LODWORD(v110[20]) = 4;
  v110[21] = 0LL;
  LODWORD(v110[22]) = 288;
  LODWORD(v110[25]) = 67108868;
  LODWORD(v110[27]) = 4;
  v110[28] = 0LL;
  LODWORD(v110[29]) = 288;
  LODWORD(v110[32]) = 67108868;
  LODWORD(v110[34]) = 4;
  v110[35] = 0LL;
  LODWORD(v110[36]) = 288;
  LODWORD(v110[39]) = 67108868;
  LODWORD(v110[41]) = 4;
  v110[42] = 0LL;
  LODWORD(v110[43]) = 288;
  LODWORD(v110[46]) = 67108868;
  LODWORD(v110[48]) = 4;
  v110[49] = 0LL;
  LODWORD(v110[50]) = 288;
  v110[52] = &v56;
  v110[54] = &v88;
  v110[58] = L"EnableFlipImmediateSwFlipQueue";
  v110[59] = &v58;
  v110[61] = &v89;
  v110[65] = L"AdjustWorkerThreadPriority";
  v110[66] = &v74;
  v110[68] = &v90;
  v110[72] = L"CountFlipTowardHwLimit";
  v110[73] = &v75;
  v110[75] = &v91;
  v110[79] = L"NumberOfDmaPacketPool";
  v110[80] = &v51;
  v110[82] = &v92;
  v110[86] = L"ProfileLevel";
  v110[87] = &v77;
  v110[89] = &v93;
  v110[93] = L"VSyncIdleTimeout";
  v110[94] = &v52;
  v110[96] = &v53;
  v110[100] = L"CountPresentTowardHwLimit";
  v110[101] = &v76;
  v110[103] = &v94;
  v110[107] = L"EnableContextDelay";
  v110[108] = &v73;
  LODWORD(v110[53]) = 67108868;
  LODWORD(v110[55]) = 4;
  v110[56] = 0LL;
  LODWORD(v110[57]) = 288;
  LODWORD(v110[60]) = 67108868;
  LODWORD(v110[62]) = 4;
  v110[63] = 0LL;
  LODWORD(v110[64]) = 288;
  LODWORD(v110[67]) = 67108868;
  LODWORD(v110[69]) = 4;
  v110[70] = 0LL;
  LODWORD(v110[71]) = 288;
  LODWORD(v110[74]) = 67108868;
  LODWORD(v110[76]) = 4;
  v110[77] = 0LL;
  LODWORD(v110[78]) = 288;
  LODWORD(v110[81]) = 67108868;
  LODWORD(v110[83]) = 4;
  v110[84] = 0LL;
  LODWORD(v110[85]) = 288;
  LODWORD(v110[88]) = 67108868;
  LODWORD(v110[90]) = 4;
  v110[91] = 0LL;
  LODWORD(v110[92]) = 288;
  LODWORD(v110[95]) = 67108868;
  LODWORD(v110[97]) = 4;
  v110[98] = 0LL;
  LODWORD(v110[99]) = 288;
  LODWORD(v110[102]) = 67108868;
  LODWORD(v110[104]) = 4;
  v110[105] = 0LL;
  LODWORD(v110[106]) = 288;
  LODWORD(v110[109]) = 67108868;
  v110[110] = &v95;
  v110[114] = L"LogDriverVSyncCallback";
  v110[115] = &v59;
  v110[117] = &v96;
  v110[121] = L"MaximumAllowedPreemptionDelay";
  v110[122] = &v67;
  v110[124] = &v97;
  v110[128] = L"ContextSchedulingPenaltyDelay";
  v110[129] = &v68;
  v110[131] = &v98;
  v110[135] = L"BackgroundProcessMaximumAllowedPreemptionDelay";
  v110[136] = &v70;
  v110[138] = &v99;
  v110[142] = L"ForceEnableFlipFenceModel";
  v110[143] = &v66;
  v110[145] = &v100;
  v110[149] = L"YieldPercentage";
  v110[150] = &v64;
  v110[152] = &v65;
  v110[156] = L"ForegroundPriorityBoost";
  v110[157] = &v60;
  v110[159] = &v101;
  v110[163] = L"ForceFlipTrueImmediateMode";
  v110[164] = &v61;
  LODWORD(v110[111]) = 4;
  v110[112] = 0LL;
  LODWORD(v110[113]) = 288;
  LODWORD(v110[116]) = 67108868;
  LODWORD(v110[118]) = 4;
  v110[119] = 0LL;
  LODWORD(v110[120]) = 288;
  LODWORD(v110[123]) = 67108868;
  LODWORD(v110[125]) = 4;
  v110[126] = 0LL;
  LODWORD(v110[127]) = 288;
  LODWORD(v110[130]) = 67108868;
  LODWORD(v110[132]) = 4;
  v110[133] = 0LL;
  LODWORD(v110[134]) = 288;
  LODWORD(v110[137]) = 67108868;
  LODWORD(v110[139]) = 4;
  v110[140] = 0LL;
  LODWORD(v110[141]) = 288;
  LODWORD(v110[144]) = 67108868;
  LODWORD(v110[146]) = 4;
  v110[147] = 0LL;
  LODWORD(v110[148]) = 288;
  LODWORD(v110[151]) = 67108868;
  LODWORD(v110[153]) = 4;
  v110[154] = 0LL;
  LODWORD(v110[155]) = 288;
  LODWORD(v110[158]) = 67108868;
  LODWORD(v110[160]) = 4;
  v110[161] = 0LL;
  LODWORD(v110[162]) = 288;
  LODWORD(v110[165]) = 67108868;
  LODWORD(v110[167]) = 4;
  v110[166] = &v102;
  v110[170] = L"MaxYieldInterval";
  v110[171] = &v69;
  v110[173] = &v103;
  v110[177] = L"MaxFocusGpuQuantumWithoutPresent";
  v110[178] = &v71;
  v110[180] = &v104;
  v110[184] = L"HistoryLogSize";
  v110[185] = &v46;
  v110[187] = &v72;
  v110[191] = L"HwQueuePacketCap";
  v110[192] = &v47;
  v110[194] = &v105;
  v110[198] = L"FlipDoNotFlipMode";
  v110[199] = &v62;
  v110[201] = &v106;
  v110[205] = L"DdiSuspendMode";
  v110[206] = &v63;
  v110[208] = &v107;
  v110[212] = L"PfnCpuOverride";
  v110[213] = &v79;
  v110[215] = &v108;
  v110[219] = L"PerSourceCustomDuration";
  v110[220] = &v80;
  v110[168] = 0LL;
  LODWORD(v110[169]) = 288;
  LODWORD(v110[172]) = 67108868;
  LODWORD(v110[174]) = 4;
  v110[175] = 0LL;
  LODWORD(v110[176]) = 288;
  LODWORD(v110[179]) = 67108868;
  LODWORD(v110[181]) = 4;
  v110[182] = 0LL;
  LODWORD(v110[183]) = 288;
  LODWORD(v110[186]) = 67108868;
  LODWORD(v110[188]) = 4;
  v110[189] = 0LL;
  LODWORD(v110[190]) = 288;
  LODWORD(v110[193]) = 67108868;
  LODWORD(v110[195]) = 4;
  v110[196] = 0LL;
  LODWORD(v110[197]) = 288;
  LODWORD(v110[200]) = 67108868;
  LODWORD(v110[202]) = 4;
  v110[203] = 0LL;
  LODWORD(v110[204]) = 288;
  LODWORD(v110[207]) = 67108868;
  LODWORD(v110[209]) = 4;
  v110[210] = 0LL;
  LODWORD(v110[211]) = 288;
  LODWORD(v110[214]) = 67108868;
  LODWORD(v110[216]) = 4;
  v110[217] = 0LL;
  LODWORD(v110[218]) = 288;
  LODWORD(v110[221]) = 67108868;
  v110[222] = &v109;
  LODWORD(v110[223]) = 4;
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers\\Scheduler", v110, 0LL, 0LL);
  NodeConfiguration = VidSchiReadNodeConfiguration(a1, *(_QWORD *)(a1 + 2568));
  v8 = 0;
  if ( *(_DWORD *)(a1 + 80) )
  {
    v9 = NodeConfiguration;
    do
    {
      v10 = *(_DWORD *)(a1 + 2608);
      if ( v9 < 0 )
        goto LABEL_7;
      v13 = *(_DWORD **)(a1 + 2568);
      v12 = v8;
      v43 = &v13[v8];
      if ( v8 >= v10 )
        v43 = *(_DWORD **)(a1 + 2568);
      if ( !*v43 )
      {
LABEL_7:
        v11 = *(int **)(a1 + 2568);
        v12 = v8;
        if ( v8 < v10 )
          v11 += v8;
        *v11 = v54;
        v10 = *(_DWORD *)(a1 + 2608);
        v13 = *(_DWORD **)(a1 + 2568);
      }
      v14 = &v13[v12];
      if ( v8 >= v10 )
        v14 = v13;
      if ( *v14 <= 1u )
      {
        v16 = 1;
      }
      else
      {
        v15 = &v13[v12];
        if ( v8 >= v10 )
          v15 = v13;
        v16 = *v15;
      }
      v17 = &v13[v12];
      if ( v8 >= v10 )
        v17 = v13;
      ++v8;
      *v17 = v16;
    }
    while ( v8 < *(_DWORD *)(a1 + 80) );
  }
  v18 = v61;
  *(_DWORD *)(a1 + 2536) = (v60 != 0 ? 0x400 : 0) | (v59 != 0 ? 0x100 : 0) | (v58 != 0 ? 0x10 : 0) | (v57 != 0) | (v56 != 0 ? 4 : 0) | (v55 != 0 ? 2 : 0) | *(_DWORD *)(a1 + 2536) & 0xFFFFFAE8;
  if ( v18 <= 2 )
    *(_DWORD *)(a1 + 2548) = v18;
  if ( v62 <= 2 )
    *(_DWORD *)(a1 + 2552) = v62;
  if ( v63 <= 2 )
    *(_DWORD *)(a1 + 2556) = v63;
  v19 = v64;
  v20 = v65;
  *(_QWORD *)(a1 + 2792) = 1000LL;
  *(_QWORD *)(a1 + 2800) = 2500LL;
  *(_QWORD *)(a1 + 2808) = 5000LL;
  *(_QWORD *)(a1 + 2816) = 10000LL;
  *(_QWORD *)(a1 + 2824) = 25000LL;
  if ( (unsigned int)(v19 - 1) <= 0x53 )
    v20 = v19;
  *(_QWORD *)(a1 + 2832) = 50000LL;
  *(_DWORD *)(a1 + 208) = v20;
  v21 = v66 == 0;
  *(_DWORD *)(a1 + 212) = v20 + 15;
  *(_QWORD *)(a1 + 2840) = 100000LL;
  v22 = (unsigned int)(10000 * v67);
  *(_BYTE *)(a1 + 57) = !v21;
  *(_QWORD *)(a1 + 2848) = 250000LL;
  *(_QWORD *)(a1 + 2856) = 500000LL;
  *(_QWORD *)(a1 + 2768) = v22;
  *(_QWORD *)(a1 + 2776) = (unsigned int)(10000 * v68);
  *(_QWORD *)(a1 + 2864) = (unsigned int)(10000 * v69);
  *(_QWORD *)(a1 + 2784) = (unsigned int)(10000 * v70);
  *(_QWORD *)(a1 + 2872) = (unsigned int)(10000 * v71);
  v23 = v46;
  if ( v46 < 0x10 )
  {
    v23 = 16;
LABEL_58:
    v46 = v23;
    goto LABEL_30;
  }
  if ( v46 > 0x10000 )
  {
    v23 = 0x10000;
    v46 = 0x10000;
    goto LABEL_30;
  }
  if ( ((v46 - 1) & v46) != 0 )
  {
    WdLogSingleEntry1(1LL, v46);
    DxgkLogInternalTriageEvent(v44, 0x40000LL);
    v23 = v72;
    goto LABEL_58;
  }
LABEL_30:
  *(_DWORD *)(a1 + 224) = v23;
  v24 = 14;
  if ( v47 <= 0xE )
  {
    v24 = v47;
    if ( !v47 )
      v24 = 1;
  }
  v47 = v24;
  *(_DWORD *)(a1 + 228) = v24;
  if ( !v73 || (IsEnabled = TdrIsEnabled(), v26 = 512, !IsEnabled) )
    v26 = 0;
  v27 = (_QWORD *)(a1 + 2680);
  v28 = 0LL;
  *(_DWORD *)(a1 + 2536) = v26 | *(_DWORD *)(a1 + 2536) & 0xFFFFFDFF;
  do
  {
    v29 = 1;
    if ( v48 > 1 )
      v29 = v48;
    v30 = (unsigned int)(v29 * *(_DWORD *)((char *)&gulQuantumMultiplierTableByPriorityClass + v28));
    v31 = 1;
    if ( v49 > 1 )
      v31 = v49;
    *(v27 - 6) = v30;
    v32 = *(_DWORD *)((char *)&gulPreemptionQuantumMultiplierTableByPriorityClass + v28);
    v28 += 4LL;
    *v27++ = (unsigned int)(v31 * v32);
  }
  while ( v28 < 24 );
  v33 = 1;
  v34 = *(_DWORD *)(a1 + 2536);
  if ( v50 > 1 )
    v33 = v50;
  *(_DWORD *)(a1 + 2560) = v33;
  v35 = (v75 != 0 ? 0x40 : 0) | (v74 != 0 ? 0x20 : 0) | v34 & 0xFFFFFF9F;
  v36 = -(v76 != 0);
  *(_DWORD *)(a1 + 6448) = v77;
  v37 = v36 & 0x80 | v35 & 0xFFFFFF7F;
  v38 = v52;
  v39 = v51 <= 0x10;
  *(_DWORD *)(a1 + 2536) = v37;
  if ( !v39 )
    v4 = v51;
  v40 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 2620) = v4;
  *(_DWORD *)(a1 + 2404) = v38;
  if ( *(int *)(v40 + 2692) < 1300 )
  {
    if ( v38 >= 4 )
    {
      v45 = v38;
      if ( v38 > 0xFFFFFFFD )
        v45 = -3;
      *(_DWORD *)(a1 + 2404) = v45;
    }
    else
    {
      *(_DWORD *)(a1 + 2404) = 4;
    }
  }
  v41 = v78;
  *(_DWORD *)(a1 + 2760) = v78;
  *(_DWORD *)(a1 + 2752) = v41;
  *(_DWORD *)(a1 + 2744) = v41;
  *(_DWORD *)(a1 + 2736) = v41;
  *(_DWORD *)(a1 + 2728) = v41;
  switch ( v79 )
  {
    case 0:
      if ( (**(_DWORD **)(v40 + 2696) & 0x1000) == 0 )
        break;
LABEL_49:
      *(_DWORD *)(a1 + 232) = 1;
      break;
    case 1:
      goto LABEL_49;
    case 2:
      *(_DWORD *)(a1 + 232) = 2;
      break;
    case 3:
      *(_DWORD *)(a1 + 232) = 0;
      break;
  }
  result = v80;
  *(_BYTE *)(a1 + 6609) = v80;
  return result;
}
