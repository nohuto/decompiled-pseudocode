/*
 * XREFs of ?LOADSTRING@@YGHPAXIPAGH@Z @ 0xE3124
 * Callers:
 *     _InitializeScripts@0 @ 0x292144 (_InitializeScripts@0.c)
 * Callees:
 *     _pvFindResource@20 @ 0xE621E (_pvFindResource@20.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge LOADSTRING@<eax>(unsigned int a1@<edx>, void *a2, unsigned int a3, unsigned __int16 *a4, int a5)
{
  char v5; // bl
  signed int v6; // esi
  unsigned __int16 *Resource; // eax
  void *v8; // edi
  unsigned __int16 *v9; // ecx
  int v10; // ebx
  signed int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  unsigned int v16; // [esp+Ch] [ebp-4h] BYREF

  v5 = a1;
  v6 = 0;
  v16 = 0;
  Resource = (unsigned __int16 *)pvFindResource((a1 >> 4) + 1, 6, &v16);
  v8 = a2;
  v9 = Resource;
  if ( Resource )
  {
    v10 = v5 & 0xF;
    v11 = 0;
    v12 = (unsigned int)&Resource[v16 >> 1];
    v16 = v12;
    if ( (unsigned int)v9 < v12 )
    {
      v13 = v12;
      do
      {
        v11 = *v9;
        v14 = v10;
        ++v9;
        --v10;
        if ( !v14 )
          break;
        v9 += v11;
      }
      while ( (unsigned int)v9 < v13 );
      v8 = a2;
      v12 = v16;
    }
    if ( !v8 )
      return v11;
    if ( (unsigned int)v9 < v12 )
    {
      v6 = a3 - 1;
      if ( (int)(a3 - 1) > v11 )
        v6 = v11;
      memcpy(v8, v9, 2 * v6);
    }
  }
  if ( v8 )
    *((_WORD *)v8 + v6) = 0;
  return v6;
}
