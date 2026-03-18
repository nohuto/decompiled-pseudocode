/*
 * XREFs of ?QueryMitigatedRangeCount@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C0360A60
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z @ 0x1C035BF60 (-DdiQueryMitigatedRangeCount@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_QUERYMITIGATEDRANGECOUNT@@@Z.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_GPUP::QueryMitigatedRangeCount(
        ADAPTER_RENDER **this,
        struct _DXGKARG_QUERYMITIGATEDRANGECOUNT *a2,
        __int64 a3)
{
  ADAPTER_RENDER::DdiQueryMitigatedRangeCount(this[1], a2, a3);
  return 0LL;
}
