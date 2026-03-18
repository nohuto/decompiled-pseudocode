/*
 * XREFs of DpiSriovAttach @ 0x1C02CCEF0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C8B70 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F294 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C00502D4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C023202C (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02C9DD0 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovAttach(_QWORD *a1, struct _IRP *a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned int v9; // edi
  int v10; // ebp
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  int v13; // [rsp+40h] [rbp-18h]

  v3 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v3, L"DpiSriovAttach", 0LL);
  v7 = DpiFdoGetVirtualGpuType((__int64)a2) ? 0x20 : 0;
  if ( a2->RequestorMode && !DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    v8 = WdLogNewEntry5_WdError(v6, v5);
    v9 = -1073741790;
    *(_QWORD *)(v8 + 24) = -1073741790LL;
LABEL_14:
    WdLogEvent5_WdError(v8);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(v7 + v3 + 5444) || *(_QWORD *)(v7 + v3 + 5416) )
  {
    v9 = -1073741811;
    v8 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    goto LABEL_14;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, a1, a2, 1);
  v10 = v13;
  if ( v13 >= 0 )
  {
    if ( *(_DWORD *)(v3 + 236) == 2 )
    {
      *(_BYTE *)(v7 + v3 + 5444) = 1;
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(v3 + 152));
    }
    else
    {
      *(_QWORD *)(v7 + v3 + 5416) = a2;
      a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp((PIO_CSQ)(v3 + 5328), a2, 0LL);
      v10 = 259;
      v13 = 259;
    }
  }
  v9 = v10;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
LABEL_15:
  if ( bTracingEnabled )
    VgpuTrace(0, v9, (void *)v3, L"DpiSriovAttach", 0LL);
  return v9;
}
