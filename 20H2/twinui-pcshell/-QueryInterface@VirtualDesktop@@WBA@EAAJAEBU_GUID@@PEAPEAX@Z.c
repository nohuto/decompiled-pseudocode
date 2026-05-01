/*
 * XREFs of ?QueryInterface@VirtualDesktop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FDCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::QueryInterface(__int64 a1, struct _GUID *a2, void **a3)
{
  return VirtualDesktop::QueryInterface((VirtualDesktop *)(a1 - 16), a2, a3);
}
