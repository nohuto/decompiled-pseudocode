/*
 * XREFs of ?DxgkCddAdapterDereference@@YAXQEAX_K@Z @ 0x1C015A810
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkCddAdapterDereference(DXGADAPTER *a1)
{
  DXGADAPTER::ReleaseReferenceNoTracking(a1);
}
