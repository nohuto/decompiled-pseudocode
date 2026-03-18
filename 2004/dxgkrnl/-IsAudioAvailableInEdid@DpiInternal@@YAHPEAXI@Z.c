/*
 * XREFs of ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C02A8F3C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C02AFA38 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z @ 0x1C005EC08 (-EDID_V1_CeaExt_IsAudioSupported@@YAEPEBE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0166EE8 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 */

__int64 __fastcall DpiInternal::IsAudioAvailableInEdid(DpiInternal *this, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned __int8 v6; // bl
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  struct _FAST_MUTEX *v16; // rcx
  __int64 v17; // rax
  int MonitorInstance; // edi
  struct DXGMONITOR *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int i; // edi
  union _EDID_V1_BLOCK *EdidBlockPtr; // rax
  _QWORD *v27; // rax
  struct DXGMONITOR *v28; // [rsp+30h] [rbp+8h] BYREF

  v4 = (unsigned int)a2;
  v6 = 0;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v10 = (unsigned int)v4;
  *(_QWORD *)(v7 + 24) = v4;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v4 == -1 )
  {
    MonitorInstance = -1073741811;
    goto LABEL_21;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)this + 337);
  if ( !v14 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v15);
    v14 = *((_QWORD *)this + 337);
  }
  v16 = *(struct _FAST_MUTEX **)(v14 + 96);
  if ( v16 )
  {
    v28 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v16, (unsigned int)v4, 1, &v28);
    if ( MonitorInstance >= 0 )
    {
      v19 = v28;
      if ( !v28 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v9, v8);
        WdLogEvent5_WdAssertion(v20);
        v23 = WdLogNewEntry5_WdAssertion(v22, v21);
        WdLogEvent5_WdAssertion(v23);
      }
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 296), 1u);
      for ( i = 1; i < 0x37; ++i )
      {
        EdidBlockPtr = (union _EDID_V1_BLOCK *)DXGMONITOR::_GetEdidBlockPtr(v19, i);
        if ( !EdidBlockPtr )
          break;
        if ( EDID_V1_CeaExt_IsAudioSupported(EdidBlockPtr) )
        {
          v6 = 1;
          break;
        }
      }
      ExReleaseResourceLite((PERESOURCE)((char *)v19 + 296));
      KeLeaveCriticalRegion();
      return v6;
    }
LABEL_21:
    if ( MonitorInstance < 0 )
      goto LABEL_22;
    return v6;
  }
  v17 = WdLogNewEntry5_WdError(0LL, v11);
  *(_QWORD *)(v17 + 24) = this;
  WdLogEvent5_WdError(v17);
  MonitorInstance = -1073741811;
LABEL_22:
  v27 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
  v27[3] = MonitorInstance;
  v27[4] = this;
  v27[5] = v10;
  WdLogEvent5_WdError(v27);
  return 0LL;
}
