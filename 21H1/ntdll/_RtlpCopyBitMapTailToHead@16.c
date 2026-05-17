/*
 * XREFs of _RtlpCopyBitMapTailToHead@16 @ 0x4B34FA2A
 * Callers:
 *     _RtlCopyBitMap@12 @ 0x4B34E350 (_RtlCopyBitMap@12.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __fastcall RtlpCopyBitMapTailToHead(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  unsigned int v6; // ebx
  size_t v7; // edi
  unsigned int v8; // ebx
  int v9; // esi
  unsigned int v10; // ecx
  _DWORD *v11; // edi
  int v12; // eax
  int v13; // edx
  int v14; // eax
  int v15; // edx
  int *v16; // ecx
  int *v17; // edi
  int v18; // eax
  int v19; // ecx
  int v20; // [esp+10h] [ebp-18h]
  int v21; // [esp+14h] [ebp-14h]
  _DWORD *v22; // [esp+18h] [ebp-10h]
  char v23; // [esp+1Ch] [ebp-Ch]
  _DWORD *v24; // [esp+20h] [ebp-8h]
  int v25; // [esp+24h] [ebp-4h]

  result = a2;
  v6 = a3 >> 3;
  if ( (a3 & 7) != 0 )
  {
    v8 = a4 >> 5;
    v9 = a3 & 0x1F;
    v10 = a4 & 0x1F;
    v22 = (_DWORD *)(*(_DWORD *)(result + 4) + 4 * ((a4 >> 5) + (a3 >> 5)));
    v24 = v22;
    v11 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * (a4 >> 5));
    result = 32;
    if ( (a4 & 0x1F) != 0 )
    {
      v23 = 32 - v9;
      if ( v10 > 32 - v9 )
      {
        v22[1] = v22[1] & ~((1 << (v9 + v10 - 32)) - 1) | ((*v11 & (unsigned int)(((1 << (v9 + v10 - 32)) - 1) << v23)) >> v23);
        v15 = (*v11 & ((1 << v23) - 1)) << v9;
        v16 = v22;
        v14 = *v22 & ((1 << v9) - 1);
      }
      else
      {
        v12 = (1 << v10) - 1;
        v13 = *v11 & v12;
        v14 = *v22 & ~(v12 << v9);
        v15 = v13 << v9;
        v16 = v22;
      }
      *v16 = v15 | v14;
      result = 32;
    }
    v17 = v11 - 1;
    if ( v8 )
    {
      v25 = *v22;
      v21 = (1 << (32 - v9)) - 1;
      result = ~v21;
      v20 = (1 << v9) - 1;
      do
      {
        *v24 = ((result & (unsigned int)*v17) >> (32 - v9)) | v25 & ~v20;
        v18 = *v17--;
        v19 = ((v21 & v18) << v9) | v20 & *--v24;
        result = ~v21;
        v25 = v19;
        *v24 = v19;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v7 = a4 >> 3;
    if ( (a4 & 7) != 0 )
      *(_BYTE *)(v7 + *(_DWORD *)(result + 4) + v6) = ((1 << (a4 & 7)) - 1) & *(_BYTE *)(v7 + *(_DWORD *)(a1 + 4)) | *(_BYTE *)(v7 + *(_DWORD *)(result + 4) + v6) & ~((1 << (a4 & 7)) - 1);
    if ( v7 )
      return (int)memmove((void *)(v6 + *(_DWORD *)(result + 4)), *(const void **)(a1 + 4), v7);
  }
  return result;
}
