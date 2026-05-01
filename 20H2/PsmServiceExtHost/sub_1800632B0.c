/*
 * XREFs of sub_1800632B0 @ 0x1800632B0
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 */

__int64 __fastcall sub_1800632B0(volatile signed __int32 *a1)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement(a1 + 6);
  if ( !v1 && a1 )
  {
    *(_QWORD *)a1 = off_180093E70;
    j_free((void *)a1);
  }
  return v1;
}
