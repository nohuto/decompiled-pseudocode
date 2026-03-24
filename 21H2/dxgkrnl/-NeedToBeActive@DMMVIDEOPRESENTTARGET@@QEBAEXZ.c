/*
 * XREFs of ?NeedToBeActive@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C01427B4
 * Callers:
 *     ?BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAPEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@3@Z @ 0x1C0141570 (-BuildSetTimingsPathInfoFromClientVidPn@VIDPN_MGR@@AEBAJKQEAVDMMVIDPN@@PEAK1PEAPEAU_DXGK_SET_TIM.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009A04 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C012E270 (-IsTargetForceable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

bool __fastcall DMMVIDEOPRESENTTARGET::NeedToBeActive(DMMVIDEOPRESENTTARGET *this, __int64 a2)
{
  char v3; // bl
  struct HDXGMONITOR__ *v4; // rcx
  int MonitorFromHandle; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct DXGMONITOR *v9; // rdi
  struct _ERESOURCE *v10; // rsi
  int v11; // eax
  bool v12; // di
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  struct DXGMONITOR *v19; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_DWORD *)this + 30) != 1 )
    return 0;
  v3 = 0;
  if ( *(_BYTE *)(*((_QWORD *)this + 67) + 172LL) )
    return 0;
  if ( !*((_BYTE *)this + 415) )
    return DMMVIDEOPRESENTTARGET::IsTargetForceable(this, a2);
  v4 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  if ( !v4 )
    return 1;
  v19 = 0LL;
  MonitorFromHandle = MONITOR_MGR::_GetMonitorFromHandle(v4, &v19);
  v8 = MonitorFromHandle;
  if ( MonitorFromHandle < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v18 + 24) = *((unsigned int *)this + 6);
    *(_QWORD *)(v18 + 32) = v8;
    WdLogEvent5_WdError(v18);
    v12 = 0;
  }
  else
  {
    v9 = v19;
    if ( !v19 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v14);
      v17 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v17);
    }
    v10 = (struct _ERESOURCE *)((char *)v9 + 296);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v9 + 296), 1u);
    v11 = *((_DWORD *)v9 + 10);
    v12 = (v11 & 0x20) != 0 || (v11 & 2) != 0 && (v11 & 4) != 0;
    ExReleaseResourceLite(v10);
    KeLeaveCriticalRegion();
  }
  if ( !v12 )
    return 1;
  return v3;
}
