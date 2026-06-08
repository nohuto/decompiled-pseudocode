/*
 * XREFs of InitPerfStatesInternal @ 0x1C002480C
 * Callers:
 *     RegisterKernelPerfStates @ 0x1C00252D0 (RegisterKernelPerfStates.c)
 *     RegisterHvPerfStatesCounters @ 0x1C0030FE0 (RegisterHvPerfStatesCounters.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003A54 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0020924 (GetRegistryDwordValueNoDefault.c)
 *     InitCommonPerfStateContext @ 0x1C0025004 (InitCommonPerfStateContext.c)
 *     CalculatePercentageCap @ 0x1C002503C (CalculatePercentageCap.c)
 *     GetPerfDomain @ 0x1C0025284 (GetPerfDomain.c)
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
  char *PoolWithTag; // rax
  char *v12; // r13
  PVOID v13; // rax
  _QWORD *v14; // rax
  unsigned int v15; // r12d
  char *v16; // rax
  char *v17; // rax
  unsigned int v18; // eax
  bool v19; // zf
  void *v20; // rax
  unsigned int v21; // r8d
  _DWORD *v22; // r12
  __int64 v23; // r13
  __int64 v24; // rcx
  _DWORD *v25; // r15
  __int64 v26; // r9
  __int64 v27; // rdx
  int v28; // r10d
  unsigned int v29; // ecx
  _BYTE *v30; // rdx
  unsigned __int8 v31; // cl
  __int64 v32; // rax
  __int64 v33; // rcx
  void *v34; // rax
  char v35; // al
  __int64 v36; // r12
  _QWORD *v37; // r15
  char *v38; // r14
  unsigned int v39; // eax
  int v40; // r11d
  __int64 v41; // r10
  unsigned int v42; // edi
  unsigned int v44; // r11d
  __int64 v45; // r9
  int v46; // r14d
  __int64 v47; // r15
  __int64 v48; // rcx
  unsigned int v49; // edx
  unsigned int v50; // edx
  int v51; // [rsp+30h] [rbp-39h] BYREF
  size_t Size; // [rsp+38h] [rbp-31h]
  unsigned int v53; // [rsp+40h] [rbp-29h]
  __int64 v54; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-19h]
  unsigned int v56; // [rsp+54h] [rbp-15h]
  char *v57; // [rsp+58h] [rbp-11h]
  _OWORD v58[6]; // [rsp+60h] [rbp-9h] BYREF
  unsigned int v59; // [rsp+D0h] [rbp+67h]
  unsigned int v61; // [rsp+E0h] [rbp+77h]
  int PerfDomain; // [rsp+E8h] [rbp+7Fh]

  v54 = 0LL;
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
    qword_1C001C418,
    0LL);
  PerfDomain = GetPerfDomain(a1, v58, &v51);
  Size = (unsigned int)(96 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x72637250u);
  v57 = PoolWithTag;
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_63;
  memset(PoolWithTag, 0, Size);
  v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 32 * v10, 0x72637250u);
  Size = (size_t)v13;
  if ( !v13 )
  {
    v42 = -1073741670;
    v8 = 0LL;
    goto LABEL_52;
  }
  v8 = v13;
  memset(v13, 0, 32 * v10);
  v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x72637250u);
  v9 = v14;
  if ( v14 )
  {
    memset(v14, 0, 0x50uLL);
    v15 = (32 * PerfDomain + 439) & 0xFFFFFFF8;
    v53 = (v15 + 31) & 0xFFFFFFF8;
    v55 = v53 + 8 * PerfDomain;
    v16 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v55, 0x72637250u);
    v6 = v16;
    if ( v16 )
    {
      memset(v16, 0, v55);
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
      *((_QWORD *)v6 + 51) = &v6[v15];
      v17 = &v6[v53];
      *((_WORD *)v6 + 3) = 257;
      *((_QWORD *)v6 + 53) = v17;
      v18 = v51;
      *((_WORD *)v6 + 2) = v51;
      v6[52] = 0;
      *((_DWORD *)v6 + 6) = 100;
      *((_QWORD *)v6 + 42) = PerfControlPTStates;
      v53 = v18;
      if ( dword_1C001CC18 == 1 || v18 == 252 || (v19 = v18 == 1, v20 = PerfControlPTStatesHidden, v19) )
        v20 = PerfControlPTStatesHiddenSwAll;
      *((_QWORD *)v6 + 43) = v20;
      *((_QWORD *)v6 + 41) = PerfSelectionPTStates;
      v9[7] = Size;
      *((_QWORD *)v6 + 8) = 100LL;
      v21 = v59;
      *((_QWORD *)v6 + 7) = 0LL;
      if ( v59 && v7 )
      {
        v22 = v6 + 20;
        *((_QWORD *)v6 + 34) = *(_QWORD *)(a1 + 344);
        v23 = v59;
        *((_QWORD *)v6 + 35) = *(_QWORD *)(a1 + 352);
        *((_DWORD *)v6 + 5) = v7[2];
        v51 = v7[12 * v59 - 9];
        *v9 = *(_QWORD *)(a1 + 288);
        v9[4] = *(_QWORD *)(a1 + 320);
        v9[3] = *(_QWORD *)(a1 + 304);
        v9[5] = a1 + 408;
        *((_QWORD *)v6 + 8) = v7[2];
        v24 = 0LL;
        *((_QWORD *)v6 + 7) = v7[12 * v59 - 10];
        v25 = v7 + 3;
        do
        {
          v26 = v9[7];
          *(_DWORD *)(v24 + v26 + 16) = *(v25 - 1);
          *(_BYTE *)(v24 + v26 + 24) = (unsigned int)(100 * *(v25 - 1)) / *v22;
          *(_QWORD *)(v24 + v26) = *(_QWORD *)(v25 + 3);
          *(_DWORD *)(v24 + v26 + 20) = *v25;
          *(_QWORD *)(v24 + v26 + 8) = *(_QWORD *)(v25 + 5);
          *(_BYTE *)(v24 + v26 + 25) = 1;
          *(_WORD *)(v24 + v26 + 26) = *((_WORD *)v25 + 2);
          if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0 )
          {
            *(_QWORD *)(v24 + v26 + 8) = 0LL;
            *(_QWORD *)(v24 + v26) = v25 - 1;
          }
          v25 += 12;
          v24 += 32LL;
          --v23;
        }
        while ( v23 );
        v27 = v9[7];
        v12 = v57;
        v28 = *(_DWORD *)(32LL * (v59 - 1) + v27 + 16);
        goto LABEL_26;
      }
      v22 = v6 + 20;
      *((_DWORD *)v6 + 5) = 0;
      if ( (int)GetRegistryDwordValueNoDefault(
                  (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
                  (__int64)L"~MHz",
                  (__int64)(v6 + 20)) >= 0 )
      {
        v28 = *((_DWORD *)v6 + 5);
        if ( v28 )
        {
          v27 = v9[7];
          v21 = v59;
          v51 = 1000 * v28;
LABEL_26:
          if ( v61 )
          {
            v44 = 0;
            v45 = 0LL;
            v46 = v51;
            v9[1] = *(_QWORD *)(a1 + 296);
            v9[2] = *(_QWORD *)(a1 + 312);
            v9[6] = a1 + 464;
            do
            {
              v47 = v9[7] + 32LL * (v21 + v44);
              v48 = *(_QWORD *)(a1 + 488);
              v49 = v28 * *(_DWORD *)(v45 + v48 + 4) / 0x64u;
              *(_DWORD *)(v47 + 16) = v49;
              *(_BYTE *)(v47 + 24) = 100 * v49 / *v22;
              *(_QWORD *)v47 = *(unsigned int *)(v45 + v48 + 16);
              *(_QWORD *)(v47 + 8) = *(unsigned int *)(v45 + v48 + 20);
              *(_BYTE *)(v47 + 25) = 2;
              *(_WORD *)(v47 + 26) = *(_WORD *)(v45 + v48 + 12);
              v50 = *(_DWORD *)(v45 + v48 + 8);
              if ( !v50 )
                v50 = v46 * *(_DWORD *)(v45 + v48 + 4) / 0x64u;
              ++v44;
              *(_DWORD *)(v47 + 20) = v50;
              v45 += 20LL;
            }
            while ( v44 < v61 );
            v27 = v9[7];
            v10 = v56;
            v12 = v57;
          }
          v29 = 1;
          if ( v10 > 1 )
          {
            while ( *(_BYTE *)(32LL * v29 + v27 + 24) )
            {
              if ( ++v29 >= v10 )
                goto LABEL_30;
            }
            v10 = v29;
          }
LABEL_30:
          v30 = (_BYTE *)v9[7];
          *((_DWORD *)v9 + 16) = v10;
          if ( v10 > v21 )
          {
            *((_DWORD *)v9 + 17) = v21;
            *((_DWORD *)v9 + 18) = v10 - v21;
            v31 = v30[32 * v21 + 24];
          }
          else
          {
            *((_DWORD *)v9 + 18) = 0;
            *((_DWORD *)v9 + 17) = v10;
            v31 = v30[32 * v10 - 8];
          }
          *((_DWORD *)v6 + 7) = v31;
          *((_DWORD *)v6 + 8) = *(unsigned __int8 *)(32LL * (v10 - 1) + v9[7] + 24);
          v32 = *(_QWORD *)(a1 + 336);
          if ( v32 )
            *((_QWORD *)v6 + 32) = v32;
          v33 = *((_QWORD *)v6 + 51);
          *(_DWORD *)(v33 + 12) = 0;
          *(_DWORD *)(v33 + 8) = 100;
          if ( *(_QWORD *)(a1 + 328) )
          {
            v34 = PerfReadWrappingCounter;
            v30 = PerfReadActualMasterCount;
            if ( (*(_QWORD *)(a1 + 272) & 0x8000000000LL) == 0 )
              v34 = PerfReadActualMasterCount;
            *(_QWORD *)v33 = v34;
            v35 = 1;
          }
          else
          {
            *(_QWORD *)v33 = PerfStatesInstantaneousFrequency;
            v35 = 0;
          }
          *(_BYTE *)(v33 + 16) = v35;
          *(_BYTE *)(v33 + 17) = v35;
          DisplayKernelPerfStates((__int64)v6, (int)v30, v21);
          v36 = *((_QWORD *)v6 + 52);
          v37 = (_QWORD *)*((_QWORD *)v6 + 53);
          ResetEnumerationContext((__int64 *)v58);
          if ( !(unsigned int)EnumerateNextDevice((__int64 *)v58, &v54) )
          {
            v38 = v12 + 12;
            do
            {
              v39 = CalculatePercentageCap(v9, *(unsigned int *)(v54 + 448), *(unsigned int *)(v54 + 496));
              InitCommonPerfStateContext(v40, (_DWORD)v38 - 12, v36, v39, v39 < 0x64 ? 2 : 0);
              *(_QWORD *)(v38 + 12) = v9;
              *(_DWORD *)v38 = 100;
              if ( *(_QWORD *)(a1 + 328) )
              {
                *v37 = v38 + 20;
                *(_QWORD *)(v38 + 68) = *(_QWORD *)(a1 + 328);
              }
              else
              {
                *v37 = v41;
              }
              ++v37;
              v38 += 96;
              LODWORD(v36) = v36 + 32;
            }
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v58, &v54) );
          }
          if ( (*(_DWORD *)(a1 + 272) & 0x400000) != 0 && (v53 == 254 || PerfDomain == 1) )
          {
            *(_WORD *)(v6 + 11) = 257;
            *((_DWORD *)v6 + 12) = 1000;
          }
          if ( a2(v6, v55) < 0 )
          {
            v8 = (void *)Size;
          }
          else
          {
            ResetEnumerationContext((__int64 *)v58);
            while ( !(unsigned int)EnumerateNextDevice((__int64 *)v58, &v54) )
            {
              *(_QWORD *)(v54 + 216) = v12;
              v12 += 96;
            }
            v8 = 0LL;
            v9 = 0LL;
            v12 = 0LL;
          }
          v42 = 0;
          goto LABEL_52;
        }
      }
      else
      {
        *v22 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x1Eu,
          (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
      *(_QWORD *)(a1 + 272) &= 0xFFFFFFFFFCFFFFFFuLL;
      v42 = -1073741823;
    }
    else
    {
      v42 = -1073741670;
    }
    v8 = (void *)Size;
  }
  else
  {
LABEL_63:
    v42 = -1073741670;
  }
LABEL_52:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C418);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x72637250u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72637250u);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x72637250u);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x72637250u);
  return v42;
}
