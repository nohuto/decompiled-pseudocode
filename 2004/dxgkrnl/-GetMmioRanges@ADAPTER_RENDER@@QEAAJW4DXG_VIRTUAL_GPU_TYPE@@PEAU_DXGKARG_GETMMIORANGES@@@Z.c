/*
 * XREFs of ?GetMmioRanges@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x1C022FFB0
 * Callers:
 *     DxgkDdiGetMmioRanges @ 0x1C023145C (DxgkDdiGetMmioRanges.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006D68 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z @ 0x1C003F24C (-GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER@@QEAAPEAUDXGK_VIRTUAL_GPU@@I@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetMmioRanges(__int64 a1, int a2, unsigned int *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  DXGVIRTUALGPUMANAGER *v8; // rcx
  struct DXGK_VIRTUAL_GPU *VirtualGpuByIndex; // rax
  unsigned int v10; // ebx
  __int64 v11; // rax
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+30h] [rbp-18h]

  if ( a2 == 1 )
    v6 = *(_QWORD *)(a1 + 1640);
  else
    v6 = *(_QWORD *)(a1 + 1632);
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(v6 + 40), 0);
  DXGPUSHLOCK::AcquireShared(v14);
  v7 = *a3;
  v15 = 1;
  if ( a2 == 1 )
    v8 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1640);
  else
    v8 = *(DXGVIRTUALGPUMANAGER **)(a1 + 1632);
  if ( v8 && (VirtualGpuByIndex = DXGVIRTUALGPUMANAGER::GetVirtualGpuByIndex(v8, v7)) != 0LL )
  {
    v10 = (*(__int64 (__fastcall **)(struct DXGK_VIRTUAL_GPU *, unsigned int *))(*(_QWORD *)VirtualGpuByIndex + 168LL))(
            VirtualGpuByIndex,
            a3);
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v11 + 24) = *a3;
    WdLogEvent5_WdError(v11);
    v10 = -1073741811;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v10;
}
