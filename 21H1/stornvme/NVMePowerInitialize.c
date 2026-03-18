/*
 * XREFs of NVMePowerInitialize @ 0x1C000E86C
 * Callers:
 *     NVMeHwPassiveInitialize @ 0x1C00098D0 (NVMeHwPassiveInitialize.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     NVMeGetPowerState @ 0x1C000D598 (NVMeGetPowerState.c)
 *     NVMePowerStateGetMaxPower @ 0x1C000F31C (NVMePowerStateGetMaxPower.c)
 *     NVMeValidatePowerStates @ 0x1C000F8C8 (NVMeValidatePowerStates.c)
 *     NVMeGetAutoPowerStateTransition @ 0x1C0017768 (NVMeGetAutoPowerStateTransition.c)
 *     NVMeSetAutoPowerStateTransition @ 0x1C001A478 (NVMeSetAutoPowerStateTransition.c)
 */

char __fastcall NVMePowerInitialize(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int8 v2; // r12
  int v4; // ecx
  unsigned int v5; // r14d
  unsigned __int8 v6; // bl
  unsigned __int8 v7; // r15
  __int64 PowerState; // rax
  __int64 v10; // r10
  __int64 MaxPower; // r11
  int v12; // r14d
  unsigned int v13; // ebx
  const char *v14; // rdx
  unsigned int v15; // edx
  _DWORD *v16; // rbx
  int v17; // eax
  unsigned int v18; // eax
  unsigned __int8 v19; // r9
  int v20; // eax
  __int64 v21; // rax
  char v22; // r9
  unsigned int v23; // r10d
  __int64 v24; // rdx
  int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // r9
  int v28; // edx
  int v29; // eax
  unsigned __int8 v30; // r10
  __int64 v31; // rbx
  _DWORD *v32; // r9
  __int64 v33; // rax
  unsigned int v34; // eax
  __int64 v35; // r9
  __int64 v36; // r11
  char v37; // r10
  __int64 v38; // r9
  __int64 v39; // rax
  const char *v40; // r8
  int v41; // [rsp+20h] [rbp-A9h]
  int v42; // [rsp+20h] [rbp-A9h]
  __int64 v43; // [rsp+28h] [rbp-A1h]
  __int64 v44; // [rsp+28h] [rbp-A1h]
  __int64 v45; // [rsp+28h] [rbp-A1h]
  __int64 v46; // [rsp+28h] [rbp-A1h]
  __int64 v47; // [rsp+28h] [rbp-A1h]
  __int64 v48; // [rsp+28h] [rbp-A1h]
  __int64 v49; // [rsp+28h] [rbp-A1h]
  __int64 v50; // [rsp+30h] [rbp-99h]
  __int64 v51; // [rsp+30h] [rbp-99h]
  __int64 v52; // [rsp+30h] [rbp-99h]
  __int64 v53; // [rsp+30h] [rbp-99h]
  __int64 v54; // [rsp+30h] [rbp-99h]
  __int64 v55; // [rsp+30h] [rbp-99h]
  int v56; // [rsp+38h] [rbp-91h]
  int v57; // [rsp+38h] [rbp-91h]
  int v58; // [rsp+38h] [rbp-91h]
  int v59; // [rsp+38h] [rbp-91h]
  int v60; // [rsp+38h] [rbp-91h]
  int v61; // [rsp+38h] [rbp-91h]
  int v62; // [rsp+38h] [rbp-91h]
  int v63; // [rsp+40h] [rbp-89h]
  int v64; // [rsp+40h] [rbp-89h]
  int v65; // [rsp+40h] [rbp-89h]
  int v66; // [rsp+40h] [rbp-89h]
  int v67; // [rsp+40h] [rbp-89h]
  int v68; // [rsp+40h] [rbp-89h]
  int v69; // [rsp+40h] [rbp-89h]
  __int64 v70; // [rsp+48h] [rbp-81h]
  __int64 v71; // [rsp+48h] [rbp-81h]
  __int64 v72; // [rsp+48h] [rbp-81h]
  __int64 v73; // [rsp+48h] [rbp-81h]
  __int64 v74; // [rsp+48h] [rbp-81h]
  __int64 v75; // [rsp+48h] [rbp-81h]
  __int64 v76; // [rsp+48h] [rbp-81h]
  __int64 v77; // [rsp+50h] [rbp-79h]
  __int64 v78; // [rsp+50h] [rbp-79h]
  __int64 v79; // [rsp+50h] [rbp-79h]
  __int64 v80; // [rsp+50h] [rbp-79h]
  __int64 v81; // [rsp+50h] [rbp-79h]
  __int64 v82; // [rsp+50h] [rbp-79h]
  __int64 v83; // [rsp+50h] [rbp-79h]
  __int64 v84; // [rsp+58h] [rbp-71h]
  __int64 v85; // [rsp+58h] [rbp-71h]
  __int64 v86; // [rsp+58h] [rbp-71h]
  __int64 v87; // [rsp+58h] [rbp-71h]
  __int64 v88; // [rsp+58h] [rbp-71h]
  __int64 v89; // [rsp+58h] [rbp-71h]
  __int64 v90; // [rsp+58h] [rbp-71h]
  __int64 v91; // [rsp+60h] [rbp-69h]
  __int64 v92; // [rsp+60h] [rbp-69h]
  __int64 v93; // [rsp+60h] [rbp-69h]
  __int64 v94; // [rsp+60h] [rbp-69h]
  __int64 v95; // [rsp+60h] [rbp-69h]
  __int64 v96; // [rsp+60h] [rbp-69h]
  __int64 v97; // [rsp+60h] [rbp-69h]
  __int64 v98; // [rsp+68h] [rbp-61h]
  __int64 v99; // [rsp+68h] [rbp-61h]
  __int64 v100; // [rsp+68h] [rbp-61h]
  __int64 v101; // [rsp+68h] [rbp-61h]
  __int64 v102; // [rsp+68h] [rbp-61h]
  __int64 v103; // [rsp+68h] [rbp-61h]
  __int64 v104; // [rsp+68h] [rbp-61h]
  __int64 v105; // [rsp+70h] [rbp-59h]
  __int64 v106; // [rsp+70h] [rbp-59h]
  __int64 v107; // [rsp+70h] [rbp-59h]
  __int64 v108; // [rsp+70h] [rbp-59h]
  __int64 v109; // [rsp+70h] [rbp-59h]
  __int64 v110; // [rsp+70h] [rbp-59h]
  __int64 v111; // [rsp+70h] [rbp-59h]
  __int64 v112; // [rsp+78h] [rbp-51h]
  __int64 v113; // [rsp+78h] [rbp-51h]
  __int64 v114; // [rsp+78h] [rbp-51h]
  __int64 v115; // [rsp+78h] [rbp-51h]
  __int64 v116; // [rsp+78h] [rbp-51h]
  __int64 v117; // [rsp+78h] [rbp-51h]
  __int64 v118; // [rsp+78h] [rbp-51h]
  __int64 v119; // [rsp+80h] [rbp-49h]
  __int64 v120; // [rsp+80h] [rbp-49h]
  __int64 v121; // [rsp+80h] [rbp-49h]
  __int64 v122; // [rsp+80h] [rbp-49h]
  __int64 v123; // [rsp+80h] [rbp-49h]
  __int64 v124; // [rsp+80h] [rbp-49h]
  __int64 v125; // [rsp+80h] [rbp-49h]
  __int64 v126; // [rsp+88h] [rbp-41h]
  __int64 v127; // [rsp+88h] [rbp-41h]
  __int64 v128; // [rsp+88h] [rbp-41h]
  __int64 v129; // [rsp+88h] [rbp-41h]
  __int64 v130; // [rsp+88h] [rbp-41h]
  __int64 v131; // [rsp+88h] [rbp-41h]
  __int64 v132; // [rsp+88h] [rbp-41h]
  _DWORD *v133; // [rsp+D0h] [rbp+7h] BYREF
  __int64 v134; // [rsp+D8h] [rbp+Fh] BYREF
  unsigned __int8 v135; // [rsp+130h] [rbp+67h]
  unsigned __int8 v136; // [rsp+138h] [rbp+6Fh]
  char v137; // [rsp+140h] [rbp+77h] BYREF
  unsigned __int8 v138; // [rsp+148h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 1608);
  v2 = 0;
  v133 = 0LL;
  v4 = *(_DWORD *)(a1 + 80);
  v5 = -1;
  v134 = 0LL;
  v6 = 0;
  v137 = 0;
  v136 = 0;
  v7 = 0;
  v135 = 0;
  if ( v4 != 4 && (*(_DWORD *)(a1 + 3812) & 0x100) == 0 )
  {
    if ( v4 == 3 )
    {
      NVMeGetAutoPowerStateTransition(a1);
      if ( (*(_DWORD *)(a1 + 1648) & 0x40) == 0 )
      {
        NVMeSetAutoPowerStateTransition(a1);
        NVMeGetAutoPowerStateTransition(a1);
      }
      StorPortDebugPrint(3LL, "StorNVMe - POWER: Autonomous Power State Transitions ENABLED\n");
    }
    else if ( (*(_DWORD *)(a1 + 1648) & 1) == 0 )
    {
      if ( (unsigned __int8)NVMeValidatePowerStates(a1) )
      {
        if ( *(unsigned __int8 *)(v1 + 263) != -1 )
        {
          do
          {
            PowerState = NVMeGetPowerState(a1, v2);
            MaxPower = (unsigned int)NVMePowerStateGetMaxPower(PowerState);
            v138 = *(_BYTE *)(v10 + 3);
            if ( (v138 & 2) != 0 )
            {
              v135 = v6 + 1;
              if ( (unsigned int)MaxPower < v5 )
                v5 = MaxPower;
            }
            else
            {
              ++v7;
              v136 = v2;
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
              ((unsigned __int64)v138 >> 1) & 1,
              L"Entry Lat. (us)",
              *(unsigned int *)(v10 + 4),
              L"Exit Lat. (us)",
              *(unsigned int *)(v10 + 8));
            ++v2;
            v6 = v135;
          }
          while ( v2 < (unsigned int)*(unsigned __int8 *)(v1 + 263) + 1 );
        }
        v12 = v6;
        v13 = 32 * (v6 + 3);
        if ( (unsigned int)StorPortExtendedFunction(
                             0LL,
                             a1,
                             v13,
                             1701672526LL,
                             (unsigned int)&v133,
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
          v14 = "StorNVMe - POWER: StorPoFx Registration Failed to Allocate PoFxDevice\n";
        }
        else
        {
          NVMeZeroMemory(v133, v13);
          v15 = 1;
          *v133 = 3;
          v133[1] = 24;
          v133[2] = 1;
          v133[3] |= 0x40u;
          v16 = v133;
          v133[6] = 2;
          v16[7] = 40;
          *(_OWORD *)(v16 + 10) = xmmword_1C001F050;
          if ( *(_DWORD *)(a1 + 80) != 5 )
            v15 = v12 + 1;
          v16[8] = v15;
          if ( v15 > 1 )
          {
            v133[3] |= 0x100u;
            v15 = v16[8];
          }
          if ( v15 > 8 )
            v16[8] = 8;
          v133[3] |= 0x10u;
          v133[4] = -1;
          v17 = *(_DWORD *)(a1 + 80);
          if ( v17 == 2 )
          {
            v133[3] |= 4u;
            *(_DWORD *)(a1 + 1648) |= 0x10u;
          }
          else if ( v17 == 5 )
          {
            v133[3] |= 4u;
            v133[4] = *(_DWORD *)(a1 + 92);
          }
          v18 = *(_DWORD *)(a1 + 80);
          if ( v18 <= 1 || v18 - 3 <= 1 )
            v133[3] |= 2u;
          v133[3] |= 8u;
          v19 = v136 + 1;
          v20 = v16[8] - 1;
          v16[16] = 1;
          v16[17] = 32;
          *((_QWORD *)v16 + 9) = 0LL;
          *((_QWORD *)v16 + 10) = 0LL;
          v16[22] = -1;
          v16[15] = v20;
          if ( v16[8] > 1u )
          {
            do
            {
              v21 = NVMeGetPowerState(a1, v19);
              v19 = v22 + 1;
              v24 = 8LL * v23;
              v16[8 * v23 + 22] = v25;
              v16[v24 + 16] = 1;
              v16[v24 + 17] = 32;
              v26 = (unsigned int)(*(_DWORD *)(v21 + 4) + *(_DWORD *)(v21 + 8));
              *(_QWORD *)&v16[v24 + 20] = 0LL;
              *(_QWORD *)&v16[v24 + 18] = 10 * v26;
            }
            while ( v23 + 1 < v16[8] );
          }
          if ( (unsigned int)StorPortExtendedFunction(
                               48LL,
                               a1,
                               0LL,
                               v133,
                               (unsigned int)&v137,
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
            StorPortExtendedFunction(
              1LL,
              a1,
              v133,
              v27,
              v41,
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
            *(_DWORD *)(a1 + 1648) &= 0xFFFFFFFA;
            v14 = "StorNVMe - POWER: StorPoFx Registration Failed\n";
            *(_QWORD *)(a1 + 1632) = 0LL;
          }
          else
          {
            v28 = *(_DWORD *)(a1 + 100);
            *(_DWORD *)(a1 + 1648) = (*(_DWORD *)(a1 + 1648) | 5) ^ ((*(_BYTE *)(a1 + 1648) | 5) ^ (unsigned __int8)(8 * v137)) & 8;
            *(_BYTE *)(a1 + 1657) = *((_BYTE *)v16 + 32);
            *(_QWORD *)(a1 + 1632) = v133;
            v29 = 15;
            *(_DWORD *)(a1 + 1672) = 15;
            if ( v28 != -1 )
              v29 = v28;
            *(_DWORD *)(a1 + 1664) = v29;
            *(_BYTE *)(a1 + 1658) = 0;
            *(_WORD *)(a1 + 1654) = 0;
            *(_DWORD *)(a1 + 1660) = 0;
            *(_BYTE *)(a1 + 1653) = v136;
            *(_DWORD *)(a1 + 1676) = 200;
            *(_DWORD *)(a1 + 1684) = 2000;
            *(_DWORD *)(a1 + 1680) = 100;
            if ( v135 )
            {
              StorPortExtendedFunction(
                32LL,
                a1,
                a1 + 1688,
                v27,
                v41,
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
                51LL,
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
              StorPortExtendedFunction(
                52LL,
                a1,
                0LL,
                0LL,
                0,
                v47,
                v54,
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
                v130);
            }
            StorPortDebugPrint(3LL, "StorNVMe - POWER: StorPoFx Registration Succeeded\n");
            if ( !(unsigned int)StorPortExtendedFunction(
                                  0LL,
                                  a1,
                                  24 * (unsigned int)v7 + 40,
                                  1701672526LL,
                                  (unsigned int)&v134,
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
                                  v128) )
            {
              v30 = 0;
              *(_DWORD *)v134 = 1;
              *(_DWORD *)(v134 + 4) = 40;
              *(_QWORD *)(v134 + 16) = 3LL;
              *(_DWORD *)(v134 + 24) = v7;
              *(_DWORD *)(v134 + 28) = 40;
              if ( v7 )
              {
                v31 = 0LL;
                do
                {
                  v32 = (_DWORD *)(v134 + v31 + *(unsigned int *)(v134 + 28));
                  *v32 = 1;
                  v32[1] = 24;
                  v33 = NVMeGetPowerState(a1, v30);
                  v34 = NVMePowerStateGetMaxPower(v33);
                  *(_QWORD *)(v35 + 16) = v36;
                  v30 = v37 + 1;
                  v31 += 24LL;
                  *(_QWORD *)(v35 + 8) = v34 / 0x3E8;
                }
                while ( v30 < v7 );
              }
              LODWORD(v48) = 1;
              if ( (unsigned int)StorPortExtendedFunction(
                                   65LL,
                                   a1,
                                   0LL,
                                   0LL,
                                   128,
                                   v48,
                                   v134,
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
                                   v131) )
              {
                StorPortExtendedFunction(
                  1LL,
                  a1,
                  v134,
                  v38,
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
                  v125,
                  v132);
                v40 = "Failed";
              }
              else
              {
                v39 = v134;
                v40 = "Succeeded";
                *(_DWORD *)(a1 + 1648) |= 2u;
                *(_QWORD *)(a1 + 1640) = v39;
                *(_BYTE *)(a1 + 1654) = v7;
                *(_BYTE *)(a1 + 1655) = 0;
              }
              StorPortDebugPrint(3LL, "StorNVMe - POWER: Perf State Registration %s\n", v40);
              NVMeGetAutoPowerStateTransition(a1);
              if ( (*(_DWORD *)(a1 + 1648) & 0x40) != 0 )
              {
                NVMeSetAutoPowerStateTransition(a1);
                NVMeGetAutoPowerStateTransition(a1);
              }
              return 1;
            }
            v14 = "StorNVMe - POWER: Perf State Registration Failed to Allocate Perf Set\n";
          }
        }
        StorPortDebugPrint(3LL, v14);
      }
      return 0;
    }
  }
  return 1;
}
