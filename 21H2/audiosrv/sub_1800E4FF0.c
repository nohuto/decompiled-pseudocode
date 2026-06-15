/*
 * XREFs of sub_1800E4FF0 @ 0x1800E4FF0
 * Callers:
 *     sub_180074920 @ 0x180074920 (sub_180074920.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E4FF0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x40uLL);
  if ( v6 )
  {
    *v6 = *(_OWORD *)&dword_18015B850;
    v6[1] = xmmword_18015B860;
    v6[2] = *(_OWORD *)&dword_18015B870;
    v6[3] = *(_OWORD *)&dword_18015B850;
    *a2 = 4;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
