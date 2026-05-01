/*
 * XREFs of sub_180006EBC @ 0x180006EBC
 * Callers:
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 *     sub_180080BE8 @ 0x180080BE8 (sub_180080BE8.c)
 * Callees:
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 */

void __fastcall sub_180006EBC(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 528);
  if ( v2 )
  {
    if ( (unsigned int)TpSetTimerEx(v2, 0LL, 0LL, 0LL) )
      sub_1800274E0(a1);
    TpReleaseTimer(*(_QWORD *)(a1 + 528));
    *(_QWORD *)(a1 + 528) = 0LL;
    *(_QWORD *)(a1 + 536) = 0LL;
  }
}
