/*
 * XREFs of sub_180037C10 @ 0x180037C10
 * Callers:
 *     sub_180037C80 @ 0x180037C80 (sub_180037C80.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180037C10(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = xmmword_180050A98;
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
