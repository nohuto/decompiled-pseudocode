/*
 * XREFs of sub_180035DB0 @ 0x180035DB0
 * Callers:
 *     sub_1800371E0 @ 0x1800371E0 (sub_1800371E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180035DB0(__int64 a1, _DWORD *a2, _QWORD *a3)
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
    v6[2] = xmmword_1800523F8;
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
