/*
 * XREFs of ?QueryInterface@CWICBitmapWrapper@@$4PPPPPPPM@BBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EE3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CVisualGroup::QueryInterface((CVisualGroup *)(a1 - *(int *)(a1 - 4) - 272), a2, a3);
}
