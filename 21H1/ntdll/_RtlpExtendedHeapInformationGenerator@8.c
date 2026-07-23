/*
 * XREFs of _RtlpExtendedHeapInformationGenerator@8 @ 0x4B357A40
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlpExtendedHeapInformationGenerator(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // edx
  char *v4; // edi
  int v5; // esi
  int v6; // ecx
  int v7; // eax
  char *v8; // eax
  char *v9; // ecx
  char *v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  _DWORD *v13; // edx
  char *v14; // edi
  int v15; // eax
  int v16; // ecx
  _DWORD *v17; // eax
  char *v18; // edi
  int v19; // eax
  char *v20; // edi
  int v21; // esi
  int v22; // ecx
  int v23; // eax
  _DWORD *v24; // ecx
  size_t v25; // [esp-4h] [ebp-10h]

  if ( *a1 == 1 )
  {
    v13 = a2;
    v24 = (_DWORD *)((a2[10] + 3) & 0xFFFFFFFC);
    a2[10] = v24;
    if ( (unsigned int)(v24 + 4) <= a2[11] )
    {
      *v24 = a1[2];
      v24[1] = a1[3];
      v24[2] = a1[4];
      v24[3] = a1[5];
      v24 = (_DWORD *)a2[10];
      a2[1] = v24;
    }
    v17 = v24 + 4;
    goto LABEL_48;
  }
  if ( *a1 != 2 )
  {
    if ( *a1 == 3 )
    {
      v3 = a2;
      v18 = (char *)((a2[10] + 3) & 0xFFFFFFFC);
      a2[10] = v18;
      if ( (unsigned int)(v18 + 20) <= a2[11] )
      {
        qmemcpy(v18, a1 + 2, 0x14u);
        v19 = a2[4];
        if ( !v19 )
          v19 = a2[3];
        *(_DWORD *)(v19 + 16) = a2[10] - a2[9];
        v18 = (char *)a2[10];
        a2[4] = v18;
        a2[5] = v18;
      }
      a2[10] = v18 + 20;
      goto LABEL_44;
    }
    if ( *a1 != 4 )
    {
      if ( *a1 == 5 )
      {
        v9 = (char *)((a2[10] + 3) & 0xFFFFFFFC);
        a2[10] = v9;
        v10 = v9;
        v11 = a1[1] - 8;
        if ( (unsigned int)&v9[v11] >= v11 && (unsigned int)&v9[v11] <= a2[11] )
        {
          LODWORD(v25) = a1[1] - 8;
          memcpy(v9, a1 + 2, v25);
          v12 = a2[8];
          if ( !v12 )
            v12 = a2[7];
          *(_DWORD *)(v12 + 16) = a2[10] - a2[9];
          v10 = (char *)a2[10];
          a2[8] = v10;
        }
        a2[10] = &v10[v11];
        return 0;
      }
      if ( *a1 != 0x80000000 )
        return -1073741811;
      v3 = a2;
      v4 = (char *)((a2[10] + 3) & 0xFFFFFFFC);
      a2[10] = v4;
      if ( (unsigned int)(v4 + 92) <= a2[11] )
      {
        qmemcpy(v4, a1 + 2, 0x5Cu);
        v5 = a2[1];
        if ( v5 )
        {
          v6 = a2[2];
          v7 = a2[10] - a2[9];
          if ( v6 )
            *(_DWORD *)(v6 + 20) = v7;
          else
            *(_DWORD *)(v5 + 12) = v7;
          v4 = (char *)a2[10];
          a2[2] = v4;
        }
        else
        {
          v4 = (char *)a2[10];
        }
        a2[3] = v4;
      }
      v8 = v4 + 92;
      goto LABEL_43;
    }
    v13 = a2;
    v14 = (char *)((a2[10] + 3) & 0xFFFFFFFC);
    a2[10] = v14;
    if ( (unsigned int)(v14 + 24) <= a2[11] )
    {
      qmemcpy(v14, a1 + 2, 0x18u);
      v15 = a2[6];
      v16 = a2[10] - a2[9];
      if ( v15 )
        *(_DWORD *)(v15 + 20) = v16;
      else
        *(_DWORD *)(a2[5] + 12) = v16;
      v14 = (char *)a2[10];
      a2[6] = v14;
      a2[7] = v14;
    }
    a2[8] = 0;
    v17 = v14 + 24;
LABEL_48:
    v13[10] = v17;
    return 0;
  }
  v3 = a2;
  v20 = (char *)((a2[10] + 3) & 0xFFFFFFFC);
  a2[10] = v20;
  if ( (unsigned int)(v20 + 24) <= a2[11] )
  {
    qmemcpy(v20, a1 + 2, 0x18u);
    v21 = a2[1];
    if ( v21 )
    {
      v22 = a2[2];
      v23 = a2[10] - a2[9];
      if ( v22 )
        *(_DWORD *)(v22 + 20) = v23;
      else
        *(_DWORD *)(v21 + 12) = v23;
      v20 = (char *)a2[10];
      a2[2] = v20;
    }
    else
    {
      v20 = (char *)a2[10];
    }
    a2[3] = v20;
  }
  v8 = v20 + 24;
LABEL_43:
  v3[10] = v8;
  v3[4] = 0;
  v3[5] = 0;
LABEL_44:
  v3[6] = 0;
  v3[7] = 0;
  v3[8] = 0;
  return 0;
}
