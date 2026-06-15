/*
 * XREFs of sub_18006473C @ 0x18006473C
 * Callers:
 *     sub_1800646D8 @ 0x1800646D8 (sub_1800646D8.c)
 * Callees:
 *     sub_18006481C @ 0x18006481C (sub_18006481C.c)
 *     sub_180064CCC @ 0x180064CCC (sub_180064CCC.c)
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 *     sub_1800CF858 @ 0x1800CF858 (sub_1800CF858.c)
 *     sub_18011E8C8 @ 0x18011E8C8 (sub_18011E8C8.c)
 */

__int64 __fastcall sub_18006473C(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 v5; // r15
  __int64 v8; // rax
  int v9; // edx
  __int64 i; // r8
  __int64 v11; // rdi
  unsigned int v13; // eax

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = sub_180064CCC(a1 + 56, *(unsigned int *)(a1 + 52), 32LL);
    if ( !v8 )
      sub_1800B8610(2147942414LL);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = 32LL * (unsigned int)(v9 - 1) + 8 + v8; --v9 >= 0; i -= 32LL )
    {
      *(_QWORD *)(i + 16) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    sub_1800B8610(2147500037LL);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 16);
  sub_18006481C(v11, a2);
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_DWORD *)(v11 + 24) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 16) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  if ( *(_QWORD *)(a1 + 8) > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = sub_1800CF858(a1);
    sub_18011E8C8(a1, v13);
  }
  return v11;
}
