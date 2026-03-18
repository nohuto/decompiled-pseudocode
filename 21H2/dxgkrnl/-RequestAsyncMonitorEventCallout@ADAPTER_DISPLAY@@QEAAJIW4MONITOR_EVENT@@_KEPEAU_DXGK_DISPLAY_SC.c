/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02C2338
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01F3C90 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C0019DE4 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01B32DC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0308E84 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C030CFCC (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v10; // r9
  __int64 v11; // rax
  struct DISPLAY_CALLOUT_ENTRY *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // ebx
  struct DISPLAY_CALLOUT_ENTRY **v16; // rcx
  DXGADAPTER *v17; // rcx
  struct _LUID *v18; // rdx
  __int64 v19; // r11
  int v21; // [rsp+28h] [rbp-A1h]
  unsigned __int64 v22; // [rsp+50h] [rbp-79h] BYREF
  _BYTE v23[24]; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v24[5]; // [rsp+70h] [rbp-59h] BYREF
  int v25; // [rsp+98h] [rbp-31h]
  int v26; // [rsp+9Ch] [rbp-2Dh]
  int v27; // [rsp+A0h] [rbp-29h]
  int v28; // [rsp+A4h] [rbp-25h]
  unsigned int v29; // [rsp+A8h] [rbp-21h]
  unsigned int v30; // [rsp+ACh] [rbp-1Dh]
  __int64 v31; // [rsp+B0h] [rbp-19h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    WdLogSingleEntry1(1LL, 8756LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceSharedOwner()", 8756LL, 0LL, 0LL, 0LL, 0LL);
  }
  memset(&v24[1], 0, 24);
  v26 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)(a1 + 536), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  v11 = operator new[](0x88uLL, 0x4B677844u, 256LL, v10);
  if ( v11 )
  {
    LOBYTE(v21) = a5;
    v12 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v11,
                                            *(_QWORD *)(a1 + 16) + 404LL,
                                            a2,
                                            a3,
                                            a4,
                                            v21,
                                            a6);
  }
  else
  {
    v12 = 0LL;
  }
  v13 = *(_QWORD *)(a1 + 16);
  v22 = 0LL;
  v14 = *(_QWORD *)(v13 + 404);
  v31 = v14;
  v24[0] = 0x480000001ELL;
  v25 = 0;
  v24[4] = 0LL;
  v27 = 46;
  v29 = a2;
  v30 = a3;
  *(_OWORD *)&v24[1] = 0LL;
  if ( v12 )
  {
    v24[3] = 0LL;
    v28 = v14;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v13, (struct _LUID *)v13, 0LL, &v22);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24, v22);
    if ( *(_BYTE *)(a1 + 584) )
    {
      v16 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 600);
      if ( *v16 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 592) )
        __fastfail(3u);
      *(_QWORD *)v12 = a1 + 592;
      *((_QWORD *)v12 + 1) = v16;
      *v16 = v12;
      *(_QWORD *)(a1 + 600) = v12;
      v15 = 0;
    }
    else
    {
      DXGGLOBAL_GetGlobal();
      v17 = *(DXGADAPTER **)(a1 + 16);
      v22 = 0LL;
      DXGADAPTER::IsAdapterSessionized(v17, v18, 0LL, &v22);
      v15 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((DXGDISPLAYCALLOUTQUEUE *)(v19 + 1872), v12, v22);
    }
  }
  else
  {
    v28 = -1073741801;
    v24[3] = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v13, (struct _LUID *)v13, 0LL, &v22);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v24, v22);
    WdLogSingleEntry1(6LL, 8781LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate memory for monitor event callout.",
      8781LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v15 = -1073741801;
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return v15;
}
