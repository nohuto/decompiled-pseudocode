/*
 * XREFs of sub_180010430 @ 0x180010430
 * Callers:
 *     <none>
 * Callees:
 *     j_free @ 0x1800448FC (j_free.c)
 */

__int64 __fastcall sub_180010430(volatile signed __int32 *a1)
{
  int v1; // ebx

  v1 = _InterlockedDecrement(a1 + 6);
  if ( v1 < 0 )
    __int2c();
  if ( !v1 && a1 )
  {
    *(_QWORD *)a1 = off_180093E00;
    j_free((void *)a1);
  }
  return (unsigned int)v1;
}
