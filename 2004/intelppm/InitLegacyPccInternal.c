/*
 * XREFs of InitLegacyPccInternal @ 0x1C000DF4C
 * Callers:
 *     RegisterKernelLegacyPcc @ 0x1C000E3A0 (RegisterKernelLegacyPcc.c)
 *     RegisterHvLegacyPccCounters @ 0x1C0030670 (RegisterHvLegacyPccCounters.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     DisplayKernelPerfStates @ 0x1C0003A54 (DisplayKernelPerfStates.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     InitCommonPerfStateContext @ 0x1C0025004 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0025284 (GetPerfDomain.c)
 */

__int64 __fastcall InitLegacyPccInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _DWORD *v2; // r13
  _QWORD *v3; // rbx
  int v5; // edi
  int PerfDomain; // r15d
  SIZE_T v7; // r14
  PVOID PoolWithTag; // rax
  void *v9; // rsi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  PVOID v12; // rax
  char *v13; // r9
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // r14
  int v21; // r11d
  __int64 v22; // rcx
  unsigned int *v23; // rdx
  __int64 v24; // r11
  int v25; // r9d
  _QWORD *v26; // r11
  _QWORD *v27; // rax
  _OWORD v29[2]; // [rsp+30h] [rbp-20h] BYREF
  char v31; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+58h] BYREF

  v32 = 0LL;
  v2 = (_DWORD *)qword_1C001C900;
  v3 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( qword_1C001C980 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
      WdfDriverGlobals,
      qword_1C001C418,
      0LL);
    PerfDomain = GetPerfDomain(a1, v29, &v31);
    v7 = (unsigned int)(56 * PerfDomain);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72637250u);
    v9 = PoolWithTag;
    if ( PoolWithTag
      && (memset(PoolWithTag, 0, v7),
          v10 = (32 * PerfDomain + 439) & 0xFFFFFFF8,
          v11 = (v10 + 31) & 0xFFFFFFF8,
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, v11 + 8 * PerfDomain, 0x72637250u),
          (v3 = v12) != 0LL) )
    {
      memset(v12, 0, v11 + 8 * PerfDomain);
      if ( *(_BYTE *)(a1 + 1122) )
        v3[48] = PepParkPreference;
      if ( (*(_QWORD *)(a1 + 272) & 0x10000000000LL) != 0 )
      {
        v3[49] = PepParkMask;
        v3[50] = PepPerfCheckComplete;
        v3[9] = *(_QWORD *)(a1 + 1104);
      }
      *(_DWORD *)v3 = 62;
      v3[52] = v3 + 54;
      *((_DWORD *)v3 + 4) = PerfDomain;
      *((_DWORD *)v3 + 9) = 1;
      *((_DWORD *)v3 + 1) = 65537;
      *((_BYTE *)v3 + 52) = 0;
      v13 = (char *)v3 + v10;
      v3[51] = v13;
      v3[53] = (char *)v3 + v11;
      v3[42] = PerfControlLegacyPcc;
      v3[43] = PerfControlLegacyPcc;
      v3[41] = PerfSelectionLegacyPcc;
      v3[45] = PerfInitiateLegacyPcc;
      v3[47] = PerfCommitLegacyPcc;
      v14 = v2[7];
      *((_DWORD *)v3 + 5) = v14;
      *((_DWORD *)v3 + 6) = 100;
      v15 = 100 * v2[9] / v14;
      *((_DWORD *)v3 + 7) = v15;
      v17 = 100 * v2[8] % v14;
      v16 = 100 * v2[8] / v14;
      if ( !v15 )
        v15 = 1;
      *((_DWORD *)v3 + 7) = v15;
      if ( !v16 )
        v16 = 1;
      *((_DWORD *)v3 + 8) = v16;
      v3[7] = (unsigned int)v2[9];
      v3[8] = (unsigned int)v2[7];
      v18 = *(_QWORD *)(a1 + 336);
      if ( v18 )
        v3[32] = v18;
      v3[34] = *(_QWORD *)(a1 + 344);
      v3[35] = *(_QWORD *)(a1 + 352);
      if ( dword_1C001C8FC )
      {
        v17 = 0x989680 % ((unsigned int)dword_1C001C8FC >> 1);
        *((_DWORD *)v3 + 10) = 0x989680 / ((unsigned int)dword_1C001C8FC >> 1);
      }
      *((_QWORD *)v13 + 1) = 100LL;
      *(_QWORD *)v13 = LegacyPccInstantaneousFrequency;
      *((_WORD *)v13 + 8) = 0;
      *((_DWORD *)v3 + 9) = 1;
      DisplayKernelPerfStates((__int64)v3, v17, v15);
      v19 = v3[52];
      v20 = (_QWORD *)v3[53];
      ResetEnumerationContext((__int64 *)v29);
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v29, &v32) )
      {
        InitCommonPerfStateContext(v32, v21, v19, 100, 0);
        v23 = *(unsigned int **)(v22 + 568);
        *(_QWORD *)v24 = v22;
        *(_DWORD *)(v24 + 48) = v25;
        *(_QWORD *)(v24 + 32) = (char *)v2 + *v23;
        *(_QWORD *)(v24 + 40) = (char *)v2 + v23[1];
        *v20++ = v24;
        v19 += 32LL;
      }
      v5 = a2(v3, v11 + 8 * PerfDomain);
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          qword_1C001C978);
        ResetEnumerationContext((__int64 *)v29);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v29, &v32) )
        {
          *(_QWORD *)(v32 + 232) = v26 - 1;
          v27 = (_QWORD *)qword_1C001C478;
          if ( *(__int64 **)qword_1C001C478 != &qword_1C001C470 )
            __fastfail(3u);
          *v26 = &qword_1C001C470;
          v26[1] = v27;
          *v27 = v26;
          qword_1C001C478 = (__int64)v26;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
          WdfDriverGlobals,
          qword_1C001C978);
        v9 = 0LL;
        v5 = 0;
      }
    }
    else
    {
      v5 = -1073741670;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
      WdfDriverGlobals,
      qword_1C001C418);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x72637250u);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
