/*
 * XREFs of KseSkipDriverUnloadCallbackHookDriverUnload @ 0x140522EA0
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140522FFC (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadCallbackHookDriverUnload(__int64 a1)
{
  return KsepSkipDriverUnloadEventDriverUnload(a1, *(_QWORD *)(a1 + 24));
}
