/*
 * XREFs of sub_180025000 @ 0x180025000
 * Callers:
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 *     sub_180025704 @ 0x180025704 (sub_180025704.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_180025000(unsigned __int64 a1)
{
  unsigned __int64 i; // rdx
  _QWORD **v3; // rax
  unsigned __int64 v4; // rcx
  _QWORD *v5; // rcx

  i = a1;
  if ( !a1 )
    return 0LL;
  while ( !*(_QWORD *)(i + 24) )
  {
    v3 = *(_QWORD ***)(i + 8);
    v4 = i;
    if ( v3 )
    {
      v5 = *v3;
      for ( i = *(_QWORD *)(i + 8); v5; v5 = (_QWORD *)*v5 )
        i = (unsigned __int64)v5;
    }
    else
    {
      while ( 1 )
      {
        i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !i || *(_QWORD *)i == v4 )
          break;
        v4 = i;
      }
    }
    if ( !i )
      return 0LL;
  }
  if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
    __fastfail(0xEu);
  return i;
}
