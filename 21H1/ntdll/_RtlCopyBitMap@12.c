/*
 * XREFs of _RtlCopyBitMap@12 @ 0x4B34E350
 * Callers:
 *     <none>
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlpCopyBitMapTailToHead@16 @ 0x4B34FA2A (_RtlpCopyBitMapTailToHead@16.c)
 */

void __stdcall RtlCopyBitMap(unsigned int *a1, _DWORD *a2, unsigned int a3)
{
  _DWORD *v3; // ecx
  unsigned int v4; // edi
  int *v5; // edx
  int *v6; // esi
  unsigned int v7; // eax
  unsigned int v8; // ebx
  int v9; // edi
  size_t v10; // ebx
  _BYTE *v11; // esi
  int v12; // ebx
  int v13; // edx
  unsigned int v14; // ecx
  bool v15; // zf
  int v16; // [esp+10h] [ebp-18h]
  int v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch]
  unsigned int v19; // [esp+1Ch] [ebp-Ch]
  int v20; // [esp+1Ch] [ebp-Ch]
  unsigned int v21; // [esp+20h] [ebp-8h]
  int *v22; // [esp+24h] [ebp-4h]

  v3 = a2;
  v4 = *a2 - a3;
  if ( *a1 <= v4 )
    v4 = *a1;
  if ( v4 )
  {
    v5 = (int *)a1[1];
    v18 = a2[1];
    v22 = v5;
    v6 = (int *)(v18 + 4 * (a3 >> 5));
    if ( v5 > v6 || v6 > &v5[(v4 - 1) >> 5] )
    {
      v7 = a3 >> 3;
      if ( (a3 & 7) != 0 )
      {
        v12 = a3 & 0x1F;
        if ( v4 >= 0x20 )
        {
          v21 = *v6;
          v13 = (1 << (32 - v12)) - 1;
          v17 = v13;
          v16 = ~v13;
          v19 = v4 >> 5;
          while ( 1 )
          {
            *v6++ = ((*v22 & v13) << v12) | v21 & ((1 << v12) - 1);
            v5 = v22 + 1;
            v14 = ((*v22++ & (unsigned int)v16) >> (32 - v12)) | *v6 & ~((1 << v12) - 1);
            v4 -= 32;
            v21 = v14;
            v15 = v19-- == 1;
            *v6 = v14;
            if ( v15 )
              break;
            v13 = v17;
          }
        }
        if ( v4 )
        {
          v20 = *v5;
          if ( v4 > 32 - v12 )
          {
            *v6 = *v6 & ((1 << v12) - 1) | ((v20 & ((1 << (32 - v12)) - 1)) << v12);
            v6[1] = ((*v22 & (unsigned int)(((1 << (v4 + v12 - 32)) - 1) << (32 - v12))) >> (32 - v12)) | v6[1] & ~((1 << (v4 + v12 - 32)) - 1);
          }
          else
          {
            *v6 = ((v20 & ((1 << v4) - 1)) << v12) | *v6 & ~(((1 << v4) - 1) << v12);
          }
        }
      }
      else
      {
        v8 = v4;
        v9 = v4 & 7;
        v10 = v8 >> 3;
        if ( v10 )
        {
          memmove((void *)(v18 + v7), v5, v10);
          v3 = a2;
          v7 = a3 >> 3;
        }
        if ( v9 )
        {
          v11 = (_BYTE *)(v7 + v10 + v3[1]);
          *v11 &= ~((1 << v9) - 1);
          *v11 |= (unsigned __int8)((1 << v9) - 1) & *(_BYTE *)(v10 + a1[1]);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(a3, v4);
    }
  }
}
