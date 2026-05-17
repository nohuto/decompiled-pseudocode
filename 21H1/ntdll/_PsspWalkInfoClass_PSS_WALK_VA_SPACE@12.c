/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_VA_SPACE@12 @ 0x4B388E5F
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall PsspWalkInfoClass_PSS_WALK_VA_SPACE(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v5; // eax
  int result; // eax
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // eax
  int v12; // [esp+Ch] [ebp-8h] BYREF
  unsigned int v13; // [esp+10h] [ebp-4h]

  v5 = a1[197];
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*a2 )
  {
    v12 = 0;
    result = ZwMapViewOfSection(v5, -1, (int)a2, 0, 0, 0, (int)&v12, 1, 0, 2);
    if ( result < 0 )
      return result;
    a2[1] = 0;
  }
  v7 = a2[1];
  v13 = v7;
  if ( v7 >= a1[196] )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = v7 + *a2;
  memset(a3, 0, 0x34u);
  *a3 = *(_DWORD *)v8;
  a3[1] = *(_DWORD *)(v8 + 4);
  a3[2] = *(_DWORD *)(v8 + 8);
  a3[3] = *(_DWORD *)(v8 + 12);
  a3[4] = *(_DWORD *)(v8 + 16);
  a3[5] = *(_DWORD *)(v8 + 20);
  a3[6] = *(_DWORD *)(v8 + 24);
  a3[7] = *(_DWORD *)(v8 + 28);
  a3[8] = *(_DWORD *)(v8 + 32);
  a3[9] = *(_DWORD *)(v8 + 36);
  a3[10] = *(_DWORD *)(v8 + 40);
  v9 = 44;
  if ( (a1[2] & 0x1000) != 0
    && v13 + 48 <= a1[196]
    && (*(_DWORD *)(v8 + 24) == 0x1000000 || *(_DWORD *)(v8 + 24) == 0x40000) )
  {
    v10 = *(unsigned __int16 *)(v8 + 44);
    *((_WORD *)a3 + 22) = v10;
    if ( (_WORD)v10 )
      a3[12] = v8 + 46;
    v9 = v10 + 46;
  }
  a2[1] = v13 + ((v9 + 7) & 0xFFFFFFF8);
  return 0;
}
