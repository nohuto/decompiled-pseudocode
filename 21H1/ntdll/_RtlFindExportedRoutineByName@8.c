/*
 * XREFs of _RtlFindExportedRoutineByName@8 @ 0x4B34D1C0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlImageDirectoryEntryToData@16 @ 0x4B2BDDE0 (_RtlImageDirectoryEntryToData@16.c)
 */

PVOID __cdecl RtlFindExportedRoutineByName(PVOID BaseOfImage, PCSTR RoutineName)
{
  char *v2; // edi
  char *v3; // esi
  char *v4; // eax
  int v5; // ecx
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  const CHAR *v9; // eax
  bool v10; // cf
  bool v11; // zf
  char *v12; // edx
  unsigned __int8 v13; // dl
  int v14; // eax
  unsigned int v15; // ecx
  ULONG Size; // [esp+8h] [ebp-1Ch] BYREF
  char *v18; // [esp+Ch] [ebp-18h]
  char *v19; // [esp+10h] [ebp-14h]
  char *v20; // [esp+14h] [ebp-10h]
  int v21; // [esp+18h] [ebp-Ch]
  PCSTR v22; // [esp+1Ch] [ebp-8h]
  CHAR v23; // [esp+23h] [ebp-1h]

  v2 = (char *)BaseOfImage;
  v3 = 0;
  v4 = (char *)RtlImageDirectoryEntryToData(BaseOfImage, 1u, 0, &Size);
  v20 = v4;
  if ( !v4 )
    return v3;
  v5 = *((_DWORD *)v4 + 6);
  v19 = (char *)BaseOfImage + *((_DWORD *)v4 + 8);
  v6 = v5 - 1;
  v18 = (char *)BaseOfImage + *((_DWORD *)v4 + 9);
  v7 = 0;
  v21 = 0;
  if ( v6 < 0 )
    return v3;
  while ( 1 )
  {
    v8 = (v6 + v7) >> 1;
    v9 = &v2[*(_DWORD *)&v19[4 * v8]];
    v22 = RoutineName;
    while ( 1 )
    {
      v10 = *v22 < (unsigned int)*v9;
      v11 = *v22 == *v9;
      v2 = (char *)BaseOfImage;
      v23 = *v22;
      v12 = v20;
      if ( !v11 )
        break;
      if ( !v23 )
        goto LABEL_8;
      v13 = v22[1];
      v10 = v13 < (unsigned int)v9[1];
      v11 = v13 == v9[1];
      v2 = (char *)BaseOfImage;
      v23 = v13;
      v12 = v20;
      if ( !v11 )
        break;
      v22 += 2;
      v9 += 2;
      if ( !v23 )
      {
LABEL_8:
        v14 = 0;
        goto LABEL_10;
      }
    }
    v14 = v10 ? -1 : 1;
LABEL_10:
    if ( v14 < 0 )
    {
      if ( !v8 )
        return v3;
      v7 = v21;
      v6 = v8 - 1;
      goto LABEL_15;
    }
    if ( v14 <= 0 )
      break;
    v7 = v8 + 1;
    v21 = v8 + 1;
LABEL_15:
    if ( v6 < v7 )
      goto LABEL_18;
  }
  v7 = v21;
LABEL_18:
  if ( v6 >= v7 )
  {
    v15 = *(unsigned __int16 *)&v18[2 * v8];
    if ( v15 < *((_DWORD *)v12 + 5) )
    {
      v3 = &v2[*(_DWORD *)&v2[4 * v15 + *((_DWORD *)v12 + 7)]];
      if ( v3 > v12 )
        return v3 >= &v12[Size] ? v3 : 0;
    }
  }
  return v3;
}
