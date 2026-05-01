/*
 * XREFs of sub_180037490 @ 0x180037490
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 */

__int64 __fastcall sub_180037490(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 2);
  if ( !v1 )
    j_free((void *)a1);
  return v1;
}
