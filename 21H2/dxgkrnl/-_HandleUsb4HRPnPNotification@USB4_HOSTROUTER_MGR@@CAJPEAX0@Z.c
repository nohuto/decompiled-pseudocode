/*
 * XREFs of ?_HandleUsb4HRPnPNotification@USB4_HOSTROUTER_MGR@@CAJPEAX0@Z @ 0x1C03B6940
 * Callers:
 *     <none>
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03B5D90 (-AddHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z @ 0x1C03B6054 (-RemoveHostRouter@USB4_HOSTROUTER_MGR@@AEAAJPEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall USB4_HOSTROUTER_MGR::_HandleUsb4HRPnPNotification(
        char *NotificationStructure,
        USB4_HOSTROUTER_MGR *Context,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+28h] [rbp-20h]
  char v17; // [rsp+30h] [rbp-18h]

  v15 = -1;
  v16 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 7062;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)NotificationStructure, &EventProfilerEnter, a3, 7062);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 7062);
  WdLogNewEntry5_WdTrace(v6, v5);
  if ( !NotificationStructure || !Context )
  {
    WdLogSingleEntry0(2LL);
    goto LABEL_21;
  }
  v7 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_USB4_VIRTUAL_POWER_PDO.Data4;
  if ( v7 )
  {
    WdLogSingleEntry1(2LL, NotificationStructure + 20);
LABEL_21:
    v11 = -1073741811;
    goto LABEL_22;
  }
  v8 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( v8 )
  {
    v10 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
    if ( v10 )
      goto LABEL_21;
    v9 = USB4_HOSTROUTER_MGR::RemoveHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
  }
  else
  {
    v9 = USB4_HOSTROUTER_MGR::AddHostRouter(Context, *((const struct _UNICODE_STRING **)NotificationStructure + 5));
  }
  v11 = v9;
LABEL_22:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  }
  return v11;
}
