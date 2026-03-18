/*
 * XREFs of ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C0051AFC
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C7BB0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00500EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0050214 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiSetVirtualGpuVmBus @ 0x1C0230C64 (DxgkDdiSetVirtualGpuVmBus.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02C8E10 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSetPartitionVmbus(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3, unsigned int a4)
{
  __int64 v5; // rax
  void **DeviceExtension; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-18h]

  if ( a2->RequestorMode )
  {
    v5 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v5 + 24) = -1073741637LL;
    WdLogEvent5_WdError(v5);
    return 3221225506LL;
  }
  else
  {
    DeviceExtension = (void **)a1->DeviceExtension;
    if ( a4 >= 0x10 && a3 )
    {
      CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v10, a1, a2, 0);
      v8 = v11;
      if ( v11 >= 0 )
      {
        DpiFdoGetVirtualGpuType(a2);
        v8 = DxgkDdiSetVirtualGpuVmBus(DeviceExtension[487]);
        v11 = v8;
      }
      CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v10);
    }
    else
    {
      v8 = -1073741789;
      v9 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v9 + 24) = -1073741789LL;
      WdLogEvent5_WdError(v9);
    }
    return v8;
  }
}
