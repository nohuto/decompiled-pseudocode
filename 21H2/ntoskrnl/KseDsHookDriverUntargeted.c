/*
 * XREFs of KseDsHookDriverUntargeted @ 0x1405279B0
 * Callers:
 *     <none>
 * Callees:
 *     KsepDsEventDriverUnload @ 0x140528250 (KsepDsEventDriverUnload.c)
 */

__int64 __fastcall KseDsHookDriverUntargeted(__int64 a1)
{
  KsepDsEventDriverUnload(0LL, a1);
  return 0LL;
}
