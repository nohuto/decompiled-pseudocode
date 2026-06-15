/*
 * XREFs of sub_180023370 @ 0x180023370
 * Callers:
 *     sub_180008FF0 @ 0x180008FF0 (sub_180008FF0.c)
 *     sub_18002A978 @ 0x18002A978 (sub_18002A978.c)
 *     sub_18006DA9C @ 0x18006DA9C (sub_18006DA9C.c)
 *     sub_18006DE20 @ 0x18006DE20 (sub_18006DE20.c)
 *     sub_18006DF10 @ 0x18006DF10 (sub_18006DF10.c)
 *     sub_18006EBE4 @ 0x18006EBE4 (sub_18006EBE4.c)
 *     sub_18006F0C0 @ 0x18006F0C0 (sub_18006F0C0.c)
 *     sub_18006F250 @ 0x18006F250 (sub_18006F250.c)
 *     sub_180071410 @ 0x180071410 (sub_180071410.c)
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall sub_180023370(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  EnterCriticalSection(a1);
  *a2 = a1;
  return a2;
}
