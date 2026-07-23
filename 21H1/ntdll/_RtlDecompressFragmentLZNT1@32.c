/*
 * XREFs of _RtlDecompressFragmentLZNT1@32 @ 0x4B372BD0
 * Callers:
 *     <none>
 * Callees:
 *     _LZNT1DecompressChunk@20 @ 0x4B2F505C (_LZNT1DecompressChunk@20.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlDecompressFragmentLZNT1(
        void *a1,
        unsigned int a2,
        __int16 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int a8)
{
  unsigned int v8; // edx
  unsigned int v9; // esi
  int v10; // edi
  __int16 v11; // ax
  int v13; // ecx
  unsigned int v14; // ecx
  char *v15; // esi
  _BYTE *v16; // edx
  unsigned int v17; // eax
  char *v18; // esi
  bool v19; // zf
  size_t v21; // [esp-4h] [ebp-30h]
  int v22; // [esp+Ch] [ebp-20h] BYREF
  void *v23; // [esp+10h] [ebp-1Ch]
  unsigned int v24; // [esp+14h] [ebp-18h]
  unsigned int v25; // [esp+18h] [ebp-14h]
  unsigned int v26; // [esp+1Ch] [ebp-10h]
  int i; // [esp+20h] [ebp-Ch] BYREF
  unsigned int v28; // [esp+24h] [ebp-8h] BYREF
  __int16 v29; // [esp+28h] [ebp-4h]

  v8 = (unsigned int)a3;
  v9 = (unsigned int)a3 + a4;
  v24 = (unsigned int)a1 + a2;
  v10 = 0;
  v25 = (unsigned int)a3 + a4;
  if ( ((unsigned __int8)a3 & 1) != 0 )
  {
    v29 = *a3;
    v11 = v29;
  }
  else
  {
    v11 = *a3;
    v29 = *a3;
  }
  for ( i = 4096; ; i = 4096 )
  {
    v13 = (v11 & 0xFFF) + 3;
    if ( a5 < 0x1000 )
      break;
    if ( v13 + v8 > v9 )
    {
LABEL_39:
      v10 = -1073741246;
      *a7 = v8;
      return v10;
    }
    v8 += v13;
    a5 -= 4096;
    if ( v8 <= v9 - 2 )
    {
      if ( (v8 & 1) != 0 )
      {
        v29 = *(_WORD *)v8;
        v11 = v29;
      }
      else
      {
        v11 = *(_WORD *)v8;
        v29 = *(_WORD *)v8;
      }
      if ( v11 )
        continue;
    }
    *a7 = 0;
    return 0;
  }
  v23 = a1;
  while ( 1 )
  {
    v26 = v8 + v13;
    if ( v8 + v13 > v25 )
      goto LABEL_39;
    v14 = 4096 - a5;
    if ( 4096 - a5 >= a2 )
      v14 = a2;
    v28 = v14;
    v15 = (char *)v23;
    if ( v11 >= 0 )
    {
      if ( a5 + v14 + v8 + 2 > v25 )
        goto LABEL_39;
      LODWORD(v21) = v14;
      memcpy(v23, (const void *)(a5 + v8 + 2), v21);
      goto LABEL_31;
    }
    if ( a5 || v14 != 4096 )
      break;
    v16 = (_BYTE *)(v8 + 2);
    if ( !a6 )
    {
      v10 = LZNT1DecompressChunk((unsigned int)v23, v24, v16, v26, &v28);
      if ( v10 >= 0 )
        goto LABEL_31;
LABEL_24:
      v17 = v28;
LABEL_25:
      *a7 = v17;
      return v10;
    }
    v10 = LZNT1DecompressChunk((unsigned int)v23, v24, v16, v26, &v22);
    if ( v10 < 0 )
      goto LABEL_24;
    v28 = a6;
LABEL_31:
    a5 = 0;
    v18 = &v15[v28];
    v19 = a2 == v28;
    v23 = v18;
    a2 -= v28;
    if ( v19 )
      goto LABEL_42;
    v8 = v26;
    if ( v26 > v25 - 2 )
      goto LABEL_42;
    if ( (v26 & 1) != 0 )
    {
      v29 = *(_WORD *)v26;
      v11 = v29;
    }
    else
    {
      v11 = *(_WORD *)v26;
      v29 = *(_WORD *)v26;
    }
    if ( !v11 )
      goto LABEL_42;
    i = 4096;
    v13 = (v11 & 0xFFF) + 3;
  }
  v10 = LZNT1DecompressChunk(a8, a8 + 4096, (_BYTE *)(v8 + 2), v26, &i);
  if ( v10 < 0 )
  {
    v17 = i;
    goto LABEL_25;
  }
  if ( i - a5 >= v28 )
  {
    LODWORD(v21) = v28;
    memcpy(v15, (const void *)(a5 + a8), v21);
    goto LABEL_31;
  }
  LODWORD(v21) = i - a5;
  memcpy(v15, (const void *)(a5 + a8), v21);
  v18 = &v15[i - a5];
LABEL_42:
  *a7 = v18 - (_BYTE *)a1;
  return v10;
}
