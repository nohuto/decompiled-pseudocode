/*
 * XREFs of _RtlFindExportedRoutineByName@8 @ 0x4B34D1C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

unsigned int __thiscall RtlFindExportedRoutineByName(void *this, int a2, char *a3)
{
  int v3; // edi
  unsigned int v4; // esi
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  _BYTE *v10; // eax
  bool v11; // cf
  bool v12; // zf
  unsigned int v13; // edx
  unsigned __int8 v14; // dl
  int v15; // eax
  unsigned int v16; // ecx
  int v18; // [esp+8h] [ebp-1Ch] BYREF
  int v19; // [esp+Ch] [ebp-18h]
  int v20; // [esp+10h] [ebp-14h]
  _DWORD *v21; // [esp+14h] [ebp-10h]
  int v22; // [esp+18h] [ebp-Ch]
  char *v23; // [esp+1Ch] [ebp-8h]
  unsigned __int8 v24; // [esp+23h] [ebp-1h]

  v3 = a2;
  v4 = 0;
  v5 = RtlImageDirectoryEntryToData(this, a2, 1, 0, (int)&v18);
  v21 = v5;
  if ( !v5 )
    return v4;
  v6 = v5[6];
  v20 = a2 + v5[8];
  v7 = v6 - 1;
  v19 = a2 + v5[9];
  v8 = 0;
  v22 = 0;
  if ( v7 < 0 )
    return v4;
  while ( 1 )
  {
    v9 = (v7 + v8) >> 1;
    v10 = (_BYTE *)(v3 + *(_DWORD *)(v20 + 4 * v9));
    v23 = a3;
    while ( 1 )
    {
      v11 = (unsigned __int8)*v23 < *v10;
      v12 = *v23 == *v10;
      v3 = a2;
      v24 = *v23;
      v13 = (unsigned int)v21;
      if ( !v12 )
        break;
      if ( !v24 )
        goto LABEL_8;
      v14 = v23[1];
      v11 = v14 < v10[1];
      v12 = v14 == v10[1];
      v3 = a2;
      v24 = v14;
      v13 = (unsigned int)v21;
      if ( !v12 )
        break;
      v23 += 2;
      v10 += 2;
      if ( !v24 )
      {
LABEL_8:
        v15 = 0;
        goto LABEL_10;
      }
    }
    v15 = v11 ? -1 : 1;
LABEL_10:
    if ( v15 < 0 )
    {
      if ( !v9 )
        return v4;
      v8 = v22;
      v7 = v9 - 1;
      goto LABEL_15;
    }
    if ( v15 <= 0 )
      break;
    v8 = v9 + 1;
    v22 = v9 + 1;
LABEL_15:
    if ( v7 < v8 )
      goto LABEL_18;
  }
  v8 = v22;
LABEL_18:
  if ( v7 >= v8 )
  {
    v16 = *(unsigned __int16 *)(v19 + 2 * v9);
    if ( v16 < *(_DWORD *)(v13 + 20) )
    {
      v4 = v3 + *(_DWORD *)(*(_DWORD *)(v13 + 28) + 4 * v16 + v3);
      if ( v4 > v13 )
        v4 &= -(v4 >= v13 + v18);
    }
  }
  return v4;
}
