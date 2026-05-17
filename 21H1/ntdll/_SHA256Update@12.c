/*
 * XREFs of _SHA256Update@12 @ 0x4B2EE726
 * Callers:
 *     _RtlDeriveCapabilitySidsFromName@12 @ 0x4B2EE4F0 (_RtlDeriveCapabilitySidsFromName@12.c)
 *     _SHA256Final@8 @ 0x4B2EE630 (_SHA256Final@8.c)
 * Callees:
 *     _SHA256Transform@8 @ 0x4B2EE7E0 (_SHA256Transform@8.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

void *__fastcall SHA256Update(int a1, char *a2, size_t Size)
{
  size_t v3; // ebx
  int v4; // esi
  char *v5; // edi
  size_t v6; // eax
  int v7; // ecx
  void *result; // eax
  char *v9; // edx
  bool v10; // zf
  size_t v12; // [esp+10h] [ebp-Ch]
  size_t v13; // [esp+10h] [ebp-Ch]
  size_t v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  char *v16; // [esp+18h] [ebp-4h]

  v3 = Size;
  v4 = a1;
  v5 = a2;
  v16 = a2;
  v6 = Size + *(_DWORD *)(a1 + 36);
  v7 = *(_DWORD *)(a1 + 36) & 0x3F;
  v15 = v7;
  *(_DWORD *)(a1 + 36) = v6;
  if ( v6 < Size )
    ++*(_DWORD *)(v4 + 32);
  if ( v7 )
  {
    v12 = v7 + Size;
    if ( v7 + Size >= 0x40 )
    {
      memcpy((void *)(v7 + v4 + 40), a2, 64 - v7);
      v3 = v12 - 64;
      v5 += 64 - v15;
      v16 = v5;
      SHA256Transform(v4, v4 + 40);
      v15 = 0;
    }
  }
  result = (void *)((unsigned __int8)v5 & 3);
  if ( v3 >= 0x40 )
  {
    if ( ((unsigned __int8)v5 & 3) != 0 )
    {
      v9 = (char *)(v4 + 40);
      v13 = v3 >> 6;
      do
      {
        qmemcpy(v9, v5, 0x40u);
        v4 = a1;
        result = (void *)SHA256Transform(a1, v9);
        v9 = (char *)(a1 + 40);
        v5 = v16 + 64;
        v3 -= 64;
        v10 = v13-- == 1;
        v16 += 64;
      }
      while ( !v10 );
    }
    else
    {
      v14 = v3 >> 6;
      do
      {
        result = (void *)SHA256Transform(v4, v5);
        v5 += 64;
        v3 -= 64;
        --v14;
      }
      while ( v14 );
    }
  }
  if ( v3 )
    return memcpy((void *)(v4 + v15 + 40), v5, v3);
  return result;
}
