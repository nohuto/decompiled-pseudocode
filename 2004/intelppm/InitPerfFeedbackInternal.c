/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C00351F4
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C0030AD0 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C0036C50 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0003718 (WPP_RECORDER_SF_.c)
 *     EnumerateNextDevice @ 0x1C00039EC (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0003A38 (ResetEnumerationContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00047C0 (memset.c)
 *     GetRegistryDwordValueNoDefault @ 0x1C0020924 (GetRegistryDwordValueNoDefault.c)
 *     InitCommonPerfStateContext @ 0x1C0025004 (InitCommonPerfStateContext.c)
 *     GetPerfDomain @ 0x1C0025284 (GetPerfDomain.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(char *, _QWORD))
{
  char *v3; // rbx
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int PerfDomain; // r12d
  char *PoolWithTag; // rax
  char *v7; // rsi
  int v8; // edi
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  char *v11; // rax
  _DWORD *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdi
  _QWORD *v16; // r14
  char *v17; // r11
  __int64 v18; // r11
  __int64 v19; // r10
  _OWORD v21[2]; // [rsp+30h] [rbp-20h] BYREF
  int v23; // [rsp+A0h] [rbp+50h] BYREF
  _DWORD *v24; // [rsp+A8h] [rbp+58h] BYREF

  v24 = 0LL;
  v3 = 0LL;
  v4 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  v23 = 0;
  memset(v21, 0, sizeof(v21));
  v4(WdfDriverGlobals, qword_1C001C418, 0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v21, &v23);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(80 * PerfDomain), 0x72637250u);
  v7 = PoolWithTag;
  if ( !PoolWithTag
    || (memset(PoolWithTag, 0, (unsigned int)(80 * PerfDomain)),
        v9 = (32 * PerfDomain + 439) & 0xFFFFFFF8,
        v10 = (v9 + 31) & 0xFFFFFFF8,
        v11 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10 + 8 * PerfDomain, 0x72637250u),
        (v3 = v11) == 0LL) )
  {
    v8 = -1073741670;
    goto LABEL_24;
  }
  memset(v11, 0, v10 + 8 * PerfDomain);
  if ( *(_BYTE *)(a1 + 1122) )
    *((_QWORD *)v3 + 48) = PepParkPreference;
  if ( (*(_QWORD *)(a1 + 272) & 0x10000000000LL) != 0 )
  {
    *((_QWORD *)v3 + 49) = PepParkMask;
    *((_QWORD *)v3 + 50) = PepPerfCheckComplete;
    *((_QWORD *)v3 + 9) = *(_QWORD *)(a1 + 1104);
  }
  *(_DWORD *)v3 = 62;
  *((_QWORD *)v3 + 52) = v3 + 432;
  v12 = v3 + 20;
  *((_DWORD *)v3 + 5) = 0;
  *((_DWORD *)v3 + 4) = PerfDomain;
  *((_QWORD *)v3 + 51) = &v3[v9];
  *((_DWORD *)v3 + 9) = 1;
  *((_QWORD *)v3 + 53) = &v3[v10];
  *((_WORD *)v3 + 2) = v23;
  *((_QWORD *)v3 + 42) = AcpiCStateIdleCancel;
  *((_QWORD *)v3 + 43) = AcpiCStateIdleCancel;
  *((_QWORD *)v3 + 41) = PerfSelectionFeedback;
  *((_WORD *)v3 + 3) = 1;
  v3[52] = 1;
  *((_DWORD *)v3 + 6) = 100;
  *((_DWORD *)v3 + 7) = 100;
  *((_DWORD *)v3 + 8) = 100;
  *((_QWORD *)v3 + 7) = 100LL;
  *((_QWORD *)v3 + 8) = 100LL;
  if ( (int)GetRegistryDwordValueNoDefault(
              (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
              (__int64)L"~MHz",
              (__int64)(v3 + 20)) < 0 )
  {
    *v12 = 0;
LABEL_11:
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0x20u,
        (__int64)&WPP_20b386df1d3035ae741743b1c4714e82_Traceguids);
    *(_QWORD *)(a1 + 272) &= ~0x4000000uLL;
    v8 = -1073741823;
    goto LABEL_24;
  }
  if ( !*((_DWORD *)v3 + 5) )
    goto LABEL_11;
  v13 = *(_QWORD *)(a1 + 336);
  if ( v13 )
    *((_QWORD *)v3 + 32) = v13;
  v14 = *((_QWORD *)v3 + 51);
  *(_DWORD *)(v14 + 12) = 0;
  *(_QWORD *)v14 = PerfReadWrappingCounter;
  *(_DWORD *)(v14 + 8) = 100;
  *(_WORD *)(v14 + 16) = 257;
  v15 = *((_QWORD *)v3 + 52);
  v16 = (_QWORD *)*((_QWORD *)v3 + 53);
  ResetEnumerationContext((__int64 *)v21);
  if ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) )
  {
    v17 = v7 + 56;
    do
    {
      InitCommonPerfStateContext(v24, (_QWORD *)v17 - 7, v15, 100, 0);
      *(_DWORD *)(v18 + 16) = *v12;
      v15 += 32LL;
      *(_QWORD *)v18 = *(_QWORD *)(v19 + 328);
      *v16++ = v18 - 48;
    }
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) );
  }
  v8 = a2(v3, v10 + 8 * PerfDomain);
  if ( v8 >= 0 )
  {
    ResetEnumerationContext((__int64 *)v21);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) )
    {
      *((_QWORD *)v24 + 28) = v7;
      v7 += 80;
    }
    v7 = 0LL;
    v8 = 0;
  }
LABEL_24:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001C418);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72637250u);
  return (unsigned int)v8;
}
