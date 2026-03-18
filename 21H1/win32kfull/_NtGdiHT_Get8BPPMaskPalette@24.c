/*
 * XREFs of _NtGdiHT_Get8BPPMaskPalette@24 @ 0x21A690
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _HT_Get8BPPMaskPalette@24 @ 0x1BA810 (_HT_Get8BPPMaskPalette@24.c)
 *     ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F (-bSafeCopyBits@@YGHPAX0K@Z.c)
 *     ?bSafeReadBits@@YGHPAX0K@Z @ 0x216DC3 (-bSafeReadBits@@YGHPAX0K@Z.c)
 */

LONG __userpurge NtGdiHT_Get8BPPMaskPalette@<eax>(
        unsigned int a1@<ebx>,
        void *a2@<esi>,
        char *a3,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  unsigned int v8; // eax
  LONG v9; // edi
  size_t v10; // ebx
  struct tagPALETTEENTRY *v11; // esi
  struct tagPALETTEENTRY *v12; // eax
  void *v15; // [esp-8h] [ebp-Ch]
  unsigned int v17; // [esp-4h] [ebp-8h]

  v8 = HT_Get8BPPMaskPalette(0, Use8BPPMaskPal, CMYMask, RedGamma, GreenGamma, BlueGamma);
  v9 = v8;
  if ( a3 )
  {
    v10 = 4 * v8;
    v11 = 0;
    if ( (int)(4 * v8) <= 0
      || v8 > 0x9C4000
      || (v12 = (struct tagPALETTEENTRY *)PALLOCMEM2(4 * v8, 1886221639, 0), (v11 = v12) == 0)
      || !bSafeReadBits(a3, v12, 4 * v9, a2, a1)
      || (v9 = HT_Get8BPPMaskPalette(v11, Use8BPPMaskPal, CMYMask, RedGamma, GreenGamma, BlueGamma)) == 0
      || !bSafeCopyBits(v11, a3, v10, v15, v17) )
    {
      v9 = 0;
    }
    if ( v11 )
      Win32FreePool((PATHOBJ *)v11);
  }
  return v9;
}
