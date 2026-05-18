/*
 * XREFs of sub_1800218AC @ 0x1800218AC
 * Callers:
 *     sub_18001DF10 @ 0x18001DF10 (sub_18001DF10.c)
 * Callees:
 *     sub_1800216CC @ 0x1800216CC (sub_1800216CC.c)
 *     sub_1800217BC @ 0x1800217BC (sub_1800217BC.c)
 */

__int64 __fastcall sub_1800218AC(__int64 a1, volatile signed __int32 *a2, int a3, int a4, int a5)
{
  int v8; // r11d
  int v9; // edx
  signed __int32 i; // ecx
  signed __int32 v11; // r8d
  signed __int32 v12; // eax
  unsigned int v13; // r8d
  unsigned __int32 v14; // eax
  BOOL v15; // ecx
  unsigned __int32 v16; // ett

  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( !a3 )
    goto LABEL_35;
  v8 = 1;
  if ( a3 == 1 )
  {
LABEL_34:
    sub_1800216CC(a2, a3, a5, (_DWORD *)a1);
    return a1;
  }
  if ( a3 <= 1 )
    goto LABEL_25;
  if ( a3 <= 3 )
  {
LABEL_8:
    v9 = 0;
    switch ( a3 )
    {
      case 2:
        v9 = 2;
        break;
      case 3:
        v9 = 8;
        break;
      case 6:
        v9 = 4;
        break;
      case 7:
        v9 = 16;
        break;
    }
    for ( i = *a2; ; i = v12 )
    {
      *(_DWORD *)(a1 + 16) = (i | v9) == i;
      v11 = i | v9 | 1;
      if ( (i | v9) == i )
        v11 = i | v9;
      v12 = _InterlockedCompareExchange(a2, v11, i);
      if ( i == v12 )
        break;
    }
    if ( (v11 & 1) == 0 || (i & 1) != 0 )
      v8 = 0;
    *(_DWORD *)a1 = v8;
    return a1;
  }
  if ( a3 == 4 )
  {
LABEL_35:
    sub_1800217BC(a2, a3, a5, (_DWORD *)a1);
    return a1;
  }
  if ( a3 == 5 )
    goto LABEL_34;
  if ( (unsigned int)(a3 - 6) <= 1 )
    goto LABEL_8;
LABEL_25:
  v13 = a3 - 320;
  if ( v13 >= 0x40 )
    goto LABEL_33;
  v14 = *((_DWORD *)a2 + 1);
  do
  {
    v15 = (v14 & 0x10) != 0 && ((v14 >> 5) & 0x3F) == v13;
    *(_DWORD *)(a1 + 16) = v15;
    v16 = v14;
    v14 = _InterlockedCompareExchange(a2 + 1, (32 * (v13 & 0x3F)) | v14 & 0xFFFFF81F | 0x10, v14);
  }
  while ( v16 != v14 );
  if ( !*(_DWORD *)(a1 + 16) )
  {
LABEL_33:
    *(_DWORD *)(a1 + 4) = a5;
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 12) = a4;
  }
  return a1;
}
