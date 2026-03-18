/*
 * XREFs of KseSkipDriverUnloadHookDriverUntargeted @ 0x140522EE0
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x140522FFC (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadHookDriverUntargeted(__int64 a1)
{
  KsepSkipDriverUnloadEventDriverUnload(0LL, a1);
  return 0LL;
}
