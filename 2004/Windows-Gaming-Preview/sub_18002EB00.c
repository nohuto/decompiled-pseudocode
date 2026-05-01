/*
 * XREFs of sub_18002EB00 @ 0x18002EB00
 * Callers:
 *     sub_18002EC70 @ 0x18002EC70 (sub_18002EC70.c)
 *     sub_180037220 @ 0x180037220 (sub_180037220.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002EB00(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_180052708;
    v6[1] = xmmword_180051408;
    v6[2] = xmmword_180052958;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
