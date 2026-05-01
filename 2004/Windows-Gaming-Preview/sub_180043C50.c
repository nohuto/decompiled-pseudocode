/*
 * XREFs of sub_180043C50 @ 0x180043C50
 * Callers:
 *     sub_180045556 @ 0x180045556 (sub_180045556.c)
 *     sub_1800455E1 @ 0x1800455E1 (sub_1800455E1.c)
 *     sub_18004567E @ 0x18004567E (sub_18004567E.c)
 *     sub_180045760 @ 0x180045760 (sub_180045760.c)
 *     sub_1800457EB @ 0x1800457EB (sub_1800457EB.c)
 *     sub_180045888 @ 0x180045888 (sub_180045888.c)
 *     sub_180045949 @ 0x180045949 (sub_180045949.c)
 *     sub_1800459E8 @ 0x1800459E8 (sub_1800459E8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180043C50(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, 0LL, DelayLoadFailureHook, a2, 0);
}
