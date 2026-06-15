/*
 * XREFs of sub_1801340B0 @ 0x1801340B0
 * Callers:
 *     sub_180133D60 @ 0x180133D60 (sub_180133D60.c)
 * Callees:
 *     sub_180133BDC @ 0x180133BDC (sub_180133BDC.c)
 */

__int64 __fastcall sub_1801340B0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rax

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a3 - (_QWORD)a1;
    v5 = a1 + 3;
    do
    {
      *(_QWORD *)((char *)v5 + v4 - 8) = 0LL;
      *(_QWORD *)((char *)v5 + v4) = 0LL;
      *(_OWORD *)v3 = *(_OWORD *)(v5 - 3);
      *(_OWORD *)(v3 + 16) = *(_OWORD *)(v5 - 1);
      *(v5 - 1) = 0LL;
      v3 += 32LL;
      *v5 = 7LL;
      *((_WORD *)v5 - 12) = 0;
      v5 += 4;
    }
    while ( v5 - 3 != a2 );
  }
  sub_180133BDC((__int64 *)v3, (__int64 *)v3);
  return v3;
}
