/*
 * XREFs of _MD4Update@12 @ 0x4B380180
 * Callers:
 *     _MD4Final@4 @ 0x4B3800A0 (_MD4Final@4.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _MD4Transform@8 @ 0x4B305540 (_MD4Transform@8.c)
 */

_DWORD *__stdcall MD4Update(_DWORD *a1, char *Src, unsigned int a3)
{
  size_t v3; // ebx
  _DWORD *v4; // edi
  int v5; // esi
  int v6; // edx
  unsigned int v7; // ecx
  char *v8; // esi
  _DWORD *result; // eax
  char *v10; // edx
  bool v11; // zf
  unsigned int v12; // [esp+Ch] [ebp-Ch]
  size_t v13; // [esp+Ch] [ebp-Ch]
  size_t v14; // [esp+Ch] [ebp-Ch]
  int v15; // [esp+10h] [ebp-8h]
  char *v16; // [esp+14h] [ebp-4h]

  v3 = a3;
  v4 = a1;
  v5 = a1[5];
  v6 = (a1[4] >> 3) & 0x3F;
  v7 = a1[4] + 8 * a3;
  v15 = v6;
  a1[4] = v7;
  if ( v7 < 8 * a3 )
    ++v5;
  a1[5] = v5 + (a3 >> 29);
  if ( v6 && (v12 = v6 + a3, v6 + a3 >= 0x40) )
  {
    memcpy((char *)a1 + v6 + 24, Src, 64 - v6);
    v3 = v12 - 64;
    v8 = &Src[64 - v15];
    v16 = v8;
    MD4Transform(a1, a1 + 6);
    v15 = 0;
  }
  else
  {
    v8 = Src;
    v16 = Src;
  }
  result = (_DWORD *)((unsigned __int8)v8 & 3);
  if ( v3 >= 0x40 )
  {
    if ( ((unsigned __int8)v8 & 3) != 0 )
    {
      v10 = (char *)(a1 + 6);
      v13 = v3 >> 6;
      do
      {
        qmemcpy(v10, v8, 0x40u);
        v4 = a1;
        result = MD4Transform(a1, v10);
        v10 = (char *)(a1 + 6);
        v8 = v16 + 64;
        v3 -= 64;
        v11 = v13-- == 1;
        v16 += 64;
      }
      while ( !v11 );
    }
    else
    {
      v14 = v3 >> 6;
      do
      {
        result = MD4Transform(a1, v8);
        v8 += 64;
        v3 -= 64;
        --v14;
      }
      while ( v14 );
    }
  }
  if ( v3 )
    return memcpy((char *)v4 + v15 + 24, v8, v3);
  return result;
}
