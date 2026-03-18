/*
 * XREFs of MiPrefetchNormally @ 0x140266AD0
 * Callers:
 *     MiPrefetchPagesViable @ 0x140387140 (MiPrefetchPagesViable.c)
 *     MiPfPrepareReadList @ 0x1407BD420 (MiPfPrepareReadList.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 */

_BOOL8 __fastcall MiPrefetchNormally(_QWORD *a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r9
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned __int64 v6; // r11

  if ( a1[2120] < a2 + 159 )
    return 0LL;
  v3 = a1[2157];
  v4 = a1[2187] - v3;
  if ( v3 > a1[2187] )
    v4 = 0LL;
  if ( v4 < a2 + 4223 )
    return 0LL;
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(a1, a3);
  return AvailablePagesBelowPriority >= v6;
}
