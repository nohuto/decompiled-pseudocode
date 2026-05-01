/*
 * XREFs of sub_180025790 @ 0x180025790
 * Callers:
 *     sub_180025810 @ 0x180025810 (sub_180025810.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180025790(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = unk_180051428;
    v6[1] = unk_180050EF8;
    v6[2] = xmmword_180051408;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
