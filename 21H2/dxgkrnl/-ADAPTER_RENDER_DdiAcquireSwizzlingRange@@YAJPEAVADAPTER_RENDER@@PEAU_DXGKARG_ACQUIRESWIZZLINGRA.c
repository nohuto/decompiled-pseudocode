/*
 * XREFs of ?ADAPTER_RENDER_DdiAcquireSwizzlingRange@@YAJPEAVADAPTER_RENDER@@PEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C00197A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z @ 0x1C0162FEC (-DdiAcquireSwizzlingRange@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_ACQUIRESWIZZLINGRANGE@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER_DdiAcquireSwizzlingRange(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_ACQUIRESWIZZLINGRANGE *a2)
{
  return ADAPTER_RENDER::DdiAcquireSwizzlingRange(a1, a2);
}
