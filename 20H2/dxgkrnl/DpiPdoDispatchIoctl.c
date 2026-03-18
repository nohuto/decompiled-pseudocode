/*
 * XREFs of DpiPdoDispatchIoctl @ 0x1C013AB90
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C011DFA0 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C011E21C (DpiAcquireCoreSyncAccessSafe.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C013AD00 (-_DispatchIoctrls@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x1C02CF034 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 */

__int64 __fastcall DpiPdoDispatchIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v5; // rsi
  struct _IRP *MasterIrp; // r12
  unsigned int LowPart; // ebp
  struct _DEVICE_OBJECT *v8; // rcx
  unsigned int Length; // r13d
  PVOID DeviceExtension; // rdi
  int MonitorInstance; // ebx
  __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  struct _FAST_MUTEX *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int Options; // [rsp+80h] [rbp+8h]
  unsigned __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  struct DXGMONITOR *v27; // [rsp+90h] [rbp+18h] BYREF

  v26 = 0LL;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v5 = *(_QWORD *)(a1 + 64);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  v8 = *(struct _DEVICE_OBJECT **)(v5 + 32);
  Length = CurrentStackLocation->Parameters.Read.Length;
  Options = CurrentStackLocation->Parameters.Create.Options;
  DeviceExtension = v8->DeviceExtension;
  if ( LowPart <= 0x230C18 )
  {
    if ( LowPart != 2296856
      && LowPart != 2296832
      && LowPart != 2296836
      && LowPart != 2296840
      && LowPart != 2296844
      && LowPart != 2296848
      && LowPart != 2296852 )
    {
      goto LABEL_28;
    }
    MonitorInstance = DpiBrightnessHandleIoctls(
                        v8,
                        *(_DWORD *)(v5 + 504),
                        LowPart,
                        CurrentStackLocation->Parameters.Create.Options,
                        MasterIrp,
                        Length,
                        MasterIrp,
                        &v26);
  }
  else
  {
    if ( LowPart != 2297856
      && LowPart != 2297860
      && LowPart != 2297864
      && LowPart != 2298880
      && LowPart != 2298884
      && LowPart != 2298888 )
    {
LABEL_28:
      MonitorInstance = -1073741637;
      goto LABEL_15;
    }
    MonitorInstance = DpiAcquireCoreSyncAccessSafe(a1, 0);
    if ( MonitorInstance >= 0 )
    {
      v12 = *((_QWORD *)DeviceExtension + 487);
      if ( v12 )
      {
        v13 = *(unsigned int *)(v5 + 504);
        if ( (_DWORD)v13 != -1 )
        {
          if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)DeviceExtension + 487)) )
          {
            v21 = WdLogNewEntry5_WdAssertion(v15, v14);
            WdLogEvent5_WdAssertion(v21);
          }
          v16 = *(_QWORD *)(v12 + 2696);
          if ( !v16 )
          {
            v22 = WdLogNewEntry5_WdAssertion(v15, v14);
            WdLogEvent5_WdAssertion(v22);
            v16 = *(_QWORD *)(v12 + 2696);
          }
          v17 = *(struct _FAST_MUTEX **)(v16 + 96);
          if ( v17 )
          {
            v27 = 0LL;
            MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v17, (unsigned int)v13, 1, &v27);
            if ( MonitorInstance < 0 )
            {
              v24 = WdLogNewEntry5_WdDmmEvent(v19, v18);
              *(_QWORD *)(v24 + 24) = v13;
              *(_QWORD *)(v24 + 32) = v17;
              WdLogEvent5_WdDmmEvent(v24);
            }
            else
            {
              MonitorInstance = DXGMONITOR::_DispatchIoctrls(v27, LowPart, Options, MasterIrp, Length, MasterIrp, &v26);
            }
            goto LABEL_14;
          }
          v23 = WdLogNewEntry5_WdError(v15, v14);
          *(_QWORD *)(v23 + 24) = v12;
          WdLogEvent5_WdError(v23);
        }
      }
      MonitorInstance = -1073741811;
LABEL_14:
      DpiReleaseCoreSyncAccessSafe(a1, 0);
    }
  }
LABEL_15:
  a2->IoStatus.Information = v26;
  a2->IoStatus.Status = MonitorInstance;
  IofCompleteRequest(a2, 1);
  return (unsigned int)MonitorInstance;
}
