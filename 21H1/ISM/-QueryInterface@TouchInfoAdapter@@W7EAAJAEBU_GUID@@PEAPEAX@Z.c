/*
 * XREFs of ?QueryInterface@TouchInfoAdapter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004D960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall TouchInfoAdapter::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return TouchInfoAdapter::QueryInterface((TouchInfoAdapter *)(a1 - 8), a2, a3);
}
