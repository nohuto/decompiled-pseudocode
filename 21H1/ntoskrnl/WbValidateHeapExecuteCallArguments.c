/*
 * XREFs of WbValidateHeapExecuteCallArguments @ 0x14065FAE8
 * Callers:
 *     WbHeapExecuteCall @ 0x14065F61C (WbHeapExecuteCall.c)
 * Callees:
 *     ?wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1402D44E0 (-wil_details_FeatureReporting_ReportUsageToServiceDirect@@YAHPEAUwil_details_FeatureReportingCac.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall WbValidateHeapExecuteCallArguments(
        __int64 a1,
        unsigned int a2,
        struct wil_details_FeatureReportingCache *a3)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rax
  _OWORD *v8; // rcx
  struct wil_details_FeatureReportingCache *v9; // rdx
  _OWORD *v10; // rcx
  wil_details_RecordedState v11; // eax
  struct wil_details_FeatureReportingCache *v12; // rcx
  int v13; // edx
  struct wil_details_FeatureReportingCache v14; // rbx
  int exchange; // ecx
  wil_details_RecordedState v16; // r9d
  unsigned int v17; // r14d
  int v18; // r10d
  __int64 v19; // r9
  int v20; // ecx
  __int16 v22; // cx
  unsigned __int64 v23; // rax
  _OWORD *v24; // rax
  _OWORD *v25; // rax
  wil_details_ReportedState v26; // ecx
  int v27; // [rsp+88h] [rbp+10h] BYREF

  v6 = 0;
  memset(a3, 0, 0x150uLL);
  if ( a2 < 0x18 || *(_DWORD *)a1 != 3 )
    return (unsigned int)-1073741811;
  v7 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v7 )
  {
    v22 = *(_WORD *)(v7 + 8);
    if ( v22 == 332 || v22 == 452 )
    {
      v23 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      if ( v23 )
      {
        if ( *(_WORD *)(v23 + 8) == 452 )
          *(_QWORD *)(a1 + 8) &= ~1uLL;
      }
    }
  }
  v8 = *(_OWORD **)(a1 + 8);
  if ( (unsigned __int64)(v8 + 15) > 0x7FFFFFFF0000LL || v8 + 15 < v8 )
  {
    MEMORY[0x7FFFFFFF0000] = 0;
    v8 = *(_OWORD **)(a1 + 8);
  }
  v9 = a3 + 2;
  *(_OWORD *)&a3[2].reported.exchange = *v8;
  *(_OWORD *)&a3[4].reported.exchange = v8[1];
  *(_OWORD *)&a3[6].reported.exchange = v8[2];
  *(_OWORD *)&a3[8].reported.exchange = v8[3];
  *(_OWORD *)&a3[10].reported.exchange = v8[4];
  *(_OWORD *)&a3[12].reported.exchange = v8[5];
  *(_OWORD *)&a3[14].reported.exchange = v8[6];
  *(_OWORD *)&a3[16].reported.exchange = v8[7];
  v10 = v8 + 8;
  *(_OWORD *)&a3[18].reported.exchange = *v10;
  *(_OWORD *)&a3[20].reported.exchange = v10[1];
  *(_OWORD *)&a3[22].reported.exchange = v10[2];
  *(_OWORD *)&a3[24].reported.exchange = v10[3];
  *(_OWORD *)&a3[26].reported.exchange = v10[4];
  *(_OWORD *)&a3[28].reported.exchange = v10[5];
  *(_OWORD *)&a3[30].reported.exchange = v10[6];
  a3[41] = *(struct wil_details_FeatureReportingCache *)(a1 + 8);
  v11.exchange = (unsigned int)a3[6].recorded;
  v12 = (struct wil_details_FeatureReportingCache *)(v11.exchange & 0xF);
  a3[1].reported.exchange = (unsigned int)v12;
  a3[1].recorded.exchange = LOBYTE(v11.exchange) >> 4;
  if ( (_DWORD)v12 == 1 )
  {
    v24 = *(_OWORD **)(a1 + 8);
    if ( (unsigned __int64)v24 + 248 > 0x7FFFFFFF0000LL || (_OWORD *)((char *)v24 + 248) < v24 )
    {
      MEMORY[0x7FFFFFFF0000] = 0;
      v24 = *(_OWORD **)(a1 + 8);
    }
    *(_OWORD *)&v9->reported.exchange = *v24;
    *(_OWORD *)&a3[4].reported.exchange = v24[1];
    *(_OWORD *)&a3[6].reported.exchange = v24[2];
    *(_OWORD *)&a3[8].reported.exchange = v24[3];
    *(_OWORD *)&a3[10].reported.exchange = v24[4];
    *(_OWORD *)&a3[12].reported.exchange = v24[5];
    *(_OWORD *)&a3[14].reported.exchange = v24[6];
    *(_OWORD *)&a3[16].reported.exchange = v24[7];
    v25 = v24 + 8;
    *(_OWORD *)&a3[18].reported.exchange = *v25;
    *(_OWORD *)&a3[20].reported.exchange = v25[1];
    *(_OWORD *)&a3[22].reported.exchange = v25[2];
    *(_OWORD *)&a3[24].reported.exchange = v25[3];
    *(_OWORD *)&a3[26].reported.exchange = v25[4];
    *(_OWORD *)&a3[28].reported.exchange = v25[5];
    *(_OWORD *)&a3[30].reported.exchange = v25[6];
    a3[32] = (struct wil_details_FeatureReportingCache)v25[7];
  }
  else
  {
    v27 = 3;
    if ( (unsigned int)wil_details_FeatureReporting_ReportUsageToServiceDirect(
                         v12,
                         v9,
                         0x7FFFFFFF0000LL,
                         0x80u,
                         wil_details_ServiceReportingKind_PotentialDeviceUsage)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(
        0xE67B5Au,
        (const struct FEATURE_LOGGED_TRAITS *)&Feature_PdttSupport_logged_traits,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v27,
        0LL,
        0,
        1uLL);
    }
    if ( a3[1].reported.exchange )
      return (unsigned int)-1073741811;
  }
  v13 = a3[9].reported.exchange & 0xFFFFFFF;
  if ( !v13 )
    return (unsigned int)-1073741811;
  v14 = (struct wil_details_FeatureReportingCache)(*(_QWORD *)&a3[41]
                                                 - (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 40LL) & 0xFFFFFFF));
  *a3 = v14;
  exchange = 4096;
  if ( a3[7].recorded.exchange > 0x1000 )
    exchange = a3[7].recorded.exchange;
  a3[40].recorded.exchange = exchange;
  v16.exchange = (unsigned int)a3[9].recorded;
  v17 = a3[8].recorded.exchange & 0xFFFFFFF;
  v18 = v16.exchange & 0xFFFFFFF;
  if ( (v16.exchange & 0xFFFFFFF) != 0 )
  {
    v20 = a3[10].reported.exchange & 0xFFFFFFF;
    a3[39].reported.exchange = v20 + 16;
    a3[38].recorded.exchange = v13;
    a3[38].reported.exchange = v17;
    a3[37] = (struct wil_details_FeatureReportingCache)(*(_QWORD *)&v14 + v17);
    v19 = v16.exchange & 0xFFFFFFF;
  }
  else
  {
    v19 = a3[8].recorded.exchange & 0xFFFFFFF;
    v18 = a3[8].recorded.exchange & 0xFFFFFFF;
    v20 = v13;
  }
  a3[36].reported.exchange = 16;
  a3[35].recorded.exchange = v20;
  a3[35].reported.exchange = v18;
  a3[34] = (struct wil_details_FeatureReportingCache)(*(_QWORD *)&v14 + v19);
  if ( a3[1].reported.exchange == 1 )
  {
    v26.exchange = (unsigned int)a3[32].reported;
    if ( (a3[9].recorded.exchange & 0xFFFFFFF) != 0 )
    {
      a3[36].recorded.exchange = a3[32].recorded.exchange;
      a3[39].recorded.exchange = v26.exchange;
    }
    else
    {
      a3[36].recorded.exchange = v26.exchange;
    }
  }
  a3[40].reported.exchange = a3[35].recorded.exchange + a3[38].recorded.exchange + 16;
  return v6;
}
