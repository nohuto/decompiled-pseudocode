/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EFED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - 256), a2, a3);
}
