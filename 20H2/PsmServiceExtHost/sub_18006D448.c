/*
 * XREFs of sub_18006D448 @ 0x18006D448
 * Callers:
 *     sub_18006CAD0 @ 0x18006CAD0 (sub_18006CAD0.c)
 *     sub_18006D504 @ 0x18006D504 (sub_18006D504.c)
 * Callees:
 *     sub_18006CC08 @ 0x18006CC08 (sub_18006CC08.c)
 */

char __fastcall sub_18006D448(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  _QWORD *v5; // rdi
  unsigned int v6; // ebp
  __int64 v7; // r14
  int v10; // eax
  __int64 v11; // r10
  __int64 i; // r9
  __int64 *v13; // r9

  result = 0;
  v5 = (_QWORD *)(a2 + 104);
  v6 = 0;
  v7 = a1 - a2;
  do
  {
    if ( !*(_DWORD *)(a2 + 264) )
      break;
    if ( *v5 )
    {
      v10 = RtlNumberOfSetBitsUlongPtr(*v5, a2, a3, a4);
      *(_QWORD *)((char *)v5 + v7 + 144) |= *v5;
      *v5 = 0LL;
      *(_DWORD *)(a1 + 920) += v10;
      *(_DWORD *)(a2 + 264) -= v10;
      result = 1;
    }
    ++v6;
    ++v5;
  }
  while ( v6 < 0x14 );
  if ( result )
  {
    *(_DWORD *)(a1 + 932) |= 1u;
    v11 = a2 + 80;
    for ( i = *(_QWORD *)(a2 + 80); i != v11; i = *v13 )
      result = sub_18006CC08(a1, *(_QWORD *)(i - 48));
  }
  return result;
}
