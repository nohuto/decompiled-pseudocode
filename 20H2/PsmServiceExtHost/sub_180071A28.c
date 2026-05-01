/*
 * XREFs of sub_180071A28 @ 0x180071A28
 * Callers:
 *     sub_180021CC4 @ 0x180021CC4 (sub_180021CC4.c)
 *     sub_18007149C @ 0x18007149C (sub_18007149C.c)
 *     sub_180072FA0 @ 0x180072FA0 (sub_180072FA0.c)
 *     sub_180074BB0 @ 0x180074BB0 (sub_180074BB0.c)
 *     sub_1800759A8 @ 0x1800759A8 (sub_1800759A8.c)
 *     sub_1800760A8 @ 0x1800760A8 (sub_1800760A8.c)
 *     sub_180076240 @ 0x180076240 (sub_180076240.c)
 * Callees:
 *     sub_18006B240 @ 0x18006B240 (sub_18006B240.c)
 *     sub_18007156C @ 0x18007156C (sub_18007156C.c)
 */

void __fastcall sub_180071A28(
        __int64 a1,
        int a2,
        __int64 a3,
        __int16 a4,
        unsigned __int8 (__fastcall *a5)(__int64, __int64),
        __int64 a6)
{
  if ( ((unsigned __int16)a4 & *(_WORD *)(a3 + 44)) != a4 )
  {
    if ( !*(_WORD *)(a3 + 44) )
      sub_18007156C(a1, a3, a5, a6);
    if ( *(_DWORD *)(a3 + 36) )
      sub_18006B240(a3, a4, a2);
  }
}
