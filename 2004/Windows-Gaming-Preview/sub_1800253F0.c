/*
 * XREFs of sub_1800253F0 @ 0x1800253F0
 * Callers:
 *     sub_180024F40 @ 0x180024F40 (sub_180024F40.c)
 *     sub_180025330 @ 0x180025330 (sub_180025330.c)
 *     sub_180025470 @ 0x180025470 (sub_180025470.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800253F0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = *(_OWORD *)&xmmword_180051100;
    v6[1] = xmmword_180051000;
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
