/*
 * XREFs of _PsspWalkInfoClass_PSS_WALK_THREADS@12 @ 0x4B388D3F
 * Callers:
 *     _PssNtWalkSnapshot@20 @ 0x4B386EE0 (_PssNtWalkSnapshot@20.c)
 * Callees:
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall PsspWalkInfoClass_PSS_WALK_THREADS(_DWORD *a1, _DWORD *a2, char *a3)
{
  int v5; // eax
  int result; // eax
  unsigned int v7; // ecx
  const void *v8; // esi
  _DWORD *v9; // eax
  int v10; // esi
  unsigned int v11; // [esp+8h] [ebp-10h]
  int v12; // [esp+Ch] [ebp-Ch]
  int v13; // [esp+10h] [ebp-8h] BYREF
  const void *v14; // [esp+14h] [ebp-4h]

  v12 = (a1[2] >> 5) & 8;
  v5 = a1[212];
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*a2 )
  {
    v13 = 0;
    result = ZwMapViewOfSection(v5, -1, (int)a2, 0, 0, 0, (int)&v13, 1, 0, 2);
    if ( result < 0 )
      return result;
    a2[1] = 0;
  }
  v7 = a2[1];
  v11 = v7;
  if ( v7 >= a1[211] )
    return -2147483622;
  if ( !a3 )
    return 261;
  v14 = (const void *)(v7 + *a2);
  v8 = v14;
  memset(a3, 0, 0x68u);
  v9 = v14;
  qmemcpy(a3, v8, 0x1Cu);
  *((_DWORD *)a3 + 8) = v9[8];
  *((_DWORD *)a3 + 9) = v9[9];
  *((_DWORD *)a3 + 10) = v9[10];
  *((_DWORD *)a3 + 11) = v9[11];
  qmemcpy(a3 + 48, v9 + 12, 0x24u);
  *((_DWORD *)a3 + 22) = v9[22];
  *((_DWORD *)a3 + 23) = v9[23];
  *((_WORD *)a3 + 48) = *((_WORD *)v9 + 48);
  *((_WORD *)a3 + 49) = *((_WORD *)v9 + 49);
  v10 = v12 + 104;
  if ( *((_WORD *)v9 + 49) >= 2u )
  {
    *((_DWORD *)a3 + 25) = (char *)v9 + v12 + 104;
    v10 += ((*((unsigned __int16 *)v9 + 49) >> 1) + 15) & 0xFFFFFFF0;
  }
  a2[1] = v10 + v11;
  return 0;
}
