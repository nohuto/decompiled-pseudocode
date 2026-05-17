/*
 * XREFs of _RtlLengthCurrentClearRunForward@12 @ 0x4B34F5C0
 * Callers:
 *     _RtlCSparseBitmapFindBitSetCapped@12 @ 0x4B37E029 (_RtlCSparseBitmapFindBitSetCapped@12.c)
 * Callees:
 *     _RtlFindLeastSignificantBit@8 @ 0x4B34EC70 (_RtlFindLeastSignificantBit@8.c)
 */

int __fastcall RtlLengthCurrentClearRunForward(int *a1, unsigned int a2, int a3)
{
  char v3; // bl
  int v4; // esi
  int v5; // ecx
  _DWORD *v6; // edi
  _DWORD *v7; // edx
  int v8; // ebx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v13; // [esp+Ch] [ebp-4h]

  v3 = a2;
  v4 = a1[1];
  v5 = *a1;
  v6 = (_DWORD *)(v4 + 4 * (a2 >> 5));
  v13 = v5 & 0x1F;
  v7 = (_DWORD *)(v4 + 4 * ((unsigned int)(v5 - 1) >> 5));
  if ( (v5 & 0x1F) != 0 )
    --v7;
  v8 = v3 & 0x1F;
  v9 = 0;
  v10 = ~dword_4B288AA0[v8] & *v6;
  if ( v6 > v7 )
  {
LABEL_12:
    if ( v13 )
    {
      if ( v9 )
        v10 = v6[1];
      v9 += RtlFindLeastSignificantBit((unsigned int)v10 | (unsigned __int64)(unsigned int)~dword_4B288AA0[v13]);
    }
  }
  else if ( v10 )
  {
LABEL_10:
    v9 += RtlFindLeastSignificantBit((unsigned int)v10);
  }
  else
  {
    v11 = -v8;
    while ( 1 )
    {
      v9 += 32;
      v11 += 32;
      if ( v9 == -1 && v11 == -1 )
        break;
      if ( v6 == v7 )
        goto LABEL_12;
      v10 = *++v6;
      if ( *v6 )
        goto LABEL_10;
    }
  }
  return v9 - v8;
}
