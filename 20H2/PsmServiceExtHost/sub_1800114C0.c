/*
 * XREFs of sub_1800114C0 @ 0x1800114C0
 * Callers:
 *     sub_18000E3DC @ 0x18000E3DC (sub_18000E3DC.c)
 *     sub_18000EDAC @ 0x18000EDAC (sub_18000EDAC.c)
 *     sub_18000F0F4 @ 0x18000F0F4 (sub_18000F0F4.c)
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800114C0(_WORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // rax
  __int64 v7; // r9
  __int16 v8; // dx

  v4 = a2;
  v5 = 0;
  if ( !a2 )
    goto LABEL_6;
  v6 = 2147483646LL;
  v7 = a4 - (_QWORD)a1;
  while ( v6 )
  {
    v8 = *(_WORD *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1 = v8;
    --v6;
    ++a1;
    if ( !--v4 )
      goto LABEL_6;
  }
  if ( !v4 )
  {
LABEL_6:
    --a1;
    v5 = -2147024774;
  }
  *a1 = 0;
  return v5;
}
