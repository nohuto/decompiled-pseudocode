/*
 * XREFs of NtGdiHT_Get8BPPFormatPalette @ 0x1C02B4F80
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C0147EB4 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     HT_Get8BPPFormatPalette @ 0x1C0262510 (HT_Get8BPPFormatPalette.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPFormatPalette(char *a1, USHORT a2, USHORT a3, USHORT a4)
{
  unsigned int v4; // ebx
  struct tagPALETTEENTRY *v9; // rax
  struct tagPALETTEENTRY *v10; // rdi
  LONG v11; // ebx

  v4 = 0;
  if ( !a1 )
    return 216LL;
  v9 = (struct tagPALETTEENTRY *)PALLOCMEM2(0x360uLL, 1886221639LL, 0);
  v10 = v9;
  if ( v9 )
  {
    v11 = HT_Get8BPPFormatPalette(v9, a2, a3, a4);
    v4 = (unsigned int)bSafeCopyBits(a1, v10, 0x360u) != 0 ? v11 : 0;
    Win32FreePool(v10);
  }
  return v4;
}
