/*
 * XREFs of DpiIovGetMmioRangeCount @ 0x1C02D3FF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z @ 0x1C00501AC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C00502D4 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     ?DpiGetVirtualGpuType@@YA?AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z @ 0x1C0058240 (-DpiGetVirtualGpuType@@YA-AW4DXG_VIRTUAL_GPU_TYPE@@PEAXPEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkDdiGetMmioRangeCount @ 0x1C02313EC (DxgkDdiGetMmioRangeCount.c)
 *     DxgkDdiQueryVirtualFunctionIndexByLuid @ 0x1C0231958 (DxgkDdiQueryVirtualFunctionIndexByLuid.c)
 */

__int64 __fastcall DpiIovGetMmioRangeCount(_DWORD *a1, struct _LUID a2, __int64 a3)
{
  int VirtualGpuType; // r14d
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // xmm1_8
  unsigned __int16 v9; // [rsp+20h] [rbp-60h] BYREF
  void *v10; // [rsp+28h] [rbp-58h] BYREF
  struct _LUID v11; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v12[8]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-40h]
  int MmioRangeCount; // [rsp+48h] [rbp-38h]
  unsigned int v15; // [rsp+50h] [rbp-30h] BYREF
  __int128 v16; // [rsp+54h] [rbp-2Ch]
  __int64 v17; // [rsp+64h] [rbp-1Ch]

  v11 = a2;
  v10 = 0LL;
  VirtualGpuType = DpiGetVirtualGpuType(a1, &v10);
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, v10, 0LL, 1);
  v5 = MmioRangeCount;
  if ( MmioRangeCount >= 0 )
  {
    v6 = v13;
    if ( *(_QWORD *)(v13 + 5312) )
    {
      v9 = 0;
      MmioRangeCount = DxgkDdiQueryVirtualFunctionIndexByLuid(*(_QWORD **)(v13 + 3896), VirtualGpuType, &v11, &v9);
      v5 = MmioRangeCount;
      if ( MmioRangeCount >= 0 )
      {
        v15 = v9;
        v16 = 0LL;
        v17 = 0LL;
        MmioRangeCount = DxgkDdiGetMmioRangeCount(*(_QWORD **)(v6 + 3896), VirtualGpuType, &v15);
        v5 = MmioRangeCount;
        if ( MmioRangeCount >= 0 )
        {
          v7 = v17;
          *(_OWORD *)a3 = v16;
          *(_QWORD *)(a3 + 16) = v7;
        }
      }
    }
    else
    {
      *(_OWORD *)a3 = 0LL;
      *(_QWORD *)(a3 + 16) = 0LL;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
  return v5;
}
