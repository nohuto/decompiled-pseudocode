/*
 * XREFs of sub_180039240 @ 0x180039240
 * Callers:
 *     sub_18003A8C6 @ 0x18003A8C6 (sub_18003A8C6.c)
 *     sub_18003A951 @ 0x18003A951 (sub_18003A951.c)
 *     sub_18003A9DC @ 0x18003A9DC (sub_18003A9DC.c)
 *     sub_18003AAE0 @ 0x18003AAE0 (sub_18003AAE0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180039240(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, 0LL, DelayLoadFailureHook, a2, 0);
}
