/*
 * XREFs of DpiGetDeviceInstanceId @ 0x1C02C38D8
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C00517A0 (DpiMiracastInterfaceChange.c)
 *     ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C02D03D8 (-DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDeviceInstanceId(PDEVICE_OBJECT DeviceObject, ULONG_PTR *a2)
{
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  IRP *v8; // rdx
  __int64 v9; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  v3 = DeviceObject;
  IoStatusBlock = 0LL;
  if ( DeviceObject && a2 )
  {
    *a2 = 0LL;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v4 = IoBuildSynchronousFsdRequest(0x1Bu, v3, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v8 = v4;
    if ( !v4 )
    {
      v9 = WdLogNewEntry5_WdLowResource(v5, 0LL, v6, v7);
      LODWORD(v3) = -1073741670;
      *(_QWORD *)(v9 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v9);
      return (unsigned int)v3;
    }
    v4->IoStatus.Status = -1073741637;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 19;
    CurrentStackLocation[-1].Parameters.Read.Length = 3;
    LODWORD(v3) = IofCallDriver(v3, v8);
    if ( (_DWORD)v3 == 259 )
    {
      v14 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v3 = (struct _DEVICE_OBJECT *)v14;
      if ( v14 )
      {
        v15 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v15 + 24) = v3;
LABEL_9:
        WdLogEvent5_WdError(v15);
        return (unsigned int)v3;
      }
      LODWORD(v3) = IoStatusBlock.Status;
    }
    if ( (int)v3 >= 0 )
    {
      *a2 = IoStatusBlock.Information;
      return (unsigned int)v3;
    }
    v15 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v15 + 24) = (int)v3;
    goto LABEL_9;
  }
  return 3221225485LL;
}
