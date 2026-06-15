/*
 * XREFs of sub_180119D08 @ 0x180119D08
 * Callers:
 *     sub_18005A578 @ 0x18005A578 (sub_18005A578.c)
 *     unknown_libname_345 @ 0x180118B24 (unknown_libname_345.c)
 *     sub_180118DBC @ 0x180118DBC (sub_180118DBC.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011BFE4 @ 0x18011BFE4 (sub_18011BFE4.c)
 * Callees:
 *     sub_1800384A4 @ 0x1800384A4 (sub_1800384A4.c)
 *     sub_18004B9B4 @ 0x18004B9B4 (sub_18004B9B4.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180119CCC @ 0x180119CCC (sub_180119CCC.c)
 */

__int64 __fastcall sub_180119D08(__int64 a1)
{
  int v1; // edi
  int i; // esi
  LPVOID **v4; // rax
  void **v5; // rax

  v1 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
  {
    v4 = (LPVOID **)sub_18004B9B4(a1 + 16, i);
    if ( *v4 )
      sub_180119CCC(*v4);
  }
  if ( *(int *)(a1 + 40) > 0 )
  {
    do
    {
      v5 = (void **)sub_18004B9B4(a1 + 32, v1);
      sub_18006A148(*v5);
      ++v1;
    }
    while ( v1 < *(_DWORD *)(a1 + 40) );
  }
  sub_1800384A4((__int64 *)(a1 + 32));
  sub_1800384A4((__int64 *)(a1 + 16));
  sub_18006A148((void *)a1);
  return a1;
}
