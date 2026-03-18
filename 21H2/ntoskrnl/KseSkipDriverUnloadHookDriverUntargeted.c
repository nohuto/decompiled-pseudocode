/*
 * XREFs of KseSkipDriverUnloadHookDriverUntargeted @ 0x14057F2D0
 * Callers:
 *     <none>
 * Callees:
 *     KsepSkipDriverUnloadEventDriverUnload @ 0x14057F3EC (KsepSkipDriverUnloadEventDriverUnload.c)
 */

__int64 __fastcall KseSkipDriverUnloadHookDriverUntargeted(__int64 a1)
{
  KsepSkipDriverUnloadEventDriverUnload(0LL, a1);
  return 0LL;
}
