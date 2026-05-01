/*
 * XREFs of sub_1800145E0 @ 0x1800145E0
 * Callers:
 *     sub_180014750 @ 0x180014750 (sub_180014750.c)
 *     sub_180015D00 @ 0x180015D00 (sub_180015D00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800145E0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = xmmword_180051618;
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
