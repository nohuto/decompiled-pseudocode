/*
 * XREFs of sub_180013400 @ 0x180013400
 * Callers:
 *     sub_180013570 @ 0x180013570 (sub_180013570.c)
 *     sub_180015C20 @ 0x180015C20 (sub_180015C20.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180013400(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_180051720;
    v6[1] = xmmword_180051408;
    v6[2] = xmmword_180051730;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
