/*
 * XREFs of sub_1800E4318 @ 0x1800E4318
 * Callers:
 *     sub_180125A30 @ 0x180125A30 (sub_180125A30.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E4318(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = 0;
  if ( a1 && a2 )
  {
    if ( *a2 == 0xFFFE )
    {
      if ( a2[8] == 22 )
        goto LABEL_11;
      v3 = *((_QWORD *)a2 + 3) - 0x10000000000003LL;
      if ( *((_QWORD *)a2 + 3) == 0x10000000000003LL )
        v3 = *((_QWORD *)a2 + 4) - 0x719B3800AA000080LL;
      if ( !v3 )
        goto LABEL_11;
      v4 = *((_QWORD *)a2 + 3) - 0x10000000000001LL;
      if ( *((_QWORD *)a2 + 3) == 0x10000000000001LL )
        v4 = *((_QWORD *)a2 + 4) - 0x719B3800AA000080LL;
      if ( !v4 )
      {
LABEL_11:
        v2 = 1;
        *(_OWORD *)a1 = *(_OWORD *)a2;
        *(_OWORD *)(a1 + 16) = *((_OWORD *)a2 + 1);
        *(_QWORD *)(a1 + 32) = *((_QWORD *)a2 + 4);
        *(_WORD *)(a1 + 16) = 22;
      }
    }
    else if ( (!a2[8] || ((*a2 - 1) & 0xFFFD) == 0)
           && (unsigned __int16)(a2[1] - 1) <= 1u
           && ((a2[7] - 8) & 0xFFE7) == 0 )
    {
      v2 = 1;
      *(_OWORD *)a1 = *(_OWORD *)a2;
      *(_WORD *)a1 = -2;
      *(_WORD *)(a1 + 16) = 22;
      *(_WORD *)(a1 + 18) = a2[7];
      *(_OWORD *)(a1 + 24) = xmmword_18015B740;
      *(_DWORD *)(a1 + 24) = *a2;
      *(_DWORD *)(a1 + 20) = 4 - (a2[1] != 1);
    }
  }
  return v2;
}
