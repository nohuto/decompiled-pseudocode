/*
 * XREFs of DpiSriovNotification @ 0x1C02CD710
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C8F20 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C00400A4 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C0050FFC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C0051124 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DpiFdoGetVirtualGpuType @ 0x1C02CA180 (DpiFdoGetVirtualGpuType.c)
 */

__int64 __fastcall DpiSriovNotification(_QWORD *a1, struct _IRP *a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF
  int v17; // [rsp+40h] [rbp-18h]

  v5 = a1[8];
  if ( bTracingEnabled )
    VgpuTrace(1, 0, (void *)v5, L"DpiSriovNotification", 0LL);
  if ( a4 < 4 || !a3 )
  {
    v13 = -1073741789;
    v14 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v14 + 24) = -1073741789LL;
    goto LABEL_15;
  }
  if ( DpiFdoGetVirtualGpuType((__int64)a2) )
  {
    v11 = 5456LL;
    v12 = 5476LL;
  }
  else
  {
    v11 = 5424LL;
    v12 = 5444LL;
  }
  if ( !*(_BYTE *)(v12 + v5) || *(_QWORD *)(v11 + v5) )
  {
    v13 = -1073741811;
    v14 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v14 + 24) = -1073741811LL;
LABEL_15:
    WdLogEvent5_WdError(v14);
    goto LABEL_16;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v16, a1, a2, 1);
  v13 = v17;
  if ( v17 >= 0 )
  {
    *(_QWORD *)(v11 + v5) = a2;
    a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IoCsqInsertIrp((PIO_CSQ)(v5 + 5328), a2, 0LL);
    v13 = 259;
    v17 = 259;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v16);
LABEL_16:
  if ( bTracingEnabled )
    VgpuTrace(0, v13, (void *)v5, L"DpiSriovNotification", 0LL);
  return v13;
}
