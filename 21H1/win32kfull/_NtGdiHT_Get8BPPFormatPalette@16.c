/*
 * XREFs of _NtGdiHT_Get8BPPFormatPalette@16 @ 0x21A628
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _HT_Get8BPPFormatPalette@16 @ 0x1BA735 (_HT_Get8BPPFormatPalette@16.c)
 *     ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F (-bSafeCopyBits@@YGHPAX0K@Z.c)
 */

int __userpurge NtGdiHT_Get8BPPFormatPalette@<eax>(
        unsigned int a1@<edi>,
        void *a2@<esi>,
        char *a3,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LONG v6; // edi
  struct tagPALETTEENTRY *v7; // eax
  PATHOBJ *v8; // ebx
  LONG v9; // esi

  if ( !a3 )
    return 216;
  v6 = 0;
  v7 = (struct tagPALETTEENTRY *)PALLOCMEM2(0x360u, 1886221639, 0);
  v8 = (PATHOBJ *)v7;
  if ( v7 )
  {
    v9 = HT_Get8BPPFormatPalette(v7, RedGamma, GreenGamma, BlueGamma);
    v6 = bSafeCopyBits(v8, a3, 0x360u, a2, a1) != 0 ? v9 : 0;
    Win32FreePool(v8);
  }
  return v6;
}
