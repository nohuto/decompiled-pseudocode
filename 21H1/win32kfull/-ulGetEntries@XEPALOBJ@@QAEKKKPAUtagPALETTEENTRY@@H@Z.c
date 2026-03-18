/*
 * XREFs of ?ulGetEntries@XEPALOBJ@@QAEKKKPAUtagPALETTEENTRY@@H@Z @ 0xAD8F8
 * Callers:
 *     _GreGetPaletteEntries@16 @ 0xAD8B4 (_GreGetPaletteEntries@16.c)
 *     _EngQueryPalette@16 @ 0x1EE329 (_EngQueryPalette@16.c)
 *     _NtGdiColorCorrectPalette@24 @ 0x21BFC4 (_NtGdiColorCorrectPalette@24.c)
 *     _GreGetSystemPaletteEntries@16 @ 0x21E38F (_GreGetSystemPaletteEntries@16.c)
 *     _PALOBJ_cGetColors@16 @ 0x2235D0 (_PALOBJ_cGetColors@16.c)
 *     _XLATEOBJ_cGetPalette@16 @ 0x2257C0 (_XLATEOBJ_cGetPalette@16.c)
 *     ?bSetHTSrcSurfInfo@@YGHPAU_SURFOBJ@@VXEPALOBJ@@PAU_HTSURFACEINFO@@PAU_XLATEOBJ@@@Z @ 0x226EE3 (-bSetHTSrcSurfInfo@@YGHPAU_SURFOBJ@@VXEPALOBJ@@PAU_HTSURFACEINFO@@PAU_XLATEOBJ@@@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

unsigned int __thiscall XEPALOBJ::ulGetEntries(
        XEPALOBJ *this,
        unsigned int a2,
        unsigned int a3,
        struct tagPALETTEENTRY *a4,
        int a5)
{
  struct tagPALETTEENTRY *v5; // esi
  unsigned int result; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax

  v5 = a4;
  result = *(_DWORD *)(*(_DWORD *)this + 20);
  if ( a4 )
  {
    if ( a2 >= result )
    {
      return 0;
    }
    else
    {
      v7 = a3;
      v8 = result - a2;
      if ( a3 > v8 )
        v7 = v8;
      memcpy(a4, (const void *)(*(_DWORD *)(*(_DWORD *)this + 76) + 4 * a2), 4 * v7);
      if ( a5 )
      {
        while ( v5 < &a4[v7] )
        {
          v5->peFlags = 0;
          ++v5;
        }
      }
      return v7;
    }
  }
  return result;
}
