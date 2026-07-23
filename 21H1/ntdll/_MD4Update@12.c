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
  unsigned int v3; // ebx
  _DWORD *v4; // edi
  int v5; // esi
  int v6; // edx
  unsigned int v7; // ecx
  char *v8; // esi
  _DWORD *result; // eax
  char *v10; // edx
  bool v11; // zf
  size_t v12; // [esp-4h] [ebp-1Ch]
  unsigned int v13; // [esp+Ch] [ebp-Ch]
  unsigned int v14; // [esp+Ch] [ebp-Ch]
  unsigned int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+10h] [ebp-8h]
  char *v17; // [esp+14h] [ebp-4h]

  v3 = a3;
  v4 = a1;
  v5 = a1[5];
  v6 = (a1[4] >> 3) & 0x3F;
  v7 = a1[4] + 8 * a3;
  v16 = v6;
  a1[4] = v7;
  if ( v7 < 8 * a3 )
    ++v5;
  a1[5] = v5 + (a3 >> 29);
  if ( v6 && (v13 = v6 + a3, v6 + a3 >= 0x40) )
  {
    LODWORD(v12) = 64 - v6;
    memcpy((char *)a1 + v6 + 24, Src, v12);
    v3 = v13 - 64;
    v8 = &Src[64 - v16];
    v17 = v8;
    MD4Transform(a1, a1 + 6);
    v16 = 0;
  }
  else
  {
    v8 = Src;
    v17 = Src;
  }
  result = (_DWORD *)((unsigned __int8)v8 & 3);
  if ( v3 >= 0x40 )
  {
    if ( ((unsigned __int8)v8 & 3) != 0 )
    {
      v10 = (char *)(a1 + 6);
      v14 = v3 >> 6;
      do
      {
        qmemcpy(v10, v8, 0x40u);
        v4 = a1;
        result = MD4Transform(a1, v10);
        v10 = (char *)(a1 + 6);
        v8 = v17 + 64;
        v3 -= 64;
        v11 = v14-- == 1;
        v17 += 64;
      }
      while ( !v11 );
    }
    else
    {
      v15 = v3 >> 6;
      do
      {
        result = MD4Transform(a1, v8);
        v8 += 64;
        v3 -= 64;
        --v15;
      }
      while ( v15 );
    }
  }
  if ( v3 )
  {
    LODWORD(v12) = v3;
    return memcpy((char *)v4 + v16 + 24, v8, v12);
  }
  return result;
}
