/*
 * XREFs of MonitorGetMonitorDeviceInterfaceName @ 0x1C013853C
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0137590 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z @ 0x1C016D260 (-Initialize@CTTMDEVICE@@AEAAJPEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IK@Z.c)
 * Callees:
 *     ?RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z @ 0x1C0018B04 (-RtlStringCchCopyUnicodeString@@YAJPEAG_KPEBU_UNICODE_STRING@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorDeviceInterfaceName(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DXGMONITOR *v15; // rbx
  struct _ERESOURCE *v16; // rsi
  int v17; // ebx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct DXGMONITOR *v25; // [rsp+30h] [rbp+8h] BYREF

  v5 = (unsigned int)a3;
  v6 = (unsigned int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v6;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v6 == -1 || !a4 )
    return 3221225485LL;
  v11 = *(_QWORD *)(a1 + 2672);
  if ( !v11 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v19);
    v11 = *(_QWORD *)(a1 + 2672);
  }
  v12 = *(struct _FAST_MUTEX **)(v11 + 96);
  if ( !v12 )
  {
    v20 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v20 + 24) = a1;
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  v25 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v6, 1, &v25) < 0 )
    return 3221225664LL;
  v15 = v25;
  if ( !v25 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v21);
    v24 = WdLogNewEntry5_WdAssertion(v23, v22);
    WdLogEvent5_WdAssertion(v24);
  }
  KeEnterCriticalRegion();
  v16 = (struct _ERESOURCE *)((char *)v15 + 296);
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v15 + 296), 1u);
  v17 = RtlStringCchCopyUnicodeString((char *)a4, v5, (const struct _UNICODE_STRING *)((char *)v15 + 88));
  if ( v17 >= 0 )
    *(_WORD *)(a4 + 2) = 92;
  ExReleaseResourceLite(v16);
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}
