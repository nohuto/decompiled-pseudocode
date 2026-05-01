/*
 * XREFs of sub_180073640 @ 0x180073640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800043D0 @ 0x1800043D0 (sub_1800043D0.c)
 */

__int64 __fastcall sub_180073640(__int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int i; // ebx

  result = 0LL;
  for ( i = 0; i < a2; a3 += 6 )
  {
    result = sub_1800043D0(*(_QWORD *)(a1 + 24), *a3, *(_DWORD *)(a1 + 8));
    if ( (int)result < 0 )
      break;
    ++i;
  }
  return result;
}
