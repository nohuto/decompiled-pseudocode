/*
 * XREFs of InitPerfFeedbackInternal @ 0x1C002D3C4
 * Callers:
 *     RegisterHvPerfFeedbackCounters @ 0x1C00223A0 (RegisterHvPerfFeedbackCounters.c)
 *     RegisterKernelPerfFeedback @ 0x1C002FBD0 (RegisterKernelPerfFeedback.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001860 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001BD4 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000ED80 (memset.c)
 *     GetRegistryDwordValue @ 0x1C001EFC0 (GetRegistryDwordValue.c)
 *     GetPerfDomain @ 0x1C0028D38 (GetPerfDomain.c)
 *     InitCommonPerfStateContext @ 0x1C002BE18 (InitCommonPerfStateContext.c)
 */

__int64 __fastcall InitPerfFeedbackInternal(__int64 a1, __int64 (__fastcall *a2)(_QWORD *, _QWORD))
{
  _QWORD *v3; // rbx
  void (__fastcall *v4)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  int PerfDomain; // r13d
  SIZE_T v6; // r14
  char *PoolWithTag; // rax
  char *v8; // rsi
  int v9; // edi
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  PVOID v12; // rax
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
  v4(WdfDriverGlobals, qword_1C00133F8, 0LL);
  PerfDomain = GetPerfDomain(a1, (__int64)v21, &v23);
  v6 = (unsigned int)(80 * PerfDomain);
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x72637250u);
  v8 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, v6),
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
    *((_DWORD *)v3 + 5) = 0;
    v3[51] = (char *)v3 + v10;
    *((_DWORD *)v3 + 4) = PerfDomain;
    v3[53] = (char *)v3 + v11;
    *((_WORD *)v3 + 2) = v23;
    v3[42] = AcpiCStateIdleCancel;
    v3[43] = AcpiCStateIdleCancel;
    v3[41] = PerfSelectionFeedback;
    *((_DWORD *)v3 + 9) = 1;
    *((_WORD *)v3 + 3) = 1;
    *((_BYTE *)v3 + 52) = 1;
    *((_DWORD *)v3 + 6) = 100;
    *((_DWORD *)v3 + 7) = 100;
    *((_DWORD *)v3 + 8) = 100;
    v3[7] = 100LL;
    v3[8] = 100LL;
    GetRegistryDwordValue(
      (__int64)L"\\Registry\\Machine\\Hardware\\Description\\System\\CentralProcessor\\0",
      (__int64)L"~MHz",
      (_DWORD *)v3 + 5);
    if ( *((_DWORD *)v3 + 5) )
    {
      v13 = *(_QWORD *)(a1 + 336);
      if ( v13 )
        v3[32] = v13;
      v14 = v3[51];
      *(_DWORD *)(v14 + 12) = 0;
      *(_QWORD *)v14 = PerfReadWrappingCounter;
      *(_DWORD *)(v14 + 8) = 100;
      *(_WORD *)(v14 + 16) = 257;
      v15 = v3[52];
      v16 = (_QWORD *)v3[53];
      ResetEnumerationContext((__int64 *)v21);
      if ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) )
      {
        v17 = v8 + 56;
        do
        {
          InitCommonPerfStateContext(v24, (_QWORD *)v17 - 7, v15, 100, 0);
          *(_DWORD *)(v18 + 16) = *((_DWORD *)v3 + 5);
          v15 += 32LL;
          *(_QWORD *)v18 = *(_QWORD *)(v19 + 328);
          *v16++ = v18 - 48;
        }
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) );
      }
      v9 = a2(v3, v11 + 8 * PerfDomain);
      if ( v9 >= 0 )
      {
        ResetEnumerationContext((__int64 *)v21);
        while ( !(unsigned int)EnumerateNextDevice((__int64 *)v21, &v24) )
        {
          *((_QWORD *)v24 + 28) = v8;
          v8 += 80;
        }
        v8 = 0LL;
        v9 = 0;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          3u,
          0x20u,
          (__int64)&WPP_cab160ae24df3aaa3ae0e3c64f54f2b2_Traceguids);
      *(_QWORD *)(a1 + 272) &= ~0x4000000uLL;
      v9 = -1073741823;
    }
  }
  else
  {
    v9 = -1073741670;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00133F8);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x72637250u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x72637250u);
  return (unsigned int)v9;
}
