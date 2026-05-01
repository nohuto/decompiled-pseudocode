/*
 * XREFs of sub_1800255B0 @ 0x1800255B0
 * Callers:
 *     sub_180025530 @ 0x180025530 (sub_180025530.c)
 *     sub_180025630 @ 0x180025630 (sub_180025630.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800255B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_180051000;
    v6[1] = xmmword_180051408;
    v6[2] = xmmword_180050900;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
