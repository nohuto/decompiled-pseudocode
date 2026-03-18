/*
 * XREFs of ?DxgkIsPortraitFirstTarget@@YAEU_LUID@@I@Z @ 0x1C02F0AB0
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0FB0 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000D514 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000F718 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C01A442C (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 */

char __fastcall DxgkIsPortraitFirstTarget(struct _LUID a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rdi
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v6; // rax
  DXGADAPTER *v7; // rsi
  char v8; // di
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h]
  char v21; // [rsp+68h] [rbp-98h]
  _BYTE v22[144]; // [rsp+70h] [rbp-90h] BYREF

  v19 = -1;
  v3 = a2;
  v20 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 2180;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(*(_QWORD *)&a1, &EventProfilerEnter, a3, 2180);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 2180);
  Global = DXGGLOBAL_GetGlobal();
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1, &v18);
  v7 = v6;
  if ( v6 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v6, 0LL);
    v9 = (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
    DXGADAPTER::ReleaseReference(v7);
    if ( (int)v9 >= 0 )
    {
      v11 = *((_QWORD *)v7 + 349);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 104);
        if ( v12 )
        {
          EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64 *)&v18, *(_QWORD *)(v11 + 104));
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v12 + 120) + 72LL));
          v13 = *(_QWORD *)(v12 + 120);
          TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v13, v3);
          if ( TargetById )
          {
            v8 = *((_BYTE *)TargetById + 405);
          }
          else
          {
            WdLogSingleEntry2(2LL, v3, v7);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Fail to get VideoPresentTarget 0x%I64x from adapter 0x%I64x!",
              v3,
              (__int64)v7,
              0LL,
              0LL,
              0LL);
            v8 = 0;
          }
          if ( v13 )
            ReferenceCounted::Release((ReferenceCounted *)(v13 + 64));
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v18 + 40));
          goto LABEL_21;
        }
        WdLogSingleEntry1(2LL, v7);
        v10 = L"Fail to get VidPnMgr on adapter 0x%I64x!";
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        v10 = L"Try to check portrait first target on a non-display adapter 0x%I64x!";
      }
      v9 = 0LL;
    }
    else
    {
      WdLogSingleEntry2(2LL, v7, v9);
      v10 = L"Failed to acquir the adapter core access lock on adapter 0x%I64x (Status = 0x%I64x)!";
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, (__int64)v7, v9, 0LL, 0LL, 0LL);
    v8 = 0;
LABEL_21:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
    goto LABEL_22;
  }
  WdLogSingleEntry1(2LL, 2753LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Cannot find the caller specified adapter in global adapter list!",
    2753LL,
    0LL,
    0LL,
    0LL,
    0LL);
  v8 = 0;
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  }
  return v8;
}
