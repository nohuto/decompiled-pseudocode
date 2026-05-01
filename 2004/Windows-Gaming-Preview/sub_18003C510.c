/*
 * XREFs of sub_18003C510 @ 0x18003C510
 * Callers:
 *     sub_18003C580 @ 0x18003C580 (sub_18003C580.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003C510(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = xmmword_180050978;
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
