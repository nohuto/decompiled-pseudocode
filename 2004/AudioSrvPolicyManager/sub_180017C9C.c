/*
 * XREFs of sub_180017C9C @ 0x180017C9C
 * Callers:
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 *     sub_180014CF0 @ 0x180014CF0 (sub_180014CF0.c)
 *     sub_180019050 @ 0x180019050 (sub_180019050.c)
 *     sub_1800195E0 @ 0x1800195E0 (sub_1800195E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180017C9C(__int64 a1, char *a2, __int64 a3)
{
  char *v3; // rax
  char *v4; // rcx
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  signed __int64 v8; // rcx
  unsigned __int16 v9; // r10
  unsigned int v10; // eax

  v3 = (char *)a3;
  if ( *(_QWORD *)(a3 + 24) >= 8uLL )
    v3 = *(char **)a3;
  v4 = a2;
  if ( *((_QWORD *)a2 + 3) >= 8uLL )
    v4 = *(char **)a2;
  v5 = *(_QWORD *)(a3 + 16);
  v7 = *((_QWORD *)a2 + 2);
  v6 = v7;
  if ( v5 < v7 )
    v7 = v5;
  if ( v7 )
  {
    v8 = v4 - v3;
    while ( 1 )
    {
      v9 = *(_WORD *)&v3[v8];
      if ( v9 != *(_WORD *)v3 )
        break;
      v3 += 2;
      if ( !--v7 )
        goto LABEL_11;
    }
    v10 = v9 < *(_WORD *)v3 ? -1 : 1;
  }
  else
  {
LABEL_11:
    v10 = 0;
  }
  if ( !v10 )
  {
    if ( v6 >= v5 )
      v10 = v6 > v5;
    else
      v10 = -1;
  }
  return v10 >> 31;
}
