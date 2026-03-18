/*
 * XREFs of MIDL_user_free @ 0x1800E9390
 * Callers:
 *     ??_V@YAXPEAX_K@Z @ 0x1801012A0 (--_V@YAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall MIDL_user_free(void *a1)
{
  DefaultHeap::Free(a1);
}
