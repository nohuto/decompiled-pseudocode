/*
 * XREFs of NVMePowerInitialize @ 0x1C000E86C
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C00098D0 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeGetPowerState @ 0x1C000D598 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000F324 (NVMePowerStateGetMaxPower.c)
 *     NVMeValidatePowerStates @ 0x1C000F8D0 (NVMeValidatePowerStates.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0017768 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001A478 (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r13
  int v3; // ecx
  unsigned int v4; // r14d
  unsigned __int8 v5; // r15
  unsigned __int8 v7; // r12
  __int64 PowerState; // rax
  unsigned int MaxPower; // eax
  __int64 v10; // r10
  unsigned __int64 v11; // rbx
  unsigned int v12; // ebx
  const char *v13; // rdx
  unsigned int v14; // edx
  _DWORD *v15; // rbx
  int v16; // eax
  int v17; // ecx
  unsigned __int8 v18; // r9
  int v19; // eax
  __int64 v20; // rax
  char v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // rdx
  int v24; // r11d
  __int64 v25; // rcx
  __int64 v26; // r9
  int v27; // edx
  int v28; // eax
  unsigned __int8 v29; // r10
  __int64 v30; // rbx
  _DWORD *v31; // r9
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // r9
  __int64 v35; // r11
  char v36; // r10
  __int64 v37; // r9
  __int64 v38; // rax
  const char *v39; // r8
  int v40; // [rsp+20h] [rbp-A9h]
  int v41; // [rsp+20h] [rbp-A9h]
  __int64 v42; // [rsp+28h] [rbp-A1h]
  __int64 v43; // [rsp+28h] [rbp-A1h]
  __int64 v44; // [rsp+28h] [rbp-A1h]
  __int64 v45; // [rsp+28h] [rbp-A1h]
  __int64 v46; // [rsp+28h] [rbp-A1h]
  __int64 v47; // [rsp+28h] [rbp-A1h]
  __int64 v48; // [rsp+28h] [rbp-A1h]
  __int64 v49; // [rsp+30h] [rbp-99h]
  __int64 v50; // [rsp+30h] [rbp-99h]
  __int64 v51; // [rsp+30h] [rbp-99h]
  __int64 v52; // [rsp+30h] [rbp-99h]
  __int64 v53; // [rsp+30h] [rbp-99h]
  __int64 v54; // [rsp+30h] [rbp-99h]
  int v55; // [rsp+38h] [rbp-91h]
  int v56; // [rsp+38h] [rbp-91h]
  int v57; // [rsp+38h] [rbp-91h]
  int v58; // [rsp+38h] [rbp-91h]
  int v59; // [rsp+38h] [rbp-91h]
  int v60; // [rsp+38h] [rbp-91h]
  int v61; // [rsp+38h] [rbp-91h]
  int v62; // [rsp+40h] [rbp-89h]
  int v63; // [rsp+40h] [rbp-89h]
  int v64; // [rsp+40h] [rbp-89h]
  int v65; // [rsp+40h] [rbp-89h]
  int v66; // [rsp+40h] [rbp-89h]
  int v67; // [rsp+40h] [rbp-89h]
  int v68; // [rsp+40h] [rbp-89h]
  __int64 v69; // [rsp+48h] [rbp-81h]
  __int64 v70; // [rsp+48h] [rbp-81h]
  __int64 v71; // [rsp+48h] [rbp-81h]
  __int64 v72; // [rsp+48h] [rbp-81h]
  __int64 v73; // [rsp+48h] [rbp-81h]
  __int64 v74; // [rsp+48h] [rbp-81h]
  __int64 v75; // [rsp+48h] [rbp-81h]
  __int64 v76; // [rsp+50h] [rbp-79h]
  __int64 v77; // [rsp+50h] [rbp-79h]
  __int64 v78; // [rsp+50h] [rbp-79h]
  __int64 v79; // [rsp+50h] [rbp-79h]
  __int64 v80; // [rsp+50h] [rbp-79h]
  __int64 v81; // [rsp+50h] [rbp-79h]
  __int64 v82; // [rsp+50h] [rbp-79h]
  __int64 v83; // [rsp+58h] [rbp-71h]
  __int64 v84; // [rsp+58h] [rbp-71h]
  __int64 v85; // [rsp+58h] [rbp-71h]
  __int64 v86; // [rsp+58h] [rbp-71h]
  __int64 v87; // [rsp+58h] [rbp-71h]
  __int64 v88; // [rsp+58h] [rbp-71h]
  __int64 v89; // [rsp+58h] [rbp-71h]
  __int64 v90; // [rsp+60h] [rbp-69h]
  __int64 v91; // [rsp+60h] [rbp-69h]
  __int64 v92; // [rsp+60h] [rbp-69h]
  __int64 v93; // [rsp+60h] [rbp-69h]
  __int64 v94; // [rsp+60h] [rbp-69h]
  __int64 v95; // [rsp+60h] [rbp-69h]
  __int64 v96; // [rsp+60h] [rbp-69h]
  __int64 v97; // [rsp+68h] [rbp-61h]
  __int64 v98; // [rsp+68h] [rbp-61h]
  __int64 v99; // [rsp+68h] [rbp-61h]
  __int64 v100; // [rsp+68h] [rbp-61h]
  __int64 v101; // [rsp+68h] [rbp-61h]
  __int64 v102; // [rsp+68h] [rbp-61h]
  __int64 v103; // [rsp+68h] [rbp-61h]
  __int64 v104; // [rsp+70h] [rbp-59h]
  __int64 v105; // [rsp+70h] [rbp-59h]
  __int64 v106; // [rsp+70h] [rbp-59h]
  __int64 v107; // [rsp+70h] [rbp-59h]
  __int64 v108; // [rsp+70h] [rbp-59h]
  __int64 v109; // [rsp+70h] [rbp-59h]
  __int64 v110; // [rsp+70h] [rbp-59h]
  __int64 v111; // [rsp+78h] [rbp-51h]
  __int64 v112; // [rsp+78h] [rbp-51h]
  __int64 v113; // [rsp+78h] [rbp-51h]
  __int64 v114; // [rsp+78h] [rbp-51h]
  __int64 v115; // [rsp+78h] [rbp-51h]
  __int64 v116; // [rsp+78h] [rbp-51h]
  __int64 v117; // [rsp+78h] [rbp-51h]
  __int64 v118; // [rsp+80h] [rbp-49h]
  __int64 v119; // [rsp+80h] [rbp-49h]
  __int64 v120; // [rsp+80h] [rbp-49h]
  __int64 v121; // [rsp+80h] [rbp-49h]
  __int64 v122; // [rsp+80h] [rbp-49h]
  __int64 v123; // [rsp+80h] [rbp-49h]
  __int64 v124; // [rsp+80h] [rbp-49h]
  __int64 v125; // [rsp+88h] [rbp-41h]
  __int64 v126; // [rsp+88h] [rbp-41h]
  __int64 v127; // [rsp+88h] [rbp-41h]
  __int64 v128; // [rsp+88h] [rbp-41h]
  __int64 v129; // [rsp+88h] [rbp-41h]
  __int64 v130; // [rsp+88h] [rbp-41h]
  __int64 v131; // [rsp+88h] [rbp-41h]
  __int64 v132; // [rsp+D0h] [rbp+7h] BYREF
  unsigned __int8 v133; // [rsp+130h] [rbp+67h]
  unsigned __int8 v134; // [rsp+138h] [rbp+6Fh]
  char v135; // [rsp+140h] [rbp+77h] BYREF
  _DWORD *v136; // [rsp+148h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 1608);
  v136 = 0LL;
  v3 = *(_DWORD *)(a1 + 80);
  v4 = -1;
  v132 = 0LL;
  v5 = 0;
  v135 = 0;
  v134 = 0;
  v133 = 0;
  if ( v3 != 4 && (*(_DWORD *)(a1 + 3812) & 0x100) == 0 )
  {
    if ( v3 == 3 )
    {
      NVMeGetAutoPowerStateTransition(a1);
      if ( (*(_DWORD *)(a1 + 1648) & 0x40) == 0 )
      {
        NVMeSetAutoPowerStateTransition(a1);
        NVMeGetAutoPowerStateTransition(a1);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
      return 1;
    }
    if ( (*(_DWORD *)(a1 + 1648) & 1) == 0 )
    {
      if ( !(unsigned __int8)NVMeValidatePowerStates(a1) )
        return 0;
      v7 = 0;
      if ( *(unsigned __int8 *)(v1 + 263) != -1 )
      {
        do
        {
          PowerState = NVMeGetPowerState(a1, v7);
          MaxPower = NVMePowerStateGetMaxPower(PowerState);
          v11 = *(unsigned __int8 *)(v10 + 3);
          if ( (v11 & 2) != 0 )
          {
            ++v133;
            if ( MaxPower < v4 )
              v4 = MaxPower;
          }
          else
          {
            ++v5;
            v134 = v7;
          }
          StorPortExtendedFunction(
            87LL,
            a1,
            0LL,
            0LL,
            0,
            L"NVMe Power State",
            12LL,
            4,
            0,
            0LL,
            L"Max Power (uW)",
            MaxPower,
            L"Non-Operational",
            (v11 >> 1) & 1,
            L"Entry Lat. (us)",
            *(unsigned int *)(v10 + 4),
            L"Exit Lat. (us)",
            *(unsigned int *)(v10 + 8));
          ++v7;
        }
        while ( v7 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
      }
      v12 = 32 * (v133 + 3);
      if ( (unsigned int)StorPortExtendedFunction(
                           0LL,
                           a1,
                           v12,
                           1701672526LL,
                           (unsigned int)&v136,
                           v42,
                           v49,
                           v55,
                           v62,
                           v69,
                           v76,
                           v83,
                           v90,
                           v97,
                           v104,
                           v111,
                           v118,
                           v125) )
      {
        v13 = "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n";
      }
      else
      {
        NVMeZeroMemory(v136, v12);
        v14 = 1;
        *v136 = 3;
        v136[1] = 24;
        v136[2] = 1;
        v136[3] |= 0x40u;
        v15 = v136;
        v136[6] = 2;
        v15[7] = 40;
        *(_OWORD *)(v15 + 10) = xmmword_1C0020210;
        if ( *(_DWORD *)(a1 + 80) != 5 )
          v14 = v133 + 1;
        v15[8] = v14;
        if ( v14 > 1 )
        {
          v136[3] |= 0x100u;
          v14 = v15[8];
        }
        if ( v14 > 8 )
          v15[8] = 8;
        v136[3] |= 0x10u;
        v136[4] = -1;
        v16 = *(_DWORD *)(a1 + 80);
        if ( (v16 || v4 <= 0x2710) && v16 != 2 )
        {
          if ( v16 == 5 )
          {
            v136[3] |= 4u;
            v136[4] = *(_DWORD *)(a1 + 92);
          }
        }
        else
        {
          v136[3] |= 4u;
          *(_DWORD *)(a1 + 1648) |= 0x10u;
        }
        v17 = *(_DWORD *)(a1 + 80);
        if ( ((v17 - 1) & 0xFFFFFFFC) == 0 && v17 != 2 )
          v136[3] |= 2u;
        v136[3] |= 8u;
        v18 = v134 + 1;
        v19 = v15[8] - 1;
        v15[16] = 1;
        v15[17] = 32;
        *((_QWORD *)v15 + 9) = 0LL;
        *((_QWORD *)v15 + 10) = 0LL;
        v15[22] = -1;
        v15[15] = v19;
        if ( v15[8] > 1u )
        {
          do
          {
            v20 = NVMeGetPowerState(a1, v18);
            v18 = v21 + 1;
            v23 = 8LL * v22;
            v15[8 * v22 + 22] = -1;
            v15[v23 + 16] = 1;
            v15[v23 + 17] = v24;
            v25 = (unsigned int)(*(_DWORD *)(v20 + 4) + *(_DWORD *)(v20 + 8));
            *(_QWORD *)&v15[v23 + 20] = 0LL;
            *(_QWORD *)&v15[v23 + 18] = 10 * v25;
          }
          while ( v22 + 1 < v15[8] );
        }
        if ( !(unsigned int)StorPortExtendedFunction(
                              48LL,
                              a1,
                              0LL,
                              v136,
                              (unsigned int)&v135,
                              v43,
                              v50,
                              v56,
                              v63,
                              v70,
                              v77,
                              v84,
                              v91,
                              v98,
                              v105,
                              v112,
                              v119,
                              v126) )
        {
          v27 = *(_DWORD *)(a1 + 100);
          *(_DWORD *)(a1 + 1648) = (*(_DWORD *)(a1 + 1648) | 5) ^ ((*(_BYTE *)(a1 + 1648) | 5) ^ (unsigned __int8)(8 * v135)) & 8;
          *(_BYTE *)(a1 + 1657) = *((_BYTE *)v15 + 32);
          *(_QWORD *)(a1 + 1632) = v136;
          v28 = 15;
          *(_DWORD *)(a1 + 1672) = 15;
          if ( v27 != -1 )
            v28 = v27;
          *(_DWORD *)(a1 + 1664) = v28;
          *(_BYTE *)(a1 + 1658) = 0;
          *(_WORD *)(a1 + 1654) = 0;
          *(_DWORD *)(a1 + 1660) = 0;
          *(_BYTE *)(a1 + 1653) = v134;
          *(_DWORD *)(a1 + 1676) = 200;
          *(_DWORD *)(a1 + 1684) = 2000;
          *(_DWORD *)(a1 + 1680) = 100;
          if ( v133 )
          {
            StorPortExtendedFunction(
              32LL,
              a1,
              a1 + 1688,
              v26,
              v40,
              v44,
              v51,
              v57,
              v64,
              v71,
              v78,
              v85,
              v92,
              v99,
              v106,
              v113,
              v120,
              v127);
            StorPortExtendedFunction(
              51LL,
              a1,
              0LL,
              0LL,
              0,
              v45,
              v52,
              v58,
              v65,
              v72,
              v79,
              v86,
              v93,
              v100,
              v107,
              v114,
              v121,
              v128);
            StorPortExtendedFunction(
              52LL,
              a1,
              0LL,
              0LL,
              0,
              v46,
              v53,
              v59,
              v66,
              v73,
              v80,
              v87,
              v94,
              v101,
              v108,
              v115,
              v122,
              v129);
          }
          StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
          if ( !(unsigned int)StorPortExtendedFunction(
                                0LL,
                                a1,
                                24 * (unsigned int)v5 + 40,
                                1701672526LL,
                                (unsigned int)&v132,
                                v44,
                                v51,
                                v57,
                                v64,
                                v71,
                                v78,
                                v85,
                                v92,
                                v99,
                                v106,
                                v113,
                                v120,
                                v127) )
          {
            v29 = 0;
            *(_DWORD *)v132 = 1;
            *(_DWORD *)(v132 + 4) = 40;
            *(_QWORD *)(v132 + 16) = 3LL;
            *(_DWORD *)(v132 + 24) = v5;
            *(_DWORD *)(v132 + 28) = 40;
            if ( v5 )
            {
              v30 = 0LL;
              do
              {
                v31 = (_DWORD *)(v132 + v30 + *(unsigned int *)(v132 + 28));
                *v31 = 1;
                v31[1] = 24;
                v32 = NVMeGetPowerState(a1, v29);
                v33 = NVMePowerStateGetMaxPower(v32);
                *(_QWORD *)(v34 + 16) = v35;
                v29 = v36 + 1;
                v30 += 24LL;
                *(_QWORD *)(v34 + 8) = v33 / 0x3E8;
              }
              while ( v29 < v5 );
            }
            LODWORD(v47) = 1;
            if ( (unsigned int)StorPortExtendedFunction(
                                 65LL,
                                 a1,
                                 0LL,
                                 0LL,
                                 128,
                                 v47,
                                 v132,
                                 v60,
                                 v67,
                                 v74,
                                 v81,
                                 v88,
                                 v95,
                                 v102,
                                 v109,
                                 v116,
                                 v123,
                                 v130) )
            {
              StorPortExtendedFunction(
                1LL,
                a1,
                v132,
                v37,
                v41,
                v48,
                v54,
                v61,
                v68,
                v75,
                v82,
                v89,
                v96,
                v103,
                v110,
                v117,
                v124,
                v131);
              v39 = "Failed";
            }
            else
            {
              v38 = v132;
              v39 = "Succeeded";
              *(_DWORD *)(a1 + 1648) |= 2u;
              *(_QWORD *)(a1 + 1640) = v38;
              *(_BYTE *)(a1 + 1654) = v5;
              *(_BYTE *)(a1 + 1655) = 0;
            }
            StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v39);
            NVMeGetAutoPowerStateTransition(a1);
            if ( (*(_DWORD *)(a1 + 1648) & 0x40) != 0 )
            {
              NVMeSetAutoPowerStateTransition(a1);
              NVMeGetAutoPowerStateTransition(a1);
            }
            return 1;
          }
          StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n");
          return 0;
        }
        StorPortExtendedFunction(
          1LL,
          a1,
          v136,
          v26,
          v40,
          v44,
          v51,
          v57,
          v64,
          v71,
          v78,
          v85,
          v92,
          v99,
          v106,
          v113,
          v120,
          v127);
        *(_DWORD *)(a1 + 1648) &= 0xFFFFFFFA;
        v13 = "StorNVMe - POWER: StorPoFx Registration Failed\n";
        *(_QWORD *)(a1 + 1632) = 0LL;
      }
      StorPortDebugPrint(3LL, v13);
      return 0;
    }
  }
  return 1;
}
