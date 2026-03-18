/*
 * XREFs of DNG_StretchCol @ 0xB7EF6
 * Callers:
 *     RenderNineGridInternal @ 0x50CC0 (RenderNineGridInternal.c)
 * Callees:
 *     DNG_DrawRow @ 0x51780 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YGHPAU_DNGINTERNALDATA@@PAX1J@Z @ 0x1EBE92 (-DNG_CopyMemory@@YGHPAU_DNGINTERNALDATA@@PAX1J@Z.c)
 */

int __fastcall DNG_StretchCol(_DWORD *a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // ebx
  int v6; // edx
  __int64 v7; // kr00_8
  int result; // eax
  void *v9; // [esp+0h] [ebp-2Ch]
  int v10; // [esp+4h] [ebp-28h]
  int v11; // [esp+Ch] [ebp-20h]
  unsigned int v12; // [esp+10h] [ebp-1Ch]
  unsigned int v13; // [esp+14h] [ebp-18h]
  int v14; // [esp+18h] [ebp-14h]
  int v15; // [esp+1Ch] [ebp-10h]
  int v16; // [esp+20h] [ebp-Ch]
  __int64 v17; // [esp+24h] [ebp-8h]

  v15 = a1[6];
  v11 = a1[2];
  v14 = a1[3];
  v3 = v11 - 4 * v14 * a2[6];
  v4 = 1;
  v12 = a2[3];
  v13 = a2[2];
  v17 = (unsigned int)a2[1];
  v16 = v11 - 4 * v14 * a2[7];
  v5 = v15 - 4 * *a2 * a1[7];
  if ( v3 != v16 )
  {
    v6 = v14;
    do
    {
      if ( v4 )
      {
        a1[2] = v3;
        a1[6] = v5;
        DNG_DrawRow(a1);
      }
      else if ( !DNG_CopyMemory((struct _DNGINTERNALDATA *)(v3 + 4 * (*a1 + v6)), (void *)(4 * a1[5]), v9, v10) )
      {
        break;
      }
      v4 = v12 + ((unsigned int)v17 + v13 < (unsigned int)v17);
      v7 = v17 + __PAIR64__(v12, v13);
      HIDWORD(v17) = HIDWORD(v7);
      if ( HIDWORD(v7) < a1[9] )
        v5 += -4 * v4 * a1[7];
      v6 = a1[3];
      v3 += -4 * v6;
      LODWORD(v17) = v7;
    }
    while ( v3 != v16 );
  }
  a1[2] = v11;
  result = v15;
  a1[6] = v15;
  return result;
}
