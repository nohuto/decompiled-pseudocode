/*
 * XREFs of sub_180071EC8 @ 0x180071EC8
 * Callers:
 *     sub_18006B6B4 @ 0x18006B6B4 (sub_18006B6B4.c)
 *     sub_180071DF0 @ 0x180071DF0 (sub_180071DF0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180071EC8(__int64 a1, int a2, int *a3)
{
  __int16 v3; // ax
  int v4; // edx
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // eax

  v3 = *(_WORD *)(a1 + 1376);
  v4 = a2 - 1;
  if ( !v4 )
    goto LABEL_10;
  v5 = v4 - 1;
  if ( !v5 )
  {
    v6 = 1;
    if ( (v3 & 1) != 0 )
      goto LABEL_12;
    if ( (v3 & 2) != 0 )
      goto LABEL_9;
    return 0;
  }
  if ( v5 != 1 )
    return 0;
  if ( (v3 & 2) != 0 && (*(_BYTE *)(*(_QWORD *)(a1 + 1320) + 1162LL) & 0x20) != 0 )
  {
    v6 = 1;
LABEL_9:
    v7 = 1;
    goto LABEL_13;
  }
LABEL_10:
  v6 = 1;
  if ( (v3 & 1) == 0 )
    return 0;
LABEL_12:
  v7 = 0;
LABEL_13:
  if ( a3 )
    *a3 = v7;
  return v6;
}
