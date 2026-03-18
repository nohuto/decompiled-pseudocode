/*
 * XREFs of ?bSafeReadBits@@YGHPAX0K@Z @ 0x216DC3
 * Callers:
 *     _NtGdiEngCreatePalette@24 @ 0x217FBE (_NtGdiEngCreatePalette@24.c)
 *     _NtGdiHT_Get8BPPMaskPalette@24 @ 0x21A690 (_NtGdiHT_Get8BPPMaskPalette@24.c)
 *     _NtGdiXFORMOBJ_bApplyXform@20 @ 0x21B239 (_NtGdiXFORMOBJ_bApplyXform@20.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __userpurge bSafeReadBits@<eax>(char *a1@<edx>, void *a2@<ecx>, size_t MaxCount, void *a4, unsigned int a5)
{
  if ( a2 && a1 )
  {
    if ( &a1[MaxCount] < a1 || (unsigned int)&a1[MaxCount] > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(a2, a1, MaxCount);
  }
  return 1;
}
