/*
 * XREFs of sub_180013770 @ 0x180013770
 * Callers:
 *     sub_180015C50 @ 0x180015C50 (sub_180015C50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013770(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_180051710;
    v6[1] = xmmword_180051408;
    v6[2] = xmmword_1800511C8;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
