/*
 * XREFs of sub_180134484 @ 0x180134484
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180134484(__int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 12) )
  {
    result = *a1;
    *(_QWORD *)(*a1 + 8) = *((unsigned int *)a1 + 2);
  }
  return result;
}
