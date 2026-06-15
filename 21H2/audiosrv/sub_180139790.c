/*
 * XREFs of sub_180139790 @ 0x180139790
 * Callers:
 *     sub_180139C34 @ 0x180139C34 (sub_180139C34.c)
 *     sub_18013A430 @ 0x18013A430 (sub_18013A430.c)
 * Callees:
 *     sub_180007EE0 @ 0x180007EE0 (sub_180007EE0.c)
 */

unsigned __int16 *__fastcall sub_180139790(
        __int64 a1,
        unsigned __int16 *a2,
        int *a3,
        unsigned int *a4,
        unsigned __int16 **a5)
{
  unsigned int v9; // eax
  unsigned __int16 *v10; // r10
  unsigned __int16 *result; // rax
  unsigned __int16 *v12; // rcx
  int v13; // r9d
  int v14; // edx

  v9 = sub_180007EE0(a2);
  *a4 = v9;
  *a3 = v9 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v10 = 0LL;
  *a5 = 0LL;
  result = *(unsigned __int16 **)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !result )
    return 0LL;
  while ( 1 )
  {
    if ( *((_DWORD *)result + 6) == *a4 )
    {
      v12 = *(unsigned __int16 **)result;
      do
      {
        v13 = *(unsigned __int16 *)((char *)a2 + (_QWORD)v12 - *(_QWORD *)result);
        v14 = *v12 - v13;
        if ( v14 )
          break;
        ++v12;
      }
      while ( v13 );
      if ( !v14 )
        break;
    }
    v10 = result;
    result = (unsigned __int16 *)*((_QWORD *)result + 2);
    if ( !result )
      return 0LL;
  }
  *a5 = v10;
  return result;
}
