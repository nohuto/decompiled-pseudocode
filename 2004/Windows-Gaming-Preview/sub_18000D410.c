/*
 * XREFs of sub_18000D410 @ 0x18000D410
 * Callers:
 *     sub_18000D600 @ 0x18000D600 (sub_18000D600.c)
 *     sub_180010290 @ 0x180010290 (sub_180010290.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D410(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_180051230;
    v6[1] = xmmword_180051408;
    v6[2] = xmmword_180051260;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
