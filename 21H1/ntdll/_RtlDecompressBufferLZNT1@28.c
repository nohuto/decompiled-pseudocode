/*
 * XREFs of _RtlDecompressBufferLZNT1@28 @ 0x4B372A50
 * Callers:
 *     <none>
 * Callees:
 *     _LZNT1DecompressChunk@20 @ 0x4B2F505C (_LZNT1DecompressChunk@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __stdcall RtlDecompressBufferLZNT1(char *a1, int a2, unsigned int a3, int a4, int a5, int *a6, int a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // edx
  char *v9; // edi
  __int16 v10; // si
  _BYTE *v11; // ebx
  unsigned int v12; // ecx
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int *v16; // eax
  size_t v17; // [esp-4h] [ebp-2Ch]
  int v18; // [esp+Ch] [ebp-1Ch] BYREF
  unsigned int v19; // [esp+10h] [ebp-18h]
  unsigned int v20; // [esp+14h] [ebp-14h]
  int v21; // [esp+18h] [ebp-10h]
  char *v22; // [esp+1Ch] [ebp-Ch]
  int v23; // [esp+20h] [ebp-8h] BYREF
  __int16 v24; // [esp+24h] [ebp-4h]

  v7 = a3;
  v8 = a3 + a4;
  v21 = 0;
  v9 = a1;
  v22 = &a1[a2];
  v19 = a3 + a4;
  if ( (a3 & 1) != 0 )
  {
    v24 = *(_WORD *)a3;
    v10 = v24;
  }
  else
  {
    v10 = *(_WORD *)a3;
    v24 = *(_WORD *)a3;
  }
  v23 = 0;
  while ( 1 )
  {
    v15 = (v10 & 0xFFF) + 3;
    v20 = v15 + v7;
    if ( v15 + v7 > v8 )
    {
LABEL_28:
      v16 = (unsigned int *)a6;
      goto LABEL_29;
    }
    if ( v10 >= 0 )
    {
      if ( v15 < 2 )
        goto LABEL_28;
      v14 = (v10 & 0xFFF) + 1;
      v23 = v14;
      if ( &v9[v14] > v22 )
      {
        v14 = v22 - v9;
        v23 = v22 - v9;
      }
      if ( v14 + v7 + 2 > v8 )
        goto LABEL_28;
      LODWORD(v17) = v14;
      memcpy(v9, (const void *)(v7 + 2), v17);
LABEL_17:
      v12 = v23;
      goto LABEL_18;
    }
    v11 = (_BYTE *)(v7 + 2);
    if ( !a5 )
    {
      v21 = LZNT1DecompressChunk((unsigned int)v9, (unsigned int)v22, v11, v20, &v23);
      if ( v21 < 0 )
      {
LABEL_10:
        *a6 = v23;
        return v21;
      }
      goto LABEL_17;
    }
    v21 = LZNT1DecompressChunk((unsigned int)v9, (unsigned int)v22, v11, v20, &v18);
    if ( v21 < 0 )
      goto LABEL_10;
    v12 = a5;
    v23 = a5;
LABEL_18:
    v7 = v20;
    v9 += v12;
    v8 = v19;
    if ( v9 == v22 || v20 > v19 - 2 )
      break;
    if ( (v20 & 1) != 0 )
    {
      v24 = *(_WORD *)v20;
      v10 = v24;
    }
    else
    {
      v10 = *(_WORD *)v20;
      v24 = *(_WORD *)v20;
    }
    if ( !v10 )
      break;
    if ( v12 < 0x1000 )
    {
      v20 = (unsigned int)&v9[4096 - v12];
      if ( v20 >= (unsigned int)v22 )
        break;
      LODWORD(v17) = 4096 - v12;
      memset(v9, 0, v17);
      v9 = (char *)v20;
      v8 = v19;
    }
  }
  v16 = (unsigned int *)a6;
  if ( v7 <= v19 )
  {
    *a6 = v9 - a1;
    return v21;
  }
LABEL_29:
  *v16 = v7;
  return -1073741246;
}
