/*
 * XREFs of ?QueryInterface@DWMCursor@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall DWMCursor::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return DWMCursor::QueryInterface((DWMCursor *)(a1 - 16), a2, a3);
}
