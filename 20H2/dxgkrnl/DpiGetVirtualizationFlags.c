/*
 * XREFs of DpiGetVirtualizationFlags @ 0x1C02CBCB8
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C02C7BB0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F144 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 *     DpiIovGetVirtualizationFlags @ 0x1C02D3250 (DpiIovGetVirtualizationFlags.c)
 */

__int64 __fastcall DpiGetVirtualizationFlags(
        void *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        _QWORD *a7)
{
  int v9; // ebp
  int VirtualizationFlags; // ebx
  __int64 v12; // rax

  v9 = a2;
  if ( bTracingEnabled )
    VgpuTrace(1, 0, a1, L"DpiGetVirtualizationFlags", 0LL);
  if ( a4 >= 8 && a3 && a6 >= 4 && a5 )
  {
    VirtualizationFlags = DpiIovGetVirtualizationFlags(*((_QWORD *)a1 + 8) + (v9 != 0 ? 5472LL : 5440LL), *a3);
    if ( VirtualizationFlags >= 0 )
      *a7 = 4LL;
  }
  else
  {
    VirtualizationFlags = -1073741789;
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = -1073741789LL;
    WdLogEvent5_WdError(v12);
  }
  if ( bTracingEnabled )
    VgpuTrace(0, VirtualizationFlags, a1, L"DpiGetVirtualizationFlags", 0LL);
  return (unsigned int)VirtualizationFlags;
}
