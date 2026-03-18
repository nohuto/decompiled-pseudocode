/*
 * XREFs of CmpGetComponentHashAtIndex @ 0x1406220D0
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetComponentHashAtIndex(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 160) + 4LL * (a2 - 8));
  else
    return *(unsigned int *)(a1 + 4LL * a2);
}
