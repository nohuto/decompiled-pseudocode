/*
 * XREFs of AcpiEval_CPC @ 0x1C0022A10
 * Callers:
 *     InitAcpiCpc @ 0x1C0020D88 (InitAcpiCpc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     AcpiEvaluateMethod @ 0x1C0020130 (AcpiEvaluateMethod.c)
 *     AcpiParseCore @ 0x1C0023454 (AcpiParseCore.c)
 *     AcpiTranslateAccessSize @ 0x1C0023844 (AcpiTranslateAccessSize.c)
 */

__int64 __fastcall AcpiEval_CPC(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  _DWORD *v4; // rbx
  int v5; // edi
  _DWORD *v6; // r15
  _DWORD *PoolWithTag; // rax
  unsigned __int16 v9; // r9
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  char v14; // al
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v19; // [rsp+50h] [rbp-B0h]
  _BYTE v20[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v21; // [rsp+62h] [rbp-9Eh]
  const char *v22; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v23)(); // [rsp+70h] [rbp-90h]
  char v24; // [rsp+78h] [rbp-88h]
  int v25; // [rsp+7Ah] [rbp-86h]
  const char *v26; // [rsp+80h] [rbp-80h]
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp-78h]
  char v28; // [rsp+90h] [rbp-70h]
  int v29; // [rsp+92h] [rbp-6Eh]
  const char *v30; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall *v31)(); // [rsp+A0h] [rbp-60h]
  char v32; // [rsp+A8h] [rbp-58h]
  int v33; // [rsp+AAh] [rbp-56h]
  const char *v34; // [rsp+B0h] [rbp-50h]
  __int64 (__fastcall *v35)(); // [rsp+B8h] [rbp-48h]
  char v36; // [rsp+C0h] [rbp-40h]
  int v37; // [rsp+C2h] [rbp-3Eh]
  const char *v38; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v39)(); // [rsp+D0h] [rbp-30h]
  char v40; // [rsp+D8h] [rbp-28h]
  int v41; // [rsp+DAh] [rbp-26h]
  const char *v42; // [rsp+E0h] [rbp-20h]
  __int64 (__fastcall *v43)(); // [rsp+E8h] [rbp-18h]
  char v44; // [rsp+F0h] [rbp-10h]
  int v45; // [rsp+F2h] [rbp-Eh]
  const char *v46; // [rsp+F8h] [rbp-8h]
  __int64 (__fastcall *v47)(); // [rsp+100h] [rbp+0h]
  char v48; // [rsp+108h] [rbp+8h]
  int v49; // [rsp+10Ah] [rbp+Ah]
  const char *v50; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v51)(); // [rsp+118h] [rbp+18h]
  char v52; // [rsp+120h] [rbp+20h]
  int v53; // [rsp+122h] [rbp+22h]
  const char *v54; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v55)(); // [rsp+130h] [rbp+30h]
  char v56; // [rsp+138h] [rbp+38h]
  int v57; // [rsp+13Ah] [rbp+3Ah]
  const char *v58; // [rsp+140h] [rbp+40h]
  __int64 (__fastcall *v59)(); // [rsp+148h] [rbp+48h]
  char v60; // [rsp+150h] [rbp+50h]
  int v61; // [rsp+152h] [rbp+52h]
  const char *v62; // [rsp+158h] [rbp+58h]
  __int64 (__fastcall *v63)(); // [rsp+160h] [rbp+60h]
  char v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+16Ah] [rbp+6Ah]
  const char *v66; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v67)(); // [rsp+178h] [rbp+78h]
  char v68; // [rsp+180h] [rbp+80h]
  int v69; // [rsp+182h] [rbp+82h]
  const char *v70; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v71)(); // [rsp+190h] [rbp+90h]
  char v72; // [rsp+198h] [rbp+98h]
  int v73; // [rsp+19Ah] [rbp+9Ah]
  const char *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 (__fastcall *v75)(); // [rsp+1A8h] [rbp+A8h]
  char v76; // [rsp+1B0h] [rbp+B0h]
  int v77; // [rsp+1B2h] [rbp+B2h]
  const char *v78; // [rsp+1B8h] [rbp+B8h]
  __int64 (__fastcall *v79)(); // [rsp+1C0h] [rbp+C0h]
  char v80; // [rsp+1C8h] [rbp+C8h]
  int v81; // [rsp+1CAh] [rbp+CAh]
  const char *v82; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v83)(); // [rsp+1D8h] [rbp+D8h]
  char v84; // [rsp+1E0h] [rbp+E0h]
  int v85; // [rsp+1E2h] [rbp+E2h]
  const char *v86; // [rsp+1E8h] [rbp+E8h]
  __int64 (__fastcall *v87)(); // [rsp+1F0h] [rbp+F0h]
  char v88; // [rsp+1F8h] [rbp+F8h]
  int v89; // [rsp+1FAh] [rbp+FAh]
  const char *v90; // [rsp+200h] [rbp+100h]
  __int64 (__fastcall *v91)(); // [rsp+208h] [rbp+108h]
  char v92; // [rsp+210h] [rbp+110h]
  int v93; // [rsp+212h] [rbp+112h]
  const char *v94; // [rsp+218h] [rbp+118h]
  __int64 (__fastcall *v95)(); // [rsp+220h] [rbp+120h]
  char v96; // [rsp+228h] [rbp+128h]
  int v97; // [rsp+22Ah] [rbp+12Ah]
  const char *v98; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v99)(); // [rsp+238h] [rbp+138h]
  char v100; // [rsp+240h] [rbp+140h]
  int v101; // [rsp+242h] [rbp+142h]
  const char *v102; // [rsp+248h] [rbp+148h]
  __int64 (__fastcall *v103)(); // [rsp+250h] [rbp+150h]
  char v104; // [rsp+258h] [rbp+158h]
  int v105; // [rsp+25Ah] [rbp+15Ah]
  const char *v106; // [rsp+260h] [rbp+160h]
  __int64 (__fastcall *v107)(); // [rsp+268h] [rbp+168h]
  char v108; // [rsp+270h] [rbp+170h]
  int v109; // [rsp+272h] [rbp+172h]
  const char *v110; // [rsp+278h] [rbp+178h]
  __int64 (__fastcall *v111)(); // [rsp+280h] [rbp+180h]
  char v112; // [rsp+288h] [rbp+188h]
  int v113; // [rsp+28Ah] [rbp+18Ah]
  const char *v114; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v115)(); // [rsp+298h] [rbp+198h]
  char v116; // [rsp+2A0h] [rbp+1A0h]
  int v117; // [rsp+2A2h] [rbp+1A2h]
  const char *v118; // [rsp+2A8h] [rbp+1A8h]
  __int64 (__fastcall *v119)(); // [rsp+2B0h] [rbp+1B0h]
  char v120; // [rsp+2B8h] [rbp+1B8h]
  int v121; // [rsp+2BAh] [rbp+1BAh]
  const char *v122; // [rsp+2C0h] [rbp+1C0h]
  __int64 (__fastcall *v123)(); // [rsp+2C8h] [rbp+1C8h]
  char v124; // [rsp+2D0h] [rbp+1D0h]
  int v125; // [rsp+2D2h] [rbp+1D2h]
  const char *v126; // [rsp+2D8h] [rbp+1D8h]
  __int64 (__fastcall *v127)(); // [rsp+2E0h] [rbp+1E0h]
  char v128; // [rsp+2E8h] [rbp+1E8h]
  int v129; // [rsp+2EAh] [rbp+1EAh]
  const char *v130; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v131)(); // [rsp+2F8h] [rbp+1F8h]
  char v132; // [rsp+300h] [rbp+200h]
  int v133; // [rsp+302h] [rbp+202h]
  const char *v134; // [rsp+308h] [rbp+208h]
  __int64 (__fastcall *v135)(); // [rsp+310h] [rbp+210h]
  char v136; // [rsp+318h] [rbp+218h]
  int v137; // [rsp+31Ah] [rbp+21Ah]
  const char *v138; // [rsp+320h] [rbp+220h]
  __int64 (__fastcall *v139)(); // [rsp+328h] [rbp+228h]
  char v140; // [rsp+330h] [rbp+230h]
  int v141; // [rsp+332h] [rbp+232h]
  const char *v142; // [rsp+338h] [rbp+238h]
  __int64 (__fastcall *v143)(); // [rsp+340h] [rbp+240h]

  v19 = a2;
  v24 = 1;
  v17 = 0;
  v20[0] = 0;
  v22 = "NumEntries";
  v21 = 0;
  v26 = "Revision";
  v23 = AcpiParseULong;
  v30 = "HighestPerformance";
  v34 = "HighestPerformance";
  v25 = 0x40000;
  v38 = "NominalPerformance";
  v42 = "NominalPerformance";
  v46 = "LowestNonlinearPerformance";
  v50 = "LowestNonlinearPerformance";
  v54 = "LowestPerformance";
  v58 = "LowestPerformance";
  v62 = "GuaranteedPerformance";
  v66 = "DesiredPerformance";
  v70 = "MinimumPerformance";
  v74 = "MaximumPerformance";
  v78 = "PerformanceReductionTolerance";
  v27 = AcpiParseULong;
  v28 = 2;
  v29 = 0x80000;
  v31 = AcpiParseStaticRegister;
  v32 = 2;
  v33 = 524290;
  v35 = AcpiParseRegister;
  v36 = 3;
  v37 = 0x200000;
  v39 = AcpiParseStaticRegister;
  v40 = 3;
  v41 = 2097154;
  v43 = AcpiParseRegister;
  v44 = 4;
  v45 = 3670016;
  v47 = AcpiParseStaticRegister;
  v48 = 4;
  v49 = 3670018;
  v51 = AcpiParseRegister;
  v52 = 5;
  v53 = 5242880;
  v55 = AcpiParseStaticRegister;
  v56 = 5;
  v57 = 5242882;
  v59 = AcpiParseRegister;
  v60 = 6;
  v61 = 6815746;
  v63 = AcpiParseRegister;
  v64 = 7;
  v65 = 8388610;
  v67 = AcpiParseRegister;
  v68 = 8;
  v69 = 9961474;
  v71 = AcpiParseRegister;
  v72 = 9;
  v73 = 11534338;
  v75 = AcpiParseRegister;
  v76 = 10;
  v77 = 13107202;
  v79 = AcpiParseRegister;
  v80 = 11;
  v82 = "TimeWindow";
  v3 = 21LL;
  v81 = 14680066;
  v86 = "CounterWraparound";
  v4 = 0LL;
  v83 = AcpiParseRegister;
  v90 = "ReferenceCounter";
  v94 = "DeliveredCounter";
  v98 = "PerformanceLimited";
  v102 = "Enable";
  v106 = "AutonomousEnable";
  v110 = "AutonomousEnable";
  v114 = "AutonomousActivityWindow";
  v118 = "EnergyPerformancePreference";
  v122 = "ReferencePerformance";
  v126 = "ReferencePerformance";
  v130 = "LowestFrequency";
  v134 = "LowestFrequency";
  v138 = "NominalFrequency";
  v142 = "NominalFrequency";
  v84 = 12;
  v85 = 16252930;
  v87 = AcpiParseRegister;
  v88 = 13;
  v89 = 17825794;
  v91 = AcpiParseRegister;
  v92 = 14;
  v93 = 19398658;
  v95 = AcpiParseRegister;
  v96 = 15;
  v97 = 20971522;
  v99 = AcpiParseRegister;
  v100 = 16;
  v101 = 22544386;
  v103 = AcpiParseRegister;
  v104 = 17;
  v105 = 24117248;
  v107 = AcpiParseStaticRegister;
  v108 = 17;
  v109 = 24117250;
  v111 = AcpiParseRegister;
  v112 = 18;
  v113 = 25690114;
  v115 = AcpiParseRegister;
  v116 = 19;
  v117 = 27262978;
  v119 = AcpiParseRegister;
  v120 = 20;
  v121 = 28835840;
  v123 = AcpiParseStaticRegister;
  v124 = 20;
  v125 = 28835842;
  v127 = AcpiParseRegister;
  v128 = 21;
  v129 = 30408704;
  v131 = AcpiParseStaticRegister;
  v132 = 21;
  v133 = 30408706;
  v135 = AcpiParseRegister;
  v136 = 22;
  v137 = 31981568;
  v139 = AcpiParseStaticRegister;
  v140 = 22;
  v141 = 31981570;
  v143 = AcpiParseRegister;
  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1092), 0x40000u);
  v5 = AcpiEvaluateMethod(a1, 1129333599, 0LL, (unsigned int **)&P, &v17);
  if ( v5 < 0 )
    goto LABEL_2;
  *(_QWORD *)(a1 + 264) |= *(_DWORD *)(a1 + 272) & 0x8000000;
  if ( !v17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x2Fu,
        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    v5 = -1073741275;
    goto LABEL_2;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x200uLL, 0x72637250u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
LABEL_2:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1096), 0x40000u);
    v6 = P;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x200uLL);
  v6 = P;
  v5 = AcpiParseCore((unsigned int)v20, 2, (int)P + 12, *((_DWORD *)P + 1) - 12, (__int64)v4, 512, (__int64)"_CPC", 1);
  if ( v5 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_32;
    v9 = 48;
    goto LABEL_17;
  }
  v10 = v4[1];
  if ( v10 )
  {
    v11 = v10 - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = 31;
        v14 = v12 != 1;
        v15 = (unsigned int *)&Cpc3RegisterTable;
      }
      else
      {
        v13 = 27;
        v14 = 0;
        v15 = (unsigned int *)&Cpc2RegisterTable;
        v3 = 19LL;
      }
    }
    else
    {
      v13 = 21;
      v14 = 0;
      v15 = (unsigned int *)&CpcRegisterTable;
      v3 = 15LL;
    }
    v5 = AcpiParseCore((unsigned int)v20, v13, (int)v6 + 12, v6[1] - 12, (__int64)v4, 512, (__int64)"_CPC", v14);
    if ( v5 >= 0 )
    {
      do
      {
        AcpiTranslateAccessSize((char *)v4 + *v15, v16);
        v15 += 6;
        --v3;
      }
      while ( v3 );
      *v19 = v4;
      v4 = 0LL;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v9 = 50;
LABEL_17:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        v9,
        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x31u,
        (__int64)&WPP_f55cd4363f3e3b8d6dea32ac6500bcbf_Traceguids);
    v5 = -1072431089;
  }
LABEL_32:
  if ( v5 < 0 )
    goto LABEL_2;
LABEL_3:
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return (unsigned int)v5;
}
