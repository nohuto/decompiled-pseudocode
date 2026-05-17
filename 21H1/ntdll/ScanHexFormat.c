/*
 * XREFs of ScanHexFormat @ 0x4B3626D0
 * Callers:
 *     _RtlGUIDFromString@8 @ 0x4B362640 (_RtlGUIDFromString@8.c)
 * Callees:
 *     <none>
 */

int ScanHexFormat(_WORD *a1, int a2, unsigned __int16 *a3, ...)
{
  unsigned __int16 *v3; // edx
  int v6; // edi
  unsigned __int16 v7; // cx
  int v8; // edi
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // edi
  int v15; // ecx
  int v16; // ecx
  _DWORD *v17; // eax
  int v19; // [esp+10h] [ebp-14h]
  unsigned __int16 **v20; // [esp+14h] [ebp-10h]
  int v21; // [esp+1Ch] [ebp-8h]
  unsigned int v22; // [esp+20h] [ebp-4h]

  v3 = a3;
  v6 = 0;
  v20 = &a3;
  while ( 2 )
  {
    v21 = v6;
    while ( 1 )
    {
      v7 = *v3;
      if ( !*v3 )
      {
        if ( a2 && *a1 )
          return -1;
        return v6;
      }
      if ( v7 == 37 )
      {
        v7 = *++v3;
        if ( *v3 != 37 )
          break;
      }
      if ( !a2 || *a1 != v7 )
        return -1;
      ++a1;
      --a2;
      ++v3;
    }
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = *v3;
      if ( v10 >= 0x30 && v10 <= 0x39 )
      {
        v9 = v10 + 10 * v9 - 48;
        goto LABEL_14;
      }
      if ( v10 == 108 )
      {
        ++v8;
        goto LABEL_14;
      }
      if ( v10 == 88 || v10 == 120 )
        break;
LABEL_14:
      ++v3;
    }
    ++v3;
    v11 = v9;
    v12 = 0;
    v19 = v8;
    v13 = v21;
    a3 = v3;
    if ( !v11 )
    {
LABEL_25:
      v17 = *++v20;
      if ( v19 )
        *v17 = v12;
      else
        *(_WORD *)v17 = v12;
      v6 = v13 + 1;
      continue;
    }
    break;
  }
  while ( 1 )
  {
    v22 = v11 - 1;
    if ( !a2 )
      return -1;
    v14 = (unsigned __int16)*a1;
    v15 = 16 * v12;
    if ( (unsigned __int16)(v14 - 48) > 9u )
    {
      if ( (unsigned __int16)(v14 - 97) > 5u )
      {
        if ( (unsigned __int16)(v14 - 65) > 5u )
          return -1;
        v16 = v15 - 55;
      }
      else
      {
        v16 = v15 - 87;
      }
    }
    else
    {
      v16 = v15 - 48;
    }
    ++a1;
    v12 = v14 + v16;
    --v11;
    --a2;
    if ( !v22 )
    {
      v13 = v21;
      goto LABEL_25;
    }
  }
}
