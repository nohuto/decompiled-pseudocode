/*
 * XREFs of ?GetVirtualGpuInfo@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETVIRTUALGPUINFO@@PEAU_LUID@@PEAU_GUID@@@Z @ 0x1C022F134
 * Callers:
 *     DxgkDdiGetVirtualGpuInfo @ 0x1C0230450 (DxgkDdiGetVirtualGpuInfo.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C003F0FC (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetVirtualGpuInfo(__int64 a1, int a2, unsigned int *a3, _QWORD *a4, _OWORD *a5)
{
  __int64 v9; // rdx
  struct DXGK_VIRTUAL_GPU *v10; // r8
  __int64 v11; // rdx
  DXGVIRTUALGPUMANAGER *v12; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  unsigned int v14; // ebx
  __int64 v15; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+30h] [rbp-18h]

  if ( a2 == 1 )
    v9 = *(_QWORD *)(a1 + 1640);
  else
    v9 = *(_QWORD *)(a1 + 1632);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)(v9 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v18);
  v11 = *a3;
  v19 = 1;
  if ( a2 == 1 )
    v12 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1640);
  else
    v12 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
  if ( v12
    && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v12, v11), (v10 = VirtualGpuByIndex) != 0LL) )
  {
    *a4 = *(_QWORD *)((char *)VirtualGpuByIndex + 28);
    *a5 = *(_OWORD *)((char *)VirtualGpuByIndex + 36);
    v14 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 120LL))(
            VirtualGpuByIndex,
            a3);
  }
  else
  {
    v15 = WdLogNewEntry5_WdWarning(v12, v11, v10);
    *(_QWORD *)(v15 + 24) = *a3;
    WdLogEvent5_WdWarning(v15);
    v14 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
  return v14;
}
