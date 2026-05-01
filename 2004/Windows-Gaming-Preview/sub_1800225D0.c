/*
 * XREFs of sub_1800225D0 @ 0x1800225D0
 * Callers:
 *     sub_180024F80 @ 0x180024F80 (sub_180024F80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800225D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = xmmword_1800511C8;
    v6[1] = xmmword_180051408;
    v6[2] = xmmword_180051C20;
    v6[3] = xmmword_180051BF0;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
