/*
 * XREFs of sub_18006BC20 @ 0x18006BC20
 * Callers:
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006BC20(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, __int64 a5)
{
  __int64 result; // rax
  unsigned int v6; // r11d
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // ecx

  result = (unsigned int)*a4;
  v6 = 0;
  if ( *(_DWORD *)(a2 + 264) < (unsigned int)result )
  {
    do
    {
      v9 = v6++;
      v9 *= 2LL;
      v10 = *(unsigned int *)(a5 + 8 * v9);
      v11 = *(_DWORD *)(a5 + 8 * v9 + 4);
      *(_QWORD *)(a1 + 8 * v10 + 248) &= ~(1LL << v11);
      *(_DWORD *)(a1 + 932) |= 1u;
      --*(_DWORD *)(a1 + 920);
      *(_QWORD *)(a2 + 8 * v10 + 104) |= 1LL << v11;
      result = (unsigned int)++*(_DWORD *)(a2 + 264);
    }
    while ( (unsigned int)result < *a4 );
  }
  return result;
}
