/*
 * XREFs of sub_18013EAB4 @ 0x18013EAB4
 * Callers:
 *     sub_1801403F0 @ 0x1801403F0 (sub_1801403F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18013EAB4(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // r8
  __int64 v3; // rax
  __int128 v4; // xmm1

  *(_DWORD *)(a1 + 20) = 0;
  *(_QWORD *)a1 = off_18014B3E0;
  v2 = (_OWORD *)(a1 + 24);
  v3 = 8LL;
  *(_DWORD *)(a1 + 16) = 1;
  do
  {
    *v2 = *a2;
    v2[1] = a2[1];
    v2[2] = a2[2];
    v2[3] = a2[3];
    v2[4] = a2[4];
    v2[5] = a2[5];
    v2[6] = a2[6];
    v2 += 8;
    v4 = a2[7];
    a2 += 8;
    *(v2 - 1) = v4;
    --v3;
  }
  while ( v3 );
  *v2 = *a2;
  *((_QWORD *)v2 + 2) = *((_QWORD *)a2 + 2);
  *(_DWORD *)(a1 + 1072) = 4;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = off_1801563D0;
  return a1;
}
