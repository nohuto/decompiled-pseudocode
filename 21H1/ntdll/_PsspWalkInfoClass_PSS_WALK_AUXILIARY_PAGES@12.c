/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES@12 @ 0x4B388B4A
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(_DWORD *a1, _DWORD *a2, char *a3)
{
  int v5; // eax
  int result; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // ebx
  unsigned int v10; // [esp+Ch] [ebp-8h]
  int v11; // [esp+10h] [ebp-4h] BYREF

  v5 = a1[193];
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*a2 )
  {
    v11 = 0;
    result = ZwMapViewOfSection(v5, -1, (int)a2, 0, 0, 0, (int)&v11, 1, 0, 2);
    if ( result < 0 )
      return result;
    a2[1] = 0;
  }
  v7 = a2[1];
  v10 = v7;
  if ( v7 >= a1[192] )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = (_DWORD *)(a1[194] + 40 * v7);
  memset(a3, 0, 0x30u);
  *(_DWORD *)a3 = *v8;
  qmemcpy(a3 + 4, v8 + 1, 0x24u);
  *((_DWORD *)a3 + 10) = *a2 + (v10 << 12);
  *((_DWORD *)a3 + 11) = 4096;
  a2[1] = v10 + 1;
  return 0;
}
