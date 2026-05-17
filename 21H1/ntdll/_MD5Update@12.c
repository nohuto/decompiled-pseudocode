/*
 * XREFs of _MD5Update@12 @ 0x4B2EF9B0
 * Callers:
 *     _MD5Final@4 @ 0x4B2EF910 (_MD5Final@4.c)
 *     _ImportTablepHashCanonicalLists@8 @ 0x4B33E432 (_ImportTablepHashCanonicalLists@8.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _TransformMD5@8 @ 0x4B3059B0 (_TransformMD5@8.c)
 */

void *__stdcall MD5Update(unsigned int *a1, char *Src, unsigned int a3)
{
  size_t v3; // ebx
  unsigned int *v4; // edi
  unsigned int v5; // esi
  int v6; // edx
  unsigned int v7; // ecx
  char *v8; // esi
  void *result; // eax
  _DWORD *v10; // ecx
  size_t v11; // edi
  char *v12; // edx
  bool v13; // zf
  unsigned int v14; // [esp+14h] [ebp-Ch]
  size_t v15; // [esp+14h] [ebp-Ch]
  int v16; // [esp+18h] [ebp-8h]
  char *v17; // [esp+1Ch] [ebp-4h]

  v3 = a3;
  v4 = a1;
  v5 = a1[1];
  v6 = (*a1 >> 3) & 0x3F;
  v7 = *a1 + 8 * a3;
  v16 = v6;
  *a1 = v7;
  if ( v7 < 8 * a3 )
    ++v5;
  a1[1] = v5 + (a3 >> 29);
  if ( v6 && (v14 = v6 + a3, v6 + a3 >= 0x40) )
  {
    memcpy((char *)a1 + v6 + 24, Src, 64 - v6);
    v3 = v14 - 64;
    v8 = &Src[64 - v16];
    v17 = v8;
    TransformMD5(a1 + 2, a1 + 6);
    v16 = 0;
  }
  else
  {
    v8 = Src;
    v17 = Src;
  }
  result = (void *)((unsigned __int8)v8 & 3);
  if ( v3 >= 0x40 )
  {
    if ( ((unsigned __int8)v8 & 3) != 0 )
    {
      v12 = (char *)(a1 + 6);
      v15 = v3 >> 6;
      do
      {
        qmemcpy(v12, v8, 0x40u);
        result = (void *)TransformMD5(a1 + 2, v12);
        v3 -= 64;
        v12 = (char *)(a1 + 6);
        v8 = v17 + 64;
        v13 = v15-- == 1;
        v17 += 64;
      }
      while ( !v13 );
    }
    else
    {
      v10 = a1 + 2;
      v11 = v3 >> 6;
      do
      {
        result = (void *)TransformMD5(v10, v8);
        v10 = a1 + 2;
        v8 += 64;
        v3 -= 64;
        --v11;
      }
      while ( v11 );
    }
    v4 = a1;
  }
  if ( v3 )
    return memcpy((char *)v4 + v16 + 24, v8, v3);
  return result;
}
