/*
 * XREFs of sub_180010820 @ 0x180010820
 * Callers:
 *     sub_180010690 @ 0x180010690 (sub_180010690.c)
 *     sub_1800106C0 @ 0x1800106C0 (sub_1800106C0.c)
 *     sub_1800108D0 @ 0x1800108D0 (sub_1800108D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180010820(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  _OWORD *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = CoTaskMemAlloc(0x70uLL);
  if ( v6 )
  {
    *v6 = xmmword_180050E58;
    v6[1] = xmmword_180051408;
    v6[2] = xmmword_180050B88;
    v6[3] = xmmword_180050FF0;
    v6[4] = unk_180051250;
    v6[5] = unk_180051240;
    v6[6] = xmmword_1800511B8;
    *a2 = 7;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
