/*
 * XREFs of sub_180065DC0 @ 0x180065DC0
 * Callers:
 *     sub_180065CE0 @ 0x180065CE0 (sub_180065CE0.c)
 *     sub_1800DD6D0 @ 0x1800DD6D0 (sub_1800DD6D0.c)
 *     sub_1800DD7A0 @ 0x1800DD7A0 (sub_1800DD7A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180065DC0(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 i; // r9
  __int64 result; // rax

  for ( i = a2; a2; --a2 )
  {
    if ( !*a1 )
      break;
    ++a1;
  }
  result = a2 == 0 ? 0x80070057 : 0;
  if ( a3 )
  {
    if ( a2 )
      *a3 = i - a2;
    else
      *a3 = 0LL;
  }
  return result;
}
