/*
 * XREFs of ValidatePerfDomainSymmetry @ 0x1C002AEB0
 * Callers:
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 * Callees:
 *     EnumerateNextDevice @ 0x1C0001860 (EnumerateNextDevice.c)
 *     ResetEnumerationContext @ 0x1C0001BD4 (ResetEnumerationContext.c)
 *     WPP_RECORDER_SF_ddii @ 0x1C0009E48 (WPP_RECORDER_SF_ddii.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     GetPerfDomain @ 0x1C0028D38 (GetPerfDomain.c)
 *     ValidateCpcSymmetry @ 0x1C002A680 (ValidateCpcSymmetry.c)
 *     ValidatePctPtcSymmetry @ 0x1C002ABD8 (ValidatePctPtcSymmetry.c)
 *     ValidatePepPerformanceSymmetry @ 0x1C002AC9C (ValidatePepPerformanceSymmetry.c)
 *     ValidatePssSymmetry @ 0x1C002B4A4 (ValidatePssSymmetry.c)
 *     ValidateTssSymmetry @ 0x1C002B5E8 (ValidateTssSymmetry.c)
 */

__int64 __fastcall ValidatePerfDomainSymmetry(__int64 a1)
{
  unsigned int v2; // esi
  void (__fastcall *v3)(PWDF_DRIVER_GLOBALS, __int64, _QWORD); // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  int v10; // [rsp+20h] [rbp-50h]
  _OWORD v11[2]; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v13; // [rsp+B0h] [rbp+40h] BYREF

  v2 = 0;
  v13 = 0LL;
  v3 = *(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504);
  memset(v11, 0, sizeof(v11));
  v3(WdfDriverGlobals, qword_1C00133F8, 0LL);
  if ( (unsigned int)GetPerfDomain(a1, (__int64)v11, &v12) != 1 )
  {
    v4 = 0LL;
    ResetEnumerationContext((__int64 *)v11);
    while ( !(unsigned int)EnumerateNextDevice((__int64 *)v11, &v13) )
    {
      v5 = v13;
      if ( v13 != a1 )
      {
        v6 = *(_QWORD *)(v13 + 272);
        v7 = *(_QWORD *)(a1 + 272);
        if ( (v7 & 0x10FF300000LL) != (v6 & 0x10FF300000LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_ddii(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v6,
              v7 & 0x10FF300000LL,
              (__int64)&WPP_RECORDER_INITIALIZED,
              v10);
            v7 = *(_QWORD *)(a1 + 272);
            v6 = *(_QWORD *)(v5 + 272);
          }
          v4 |= (v6 ^ v7) & 0x10FF300000LL;
        }
        if ( (v7 & 0x70000000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      a1 + 408,
                      *(_DWORD *)(v5 + 52),
                      a1 + 408,
                      (__int64)"_PCT") < 0 )
            v4 |= 0x70000000uLL;
          if ( (*(_DWORD *)(a1 + 272) & 0x40000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 440),
                      *(_DWORD *)(v5 + 52),
                      *(_QWORD *)(v5 + 440),
                      (__int64)"XPSS") < 0 )
          {
            v4 |= 0x40000000uLL;
          }
          if ( (*(_DWORD *)(a1 + 272) & 0x30000000) != 0
            && (int)ValidatePssSymmetry(
                      *(_DWORD *)(a1 + 52),
                      *(_QWORD *)(a1 + 432),
                      *(_DWORD *)(v5 + 52),
                      *(_QWORD *)(v5 + 432),
                      (__int64)"_PSS") < 0 )
          {
            v4 |= 0x30000000uLL;
          }
        }
        if ( (*(_DWORD *)(a1 + 272) & 0x3300000) != 0 )
        {
          if ( (int)ValidatePctPtcSymmetry(
                      *(_DWORD *)(a1 + 52),
                      a1 + 464,
                      *(_DWORD *)(v5 + 52),
                      a1 + 464,
                      (__int64)"_PTC") < 0 )
            v4 |= 0x3300000uLL;
          if ( (int)ValidateTssSymmetry(
                      *(unsigned int *)(a1 + 52),
                      *(_QWORD *)(a1 + 488),
                      *(unsigned int *)(v5 + 52),
                      *(_QWORD *)(v5 + 488)) < 0 )
            v4 |= 0x3300000uLL;
        }
        if ( (*(_DWORD *)(a1 + 272) & 0x8000000) != 0
          && (int)ValidateCpcSymmetry(
                    *(_DWORD *)(a1 + 52),
                    *(_QWORD *)(a1 + 576),
                    *(_DWORD *)(v5 + 52),
                    *(_QWORD *)(v5 + 576)) < 0 )
        {
          v4 |= 0x8000000uLL;
        }
        if ( (*(_QWORD *)(a1 + 272) & 0x1000000000LL) != 0
          && (int)ValidatePepPerformanceSymmetry(
                    *(_DWORD *)(a1 + 52),
                    *(_QWORD *)(a1 + 1176),
                    *(unsigned int *)(v5 + 52),
                    *(_QWORD *)(v5 + 1176)) < 0 )
        {
          v4 |= 0x1000000000uLL;
        }
      }
    }
    ResetEnumerationContext((__int64 *)v11);
    if ( !(unsigned int)EnumerateNextDevice((__int64 *)v11, &v13) )
    {
      v8 = ~v4;
      do
        *(_QWORD *)(v13 + 272) &= v8;
      while ( !(unsigned int)EnumerateNextDevice((__int64 *)v11, &v13) );
    }
    v2 = (*(_QWORD *)(a1 + 272) & 0x10FF300000LL) == 0 ? 0xC0000001 : 0;
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C00133F8);
  return v2;
}
