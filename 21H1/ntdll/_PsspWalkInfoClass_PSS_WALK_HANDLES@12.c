/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_HANDLES@12 @ 0x4B388C1F
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall PsspWalkInfoClass_PSS_WALK_HANDLES(int a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // eax
  int result; // eax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  char v9; // al
  int v10; // edx
  int v11; // ecx
  int v12; // ecx
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // [esp+8h] [ebp-8h]
  int v20; // [esp+Ch] [ebp-4h] BYREF

  v5 = *(_DWORD *)(a1 + 824);
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*a2 )
  {
    v20 = 0;
    result = ZwMapViewOfSection(v5, -1, (int)a2, 0, 0, 0, (int)&v20, 1, 0, 2);
    if ( result < 0 )
      return result;
    a2[1] = 0;
  }
  v7 = a2[1];
  v19 = v7;
  if ( v7 >= *(_DWORD *)(a1 + 820) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = v7 + *a2;
  memset(a3, 0, 0x30u);
  *a3 = *(_DWORD *)v8;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v8 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v8 + 5);
  a3[2] = *(_DWORD *)(v8 + 8);
  a3[3] = *(_DWORD *)(v8 + 12);
  v9 = *(_BYTE *)(v8 + 4);
  v10 = 16;
  if ( (v9 & 1) != 0 )
  {
    v11 = *(unsigned __int16 *)(v8 + 16);
    *((_WORD *)a3 + 8) = v11;
    a3[5] = v8 + 18;
    v9 = *(_BYTE *)(v8 + 4);
    v10 = v11 + 18;
  }
  if ( (v9 & 2) != 0 )
  {
    v12 = *(unsigned __int16 *)(v10 + v8);
    v13 = v10 + 2;
    *((_WORD *)a3 + 12) = v12;
    v14 = v13 + v8;
    v10 = v12 + v13;
    a3[7] = v14;
    v9 = *(_BYTE *)(v8 + 4);
  }
  if ( (v9 & 4) != 0 )
  {
    v15 = v10 + v8;
    v10 += 56;
    a3[8] = v15;
    v9 = *(_BYTE *)(v8 + 4);
  }
  if ( (v9 & 8) != 0 )
  {
    v16 = *(unsigned __int16 *)(v10 + v8);
    v17 = v10 + 2;
    *((_WORD *)a3 + 18) = v16;
    v18 = v17 + v8;
    v10 = v16 + v17;
    a3[10] = v18;
  }
  a2[1] = v10 + v19;
  return 0;
}
