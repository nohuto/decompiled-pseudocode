/*
 * XREFs of _NtGdiGetCharWidthW@24 @ 0xC0B10
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetCharWidthW(HDC a1, int a2, unsigned int a3, char *Src, char a5, char *a6)
{
  int CharWidthW; // edi
  int v7; // esi
  size_t v9; // edx
  size_t v10; // esi
  int v11; // [esp+10h] [ebp-24h]
  void *v12; // [esp+14h] [ebp-20h]
  void *v13; // [esp+18h] [ebp-1Ch]

  CharWidthW = 0;
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v7 = a3;
  if ( !a3 )
    return 0;
  if ( Src )
  {
    v11 = 1;
    if ( a3 <= 0x1388000 )
      v12 = PALLOCMEM2(2 * a3, 1886221383, 0);
  }
  if ( !v11 || v12 )
  {
    if ( a3 <= 0x9C4000 )
      v13 = (void *)AllocFreeTmpBuffer(4 * a3);
    if ( v13 )
    {
      if ( v11 )
      {
        v9 = 2 * a3;
        if ( &Src[2 * a3] < Src || (v7 = a3, (unsigned int)&Src[v9] > _MmUserProbeAddress) )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(v12, Src, v9);
      }
      CharWidthW = GreGetCharWidthW(a1, v7, (int)v12, a5, (int)v13);
      if ( CharWidthW )
      {
        v10 = 4 * v7;
        if ( (unsigned int)&a6[v10] > _MmUserProbeAddress || &a6[v10] <= a6 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a6, v13, v10);
      }
      FreeTmpBuffer(v13);
    }
    if ( v11 )
      Win32FreePool(v12);
  }
  return CharWidthW;
}
