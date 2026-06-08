/*
 * XREFs of InitPerfStatesInternal @ 0x1C002EAC0
 * Callers:
 *     RegisterHvPerfStatesCounters @ 0x1C0023BF0 (RegisterHvPerfStatesCounters.c)
 *     RegisterKernelPerfStates @ 0x1C0030F30 (RegisterKernelPerfStates.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001860 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001BD4 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     DisplayKernelPerfStates @ 0x1C000840C (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000EDC0 (memset.c)
 *     GetRegistryDwordValue @ 0x1C001FFC0 (GetRegistryDwordValue.c)
 *     GetPerfDomain @ 0x1C002A078 (GetPerfDomain.c)
 *     CalculatePercentageCap @ 0x1C002CB9C (CalculatePercentageCap.c)
 *     InitCommonPerfStateContext @ 0x1C002D158 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitPerfStatesInternal(__int64 a1, int (__fastcall *a2)(char *, _QWORD))
{
  unsigned int v3; // ecx
  unsigned int v4; // edx
  __int64 v5; // rax
  char *v6; // rbx
  unsigned int *v7; // r15
  void *v8; // r12
  _QWORD *v9; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // edi
  char *PoolWithTag; // rax
  char *v13; // r13
  PVOID v14; // rax
  _QWORD *v15; // rax
  unsigned int v16; // r12d
  char *v17; // rax
  char *v18; // rax
  int v19; // eax
  bool v20; // zf
  void *v21; // rax
  unsigned int v22; // r8d
  _DWORD *v23; // r12
  __int64 v24; // r13
  __int64 v25; // rcx
  _DWORD *v26; // r15
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // r10d
  unsigned int v30; // r11d
  __int64 v31; // r9
  int v32; // r14d
  __int64 v33; // r15
  __int64 v34; // rcx
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // ecx
  _BYTE *v38; // rdx
  unsigned __int8 v39; // cl
  __int64 v40; // rax
  __int64 v41; // rcx
  void *v42; // rax
  char v43; // al
  __int64 v44; // r12
  _QWORD *v45; // r15
  char *v46; // r14
  unsigned int v47; // eax
  _DWORD *v48; // r11
  __int64 v49; // r10
  int v51; // [rsp+30h] [rbp-49h] BYREF
  __int64 v52; // [rsp+38h] [rbp-41h] BYREF
  size_t Size; // [rsp+40h] [rbp-39h]
  size_t v54; // [rsp+48h] [rbp-31h]
  size_t v55; // [rsp+50h] [rbp-29h]
  unsigned int v56; // [rsp+58h] [rbp-21h]
  char *v57; // [rsp+60h] [rbp-19h]
  _OWORD v58[6]; // [rsp+68h] [rbp-11h] BYREF
  unsigned int v59; // [rsp+E0h] [rbp+67h]
  unsigned int v61; // [rsp+F0h] [rbp+77h]
  int PerfDomain; // [rsp+F8h] [rbp+7Fh]

  v52 = 0LL;
  v51 = 0;
  v3 = 0;
  v4 = 0;
  v59 = 0;
  v61 = 0;
  v5 = *(_QWORD *)(a1 + 272);
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v58, 0, 32);
  if ( (v5 & 0x70000000) != 0 )
  {
    if ( (v5 & 0x40000000) != 0 )
      v7 = *(unsigned int **)(a1 + 440);
    else
      v7 = *(unsigned int **)(a1 + 432);
    v3 = *v7;
    v59 = *v7;
  }
  if ( (v5 & 0x3300000) != 0 )
  {
    v4 = **(_DWORD **)(a1 + 488);
    v61 = v4;
  }
  v10 = v4 + v3;
  v56 = v4 + v3;
  if ( !(v4 + v3) )
    return (unsigned int)-1073741823;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C00133F8,
    0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v58, &v51);
  Size = (unsigned int)(96 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v57 = PoolWithTag;
  v13 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    v55 = 32 * v10;
    v14 = ExAllocatePoolWithTag(NonPagedPoolNx, v55, 0x72637250u);
    Size = (size_t)v14;
    v8 = v14;
    if ( v14 )
    {
      memset(v14, 0, v55);
      v15 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x72637250u);
      v9 = v15;
      if ( v15 )
      {
        memset(v15, 0, 0x50uLL);
        v16 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
        LODWORD(v55) = (v16 + 31) & 0xFFFFFFF8;
        LODWORD(v54) = v55 + 8 * PerfDomain;
        v17 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)v54, 0x72637250u);
        v6 = v17;
        if ( !v17 )
        {
          v11 = -1073741670;
LABEL_16:
          v8 = (void *)Size;
          goto LABEL_75;
        }
        memset(v17, 0, (unsigned int)v54);
        if ( *(_BYTE *)(a1 + 1122) )
          *((_QWORD *)v6 + 48) = PepParkPreference;
        if ( (*(_QWORD *)(a1 + 272) & 0x10000000000LL) != 0 )
        {
          *((_QWORD *)v6 + 49) = PepParkMask;
          *((_QWORD *)v6 + 50) = PepPerfCheckComplete;
          *((_QWORD *)v6 + 9) = *(_QWORD *)(a1 + 1104);
        }
        *((_DWORD *)v6 + 4) = PerfDomain;
        *(_DWORD *)v6 = 62;
        *((_QWORD *)v6 + 52) = v6 + 432;
        *((_DWORD *)v6 + 9) = 1;
        *((_QWORD *)v6 + 51) = &v6[v16];
        v18 = &v6[(unsigned int)v55];
        *((_WORD *)v6 + 3) = 257;
        *((_QWORD *)v6 + 53) = v18;
        v19 = v51;
        *((_WORD *)v6 + 2) = v51;
        v6[52] = 0;
        *((_DWORD *)v6 + 6) = 100;
        *((_QWORD *)v6 + 42) = PerfControlPTStates;
        LODWORD(v55) = v19;
        if ( dword_1C0013C00 == 1 || v19 == 252 || (v20 = v19 == 1, v21 = PerfControlPTStatesHidden, v20) )
          v21 = PerfControlPTStatesHiddenSwAll;
        *((_QWORD *)v6 + 43) = v21;
        *((_QWORD *)v6 + 41) = PerfSelectionPTStates;
        v9[7] = Size;
        *((_QWORD *)v6 + 8) = 100LL;
        v22 = v59;
        *((_QWORD *)v6 + 7) = 0LL;
        if ( v59 && v7 )
        {
          v23 = v6 + 20;
          *((_QWORD *)v6 + 34) = *(_QWORD *)(a1 + 344);
          v24 = v59;
          *((_QWORD *)v6 + 35) = *(_QWORD *)(a1 + 352);
          *((_DWORD *)v6 + 5) = v7[2];
          v51 = v7[12 * v59 - 9];
          *v9 = *(_QWORD *)(a1 + 288);
          v9[4] = *(_QWORD *)(a1 + 320);
          v9[3] = *(_QWORD *)(a1 + 304);
          v9[5] = a1 + 408;
          *((_QWORD *)v6 + 8) = v7[2];
          v25 = 0LL;
          *((_QWORD *)v6 + 7) = v7[12 * v59 - 10];
          v26 = v7 + 3;
          do
          {
            v27 = v9[7];
            *(_DWORD *)(v25 + v27 + 16) = *(v26 - 1);
            *(_BYTE *)(v25 + v27 + 24) = (unsigned int)(100 * *(v26 - 1)) / *v23;
            *(_QWORD *)(v25 + v27) = *(_QWORD *)(v26 + 3);
            *(_DWORD *)(v25 + v27 + 20) = *v26;
            *(_QWORD *)(v25 + v27 + 8) = *(_QWORD *)(v26 + 5);
            *(_BYTE *)(v25 + v27 + 25) = 1;
            *(_WORD *)(v25 + v27 + 26) = *((_WORD *)v26 + 2);
            if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 )
            {
              *(_QWORD *)(v25 + v27 + 8) = 0LL;
              *(_QWORD *)(v25 + v27) = v26 - 1;
            }
            v26 += 12;
            v25 += 32LL;
            --v24;
          }
          while ( v24 );
          v28 = v9[7];
          v13 = v57;
          v29 = *(_DWORD *)(32LL * (v59 - 1) + v28 + 16);
        }
        else
        {
          v23 = v6 + 20;
          *((_DWORD *)v6 + 5) = 0;
          GetRegistryDwordValue(
            (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
            (__int64)L"~MHz",
            (_DWORD *)v6 + 5);
          v29 = *((_DWORD *)v6 + 5);
          if ( !v29 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                2u,
                3u,
                0x1Eu,
                (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
            *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFCFFFFFFuLL;
            v11 = -1073741823;
            goto LABEL_16;
          }
          v28 = v9[7];
          v22 = v59;
          v51 = 1000 * v29;
        }
        if ( v61 )
        {
          v30 = 0;
          v31 = 0LL;
          v32 = v51;
          v9[1] = *(_QWORD *)(a1 + 296);
          v9[2] = *(_QWORD *)(a1 + 312);
          v9[6] = a1 + 464;
          do
          {
            v33 = v9[7] + 32LL * (v22 + v30);
            v34 = *(_QWORD *)(a1 + 488);
            v35 = v29 * *(_DWORD *)(v31 + v34 + 4) / 0x64u;
            *(_DWORD *)(v33 + 16) = v35;
            *(_BYTE *)(v33 + 24) = 100 * v35 / *v23;
            *(_QWORD *)v33 = *(unsigned int *)(v31 + v34 + 16);
            *(_QWORD *)(v33 + 8) = *(unsigned int *)(v31 + v34 + 20);
            *(_BYTE *)(v33 + 25) = 2;
            *(_WORD *)(v33 + 26) = *(_WORD *)(v31 + v34 + 12);
            v36 = *(_DWORD *)(v31 + v34 + 8);
            if ( !v36 )
              v36 = v32 * *(_DWORD *)(v31 + v34 + 4) / 0x64u;
            ++v30;
            *(_DWORD *)(v33 + 20) = v36;
            v31 += 20LL;
          }
          while ( v30 < v61 );
          v28 = v9[7];
          v10 = v56;
          v13 = v57;
        }
        v37 = 1;
        if ( v10 > 1 )
        {
          while ( *(_BYTE *)(32LL * v37 + v28 + 24) )
          {
            if ( ++v37 >= v10 )
              goto LABEL_48;
          }
          v10 = v37;
        }
LABEL_48:
        v38 = (_BYTE *)v9[7];
        *((_DWORD *)v9 + 16) = v10;
        if ( v10 <= v22 )
        {
          *((_DWORD *)v9 + 18) = 0;
          *((_DWORD *)v9 + 17) = v10;
          v39 = v38[32 * v10 - 8];
        }
        else
        {
          *((_DWORD *)v9 + 17) = v22;
          *((_DWORD *)v9 + 18) = v10 - v22;
          v39 = v38[32 * v22 + 24];
        }
        *((_DWORD *)v6 + 7) = v39;
        *((_DWORD *)v6 + 8) = *(unsigned __int8 *)(32LL * (v10 - 1) + v9[7] + 24);
        v40 = *(_QWORD *)(a1 + 336);
        if ( v40 )
          *((_QWORD *)v6 + 32) = v40;
        v41 = *((_QWORD *)v6 + 51);
        *(_DWORD *)(v41 + 12) = 0;
        *(_DWORD *)(v41 + 8) = 100;
        if ( *(_QWORD *)(a1 + 328) )
        {
          v42 = PerfReadWrappingCounter;
          v38 = PerfReadActualMasterCount;
          if ( (*(_QWORD *)(a1 + 272) & 0x8000000000LL) == 0 )
            v42 = PerfReadActualMasterCount;
          *(_QWORD *)v41 = v42;
          v43 = 1;
        }
        else
        {
          *(_QWORD *)v41 = PerfStatesInstantaneousFrequency;
          v43 = 0;
        }
        *(_BYTE *)(v41 + 16) = v43;
        *(_BYTE *)(v41 + 17) = v43;
        DisplayKernelPerfStates((__int64)v6, (int)v38, v22);
        v44 = *((_QWORD *)v6 + 52);
        v45 = (_QWORD *)*((_QWORD *)v6 + 53);
        ResetEnumerationContext((__int64 *)v58);
        if ( !(unsigned int)EnumerateNextDevice((__int64 *)v58, &v52) )
        {
          v46 = v13 + 12;
          do
          {
            v47 = CalculatePercentageCap((__int64)v9, *(_DWORD *)(v52 + 448), *(_DWORD *)(v52 + 496));
            InitCommonPerfStateContext(v48, v46 - 12, v44, v47, v47 < 0x64 ? 2 : 0);
            *(_QWORD *)(v46 + 12) = v9;
            *(_DWORD *)v46 = 100;
            if ( *(_QWORD *)(a1 + 328) )
            {
              *v45 = v46 + 20;
              *(_QWORD *)(v46 + 68) = *(_QWORD *)(a1 + 328);
            }
            else
            {
              *v45 = v49;
            }
            ++v45;
            v46 += 96;
            v44 += 32LL;
          }
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v58, &v52) );
        }
        if ( (*(_DWORD *)(a1 + 272) & 0x400000) != 0 && ((_DWORD)v55 == 254 || PerfDomain == 1) )
        {
          *(_WORD *)(v6 + 11) = 257;
          *((_DWORD *)v6 + 12) = 1000;
        }
        if ( a2(v6, (unsigned int)v54) < 0 )
        {
          v8 = (void *)Size;
        }
        else
        {
          ResetEnumerationContext((__int64 *)v58);
          while ( !(unsigned int)EnumerateNextDevice((__int64 *)v58, &v52) )
          {
            *(_QWORD *)(v52 + 216) = v13;
            v13 += 96;
          }
          v8 = 0LL;
          v9 = 0LL;
          v13 = 0LL;
        }
        v11 = 0;
        goto LABEL_75;
      }
    }
  }
  v11 = -1073741670;
LABEL_75:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00133F8);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72637250u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72637250u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x72637250u);
  return v11;
}
