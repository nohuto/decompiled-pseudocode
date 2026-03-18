/*
 * XREFs of ?EnableIommuForSecureVgpu@ADAPTER_RENDER@@AEAAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C02C3C20
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EPEAX@Z @ 0x1C0356AD0 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@EP.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z @ 0x1C0025B34 (--0DXGAUTOPUSHLOCKFASTEXCLUSIVE@@QEAA@AEAVDXGPUSHLOCKFAST@@_N@Z.c)
 *     DxgpEnableIommuFromReference @ 0x1C02C3B38 (DxgpEnableIommuFromReference.c)
 */

__int64 __fastcall ADAPTER_RENDER::EnableIommuForSecureVgpu(ADAPTER_RENDER *this, struct SYSMM_ADAPTER *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  DXGAUTOPUSHLOCKFASTEXCLUSIVE::DXGAUTOPUSHLOCKFASTEXCLUSIVE(
    (DXGAUTOPUSHLOCKFASTEXCLUSIVE *)&v7,
    (ADAPTER_RENDER *)((char *)this + 1704));
  v4 = DxgpEnableIommuFromReference((__int64)a2, 4LL, (char *)this + 1696);
  if ( v8 )
  {
    v5 = v7;
    *(_QWORD *)(v7 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
  }
  return v4;
}
