/*
 * XREFs of _NtGdiGetFontData@20 @ 0x869F2
 * Callers:
 *     <none>
 * Callees:
 *     _ulGetFontData@20 @ 0x86AB0 (_ulGetFontData@20.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

size_t __stdcall NtGdiGetFontData(HDC a1, int a2, int a3, char *a4, unsigned int a5)
{
  size_t v5; // esi
  unsigned int FontData; // eax
  void *Src; // [esp+10h] [ebp-1Ch]

  Src = 0;
  v5 = -1;
  if ( !a5 )
    return ulGetFontData(a1, a3, 0, 0);
  if ( a5 <= 0x2710000 )
    Src = (void *)AllocFreeTmpBuffer(a5);
  if ( Src )
  {
    FontData = ulGetFontData(a1, a3, (int)Src, a5);
    v5 = FontData;
    if ( FontData != -1 )
    {
      if ( FontData > a5 )
        v5 = -1;
      if ( v5 != -1 )
      {
        if ( (unsigned int)&a4[v5] > _MmUserProbeAddress || &a4[v5] <= a4 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a4, Src, v5);
      }
    }
    FreeTmpBuffer(Src);
  }
  return v5;
}
