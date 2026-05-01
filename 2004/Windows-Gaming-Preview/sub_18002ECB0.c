/*
 * XREFs of sub_18002ECB0 @ 0x18002ECB0
 * Callers:
 *     sub_18002EE10 @ 0x18002EE10 (sub_18002EE10.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002ECB0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = xmmword_1800526F8;
    v6[1] = xmmword_180051408;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
