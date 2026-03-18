/*
 * XREFs of ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C021363C
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0174C70 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000D03C (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C01362BC (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 *     ??0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0266E10 (--0DISPLAY_CALLOUT_ENTRY@@QEAA@AEBU_LUID@@IW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z @ 0x1C026AB88 (-SubmitSingleEntry@DXGDISPLAYCALLOUTQUEUE@@QEAAJPEAUDISPLAY_CALLOUT_ENTRY@@_K@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  PVOID v13; // rax
  struct DISPLAY_CALLOUT_ENTRY *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct _LUID *v22; // rdx
  unsigned int v23; // ebx
  struct DISPLAY_CALLOUT_ENTRY **v24; // rcx
  DXGADAPTER *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v30; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v31[24]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v32[5]; // [rsp+60h] [rbp-49h] BYREF
  int v33; // [rsp+88h] [rbp-21h]
  int v34; // [rsp+8Ch] [rbp-1Dh]
  int v35; // [rsp+90h] [rbp-19h]
  int v36; // [rsp+94h] [rbp-15h]
  unsigned int v37; // [rsp+98h] [rbp-11h]
  unsigned int v38; // [rsp+9Ch] [rbp-Dh]
  __int64 v39; // [rsp+A0h] [rbp-9h]

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(a1 + 16)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    *(_QWORD *)(v12 + 24) = 8590LL;
    WdLogEvent5_WdAssertion(v12);
  }
  memset(&v32[1], 0, 24);
  v34 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (struct DXGFASTMUTEX *const)(a1 + 456), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
  v13 = operator new[](0x88uLL, 0x4B677844u, PagedPool);
  if ( v13 )
    v14 = (struct DISPLAY_CALLOUT_ENTRY *)DISPLAY_CALLOUT_ENTRY::DISPLAY_CALLOUT_ENTRY(
                                            v13,
                                            *(_QWORD *)(a1 + 16) + 316LL,
                                            a2,
                                            a3,
                                            a4,
                                            a5,
                                            a6);
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(a1 + 16);
  v16 = *(_QWORD *)(v15 + 316);
  v33 = 0;
  v32[4] = 0LL;
  v32[0] = 0x480000001ELL;
  v35 = 46;
  v37 = a2;
  v38 = a3;
  v39 = v16;
  *(_OWORD *)&v32[1] = 0LL;
  if ( v14 )
  {
    v30 = 0LL;
    v32[3] = 0LL;
    v36 = v16;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v15, (struct _LUID *)v15, 0LL, &v30);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, v30);
    if ( *(_BYTE *)(a1 + 496) )
    {
      v24 = *(struct DISPLAY_CALLOUT_ENTRY ***)(a1 + 512);
      if ( *v24 != (struct DISPLAY_CALLOUT_ENTRY *)(a1 + 504) )
        __fastfail(3u);
      *(_QWORD *)v14 = a1 + 504;
      *((_QWORD *)v14 + 1) = v24;
      *v24 = v14;
      *(_QWORD *)(a1 + 512) = v14;
      v23 = 0;
    }
    else
    {
      v25 = *(DXGADAPTER **)(a1 + 16);
      v30 = 0LL;
      DXGADAPTER::IsAdapterSessionized(v25, v22, 0LL, &v30);
      Global = DXGGLOBAL::GetGlobal(v27, v26);
      v23 = DXGDISPLAYCALLOUTQUEUE::SubmitSingleEntry((struct DXGGLOBAL *)((char *)Global + 1704), v14, v30);
    }
  }
  else
  {
    v36 = -1073741801;
    v30 = 0LL;
    v32[3] = 0LL;
    DXGADAPTER::IsAdapterSessionized((DXGADAPTER *)v15, (struct _LUID *)v15, 0LL, &v30);
    DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v32, v30);
    v21 = WdLogNewEntry5_WdLowResource(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 8615LL;
    WdLogEvent5_WdLowResource(v21);
    v23 = -1073741801;
  }
  if ( v31[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31, (__int64)v22);
  return v23;
}
