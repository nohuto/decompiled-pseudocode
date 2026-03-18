/*
 * XREFs of ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F
 * Callers:
 *     _NtGdiCLIPOBJ_bEnum@12 @ 0x21721F (_NtGdiCLIPOBJ_bEnum@12.c)
 *     _NtGdiFONTOBJ_cGetAllGlyphHandles@8 @ 0x219DE2 (_NtGdiFONTOBJ_cGetAllGlyphHandles@8.c)
 *     _NtGdiFONTOBJ_vGetInfo@12 @ 0x21A4F5 (_NtGdiFONTOBJ_vGetInfo@12.c)
 *     _NtGdiHT_Get8BPPFormatPalette@16 @ 0x21A628 (_NtGdiHT_Get8BPPFormatPalette@16.c)
 *     _NtGdiHT_Get8BPPMaskPalette@24 @ 0x21A690 (_NtGdiHT_Get8BPPMaskPalette@24.c)
 *     _NtGdiXFORMOBJ_bApplyXform@20 @ 0x21B239 (_NtGdiXFORMOBJ_bApplyXform@20.c)
 *     _NtGdiXLATEOBJ_cGetPalette@16 @ 0x21B468 (_NtGdiXLATEOBJ_cGetPalette@16.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge bSafeCopyBits@<eax>(const void *a1@<edx>, char *a2@<ecx>, size_t MaxCount, void *a4, unsigned int a5)
{
  if ( a2 && a1 )
  {
    if ( (unsigned int)&a2[MaxCount] > _MmUserProbeAddress || &a2[MaxCount] <= a2 )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(a2, a1, MaxCount);
  }
  return 1;
}
