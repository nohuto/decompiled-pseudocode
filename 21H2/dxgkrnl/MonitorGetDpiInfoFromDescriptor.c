/*
 * XREFs of MonitorGetDpiInfoFromDescriptor @ 0x1C01454BC
 * Callers:
 *     DxgkGetMonitorInternalInfo @ 0x1C011B670 (DxgkGetMonitorInternalInfo.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0145660 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004448 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C000BCCC (-EDID_V1_GetPreferredMode@@YAJPEBEPEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z @ 0x1C000BD78 (-EDID_V1_GetPhysicalSize@@YAJKPEBEPEAI1@Z.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C006052C (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z @ 0x1C0060600 (-DisplayID_GetPreferredMode@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_PREFERRED_MODE_INFO@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C012A2C0 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall MonitorGetDpiInfoFromDescriptor(
        DXGADAPTER *this,
        __int64 a2,
        struct DISPLAY_PREFERRED_MODE_INFO *a3,
        unsigned int *a4,
        unsigned int *a5,
        bool *a6,
        _BYTE *a7)
{
  __int64 v8; // rdi
  __int64 v11; // rax
  unsigned int *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  struct _FAST_MUTEX *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct DXGMONITOR *v19; // rbx
  unsigned __int8 *EdidBaseBlockPtr; // rax
  __int64 v21; // rcx
  unsigned __int8 *v22; // rdi
  int PreferredMode; // eax
  int PhysicalSize; // edi
  unsigned int v25; // edx
  unsigned int v26; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  struct DXGMONITOR *v35; // [rsp+50h] [rbp+8h] BYREF

  v8 = (unsigned int)a2;
  v11 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = this;
  if ( !this )
    return 3221225485LL;
  if ( (_DWORD)v8 == -1 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  if ( !a4 )
    return 3221225485LL;
  v12 = a5;
  if ( !a5 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
  {
    v28 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v28);
  }
  v15 = *((_QWORD *)this + 337);
  if ( !v15 )
  {
    v29 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v29);
    v15 = *((_QWORD *)this + 337);
  }
  v16 = *(struct _FAST_MUTEX **)(v15 + 96);
  if ( !v16 )
  {
    v30 = WdLogNewEntry5_WdError(0LL, v13);
    *(_QWORD *)(v30 + 24) = this;
    WdLogEvent5_WdError(v30);
    return 3221225485LL;
  }
  v35 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v16, (unsigned int)v8, 0, &v35) < 0 )
    return 3221225485LL;
  v19 = v35;
  if ( !v35 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v18, v17);
    WdLogEvent5_WdAssertion(v31);
    v34 = WdLogNewEntry5_WdAssertion(v33, v32);
    WdLogEvent5_WdAssertion(v34);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 296), 1u);
  EdidBaseBlockPtr = (unsigned __int8 *)DXGMONITOR::_GetEdidBaseBlockPtr(v19);
  v21 = (__int64)a7;
  v22 = EdidBaseBlockPtr;
  if ( EdidBaseBlockPtr )
  {
    if ( a7 )
      *a7 = 1;
    EDID_V1_GetPhysicalSize(v21, EdidBaseBlockPtr, a4, v12);
    PreferredMode = EDID_V1_GetPreferredMode(v22, a3);
  }
  else
  {
    if ( a7 )
      *a7 = *((_BYTE *)v19 + 184);
    if ( !*((_BYTE *)v19 + 184) )
    {
      PhysicalSize = -1073741637;
      goto LABEL_19;
    }
    PhysicalSize = DisplayID_GetPhysicalSize((struct DXGMONITOR *)((char *)v19 + 168), a4, v12);
    if ( PhysicalSize < 0 )
      goto LABEL_19;
    PreferredMode = DisplayID_GetPreferredMode((struct DXGMONITOR *)((char *)v19 + 168), a3);
  }
  PhysicalSize = PreferredMode;
LABEL_19:
  *a6 = PhysicalSize >= 0;
  v25 = *((_DWORD *)v19 + 189);
  v26 = *((_DWORD *)v19 + 190);
  if ( v25 )
  {
    if ( v26 )
    {
      *a4 = v25;
      PhysicalSize = 0;
      *v12 = v26;
    }
  }
  ExReleaseResourceLite((PERESOURCE)((char *)v19 + 296));
  KeLeaveCriticalRegion();
  return (unsigned int)PhysicalSize;
}
