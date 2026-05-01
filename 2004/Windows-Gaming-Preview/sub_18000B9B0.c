/*
 * XREFs of sub_18000B9B0 @ 0x18000B9B0
 * Callers:
 *     sub_18000BBD0 @ 0x18000BBD0 (sub_18000BBD0.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000B9B0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_180051418;
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
