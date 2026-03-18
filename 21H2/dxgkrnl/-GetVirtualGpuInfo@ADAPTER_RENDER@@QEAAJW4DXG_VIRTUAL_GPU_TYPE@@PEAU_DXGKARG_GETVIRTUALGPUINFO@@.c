/*
 * XREFs of ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C0357F90
 * Callers:
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0359AE4 (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuInfo(__int64 a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // ebx
  _BYTE v15[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v16; // [rsp+28h] [rbp-20h]
  int v17; // [rsp+30h] [rbp-18h]

  if ( a2 == 1 )
    v9 = *(_QWORD *)(a1 + 1736);
  else
    v9 = *(_QWORD *)(a1 + 1728);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(v9 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v10 = *a3;
  v17 = 1;
  if ( a2 == 1 )
    v11 = *(_QWORD *)(a1 + 1736);
  else
    v11 = *(_QWORD *)(a1 + 1728);
  if ( v11
    && (unsigned int)v10 < *(_DWORD *)(v11 + 12)
    && *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v10)
    && (_mm_lfence(), (v12 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 8 * v10)) != 0) )
  {
    *a4 = *(_QWORD *)(v12 + 28);
    *a5 = *(_OWORD *)(v12 + 36);
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 120LL))(v12, a3);
  }
  else
  {
    WdLogSingleEntry1(3LL, *a3);
    v13 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v13;
}
