/*
 * XREFs of ?GetVendorAndDevice@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_GETVENDORANDDEVICE@@@Z @ 0x1C0235810
 * Callers:
 *     <none>
 * Callees:
 *     ?IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0007C88 (-IsComputeOnlyAdapter@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::GetVendorAndDevice(
        DXGADAPTER **this,
        struct _DXGKARG_GETVENDORANDDEVICE *a2)
{
  bool IsComputeOnlyAdapter; // al
  __int64 v3; // rdx

  a2->VendorId = 5140;
  IsComputeOnlyAdapter = DXGADAPTER::IsComputeOnlyAdapter(this[2]);
  *(_WORD *)(v3 + 6) = IsComputeOnlyAdapter ? 138 : 142;
  return 0LL;
}
