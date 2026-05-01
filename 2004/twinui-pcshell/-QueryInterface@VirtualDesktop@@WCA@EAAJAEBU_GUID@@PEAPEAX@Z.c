/*
 * XREFs of ?QueryInterface@VirtualDesktop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800FC720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualDesktop::QueryInterface(__int64 a1, struct _GUID *a2, void **a3)
{
  return VirtualDesktop::QueryInterface((VirtualDesktop *)(a1 - 32), a2, a3);
}
