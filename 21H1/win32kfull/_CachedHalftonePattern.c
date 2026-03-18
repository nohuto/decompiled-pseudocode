/*
 * XREFs of _CachedHalftonePattern @ 0x1BB975
 * Callers:
 *     _CreateHalftoneBrushPat @ 0xF9AD2 (_CreateHalftoneBrushPat.c)
 *     _CreateDyesColorMappingTable @ 0x1BE5CD (_CreateDyesColorMappingTable.c)
 * Callees:
 *     _Generate_HTSC_WORD @ 0x1BC242 (_Generate_HTSC_WORD.c)
 */

int __fastcall CachedHalftonePattern(int a1, int a2, void *a3, __int16 a4, __int16 a5, int a6)
{
  int result; // eax
  int v9; // ecx
  char *v10; // eax
  int v11; // esi
  int v12; // edi
  int v13; // ecx
  int v14; // ebx
  int v15; // edx
  int v16; // edi
  _DWORD v17[12]; // [esp+10h] [ebp-48h] BYREF
  _DWORD v18[5]; // [esp+40h] [ebp-18h] BYREF
  int v19; // [esp+54h] [ebp-4h]

  if ( !*(_DWORD *)(a1 + 160) && !Generate_HTSC_WORD(a1 + 144) )
    return -2;
  v17[6] = *(_DWORD *)(a2 + 48);
  qmemcpy(v18, (const void *)(a1 + 144), sizeof(v18));
  v9 = a4 % 65 + (a4 % 65 < 0 ? 0x41 : 0);
  v17[7] = (char *)&RGB555Pat + 66 * (a5 % 65) + 66 * (a5 % 65 < 0 ? 0x41 : 0) + v9;
  v17[11] = 64 - v9;
  if ( a6 )
  {
    v17[10] = -66;
    v17[8] = (char *)&unk_2589EE + v9;
    v10 = (char *)&unk_2589EE + v9 + 4290;
  }
  else
  {
    v17[10] = 66;
    v17[8] = (char *)&unk_259AF2 + v9;
    v10 = (char *)&unk_259AF2 + v9 - 4290;
  }
  v17[9] = v10;
  v11 = 6 * LOWORD(v18[2]);
  v12 = HIWORD(v18[2]);
  v19 = HIWORD(v18[1]);
  v13 = a4 % SHIWORD(v18[1]);
  v14 = v11 * HIWORD(v18[2]);
  if ( v13 < 0 )
    v13 += v19;
  v15 = a5 % v12;
  if ( v15 < 0 )
    v15 += v12;
  v16 = 6 * v13;
  v17[5] = -6 * v19;
  v17[4] = 6 * v19 - 6 * v13;
  v17[0] = 6 * v13 + v18[4] + v11 * v15;
  if ( a6 )
  {
    v17[1] = v18[4] - v11 + v16;
    v17[2] = v14 + v17[1];
    v11 = -6 * LOWORD(v18[2]);
  }
  else
  {
    v17[2] = v18[4] + v16;
    v17[1] = v18[4] + v16 + v14;
  }
  result = v14;
  v17[3] = v11;
  qmemcpy(a3, v17, 0x30u);
  return result;
}
