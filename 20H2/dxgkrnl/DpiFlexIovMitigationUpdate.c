/*
 * XREFs of DpiFlexIovMitigationUpdate @ 0x1C02CBAE0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C7BB0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F144 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00500EC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0050214 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C0230E7C (DxgkpCheckProcessForVirtualMachineManagementAccess.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02C8E10 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiFlexIovMitigationUpdate(
        _QWORD *a1,
        struct _IRP *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v7; // rsi
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v16; // rdi
  int v17; // eax
  _BYTE v18[16]; // [rsp+30h] [rbp-28h] BYREF
  int v19; // [rsp+40h] [rbp-18h]

  v7 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  if ( !a2->RequestorMode || DxgkpCheckProcessForVirtualMachineManagementAccess() )
  {
    if ( a4 >= 8 && a3 && a6 >= 0x2C && a5 )
    {
      if ( DpiFdoGetVirtualGpuType((__int64)a2) )
      {
        v14 = WdLogNewEntry5_WdWarning(a1, a2, v13);
        WdLogEvent5_WdWarning(v14);
        return 3221225659LL;
      }
      if ( *(_BYTE *)(v7 + 5444) && !*(_QWORD *)(v7 + 5432) )
      {
        CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v18, a1, a2, 1);
        v17 = v19;
        if ( v19 >= 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 5496), 0, 0);
          *(_QWORD *)(v7 + 5432) = a2;
          a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
          IoCsqInsertIrp((PIO_CSQ)(v7 + 5328), a2, 0LL);
          v17 = 259;
          v19 = 259;
        }
        v12 = v17;
        CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v18);
        goto LABEL_21;
      }
      v16 = -1073741811LL;
    }
    else
    {
      v16 = -1073741789LL;
    }
    v12 = v16;
    v11 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v11 + 24) = v16;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(a1, a2);
    v12 = -1073741790;
    *(_QWORD *)(v11 + 24) = -1073741790LL;
  }
  WdLogEvent5_WdError(v11);
LABEL_21:
  if ( bTracingEnabled )
    VgpuTrace(0, v12, (void *)v7, L"DpiFlexIovMitigationUpdate", 0LL);
  return v12;
}
