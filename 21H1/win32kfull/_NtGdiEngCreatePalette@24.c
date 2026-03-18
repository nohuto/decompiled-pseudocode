/*
 * XREFs of _NtGdiEngCreatePalette@24 @ 0x217FBE
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bSafeReadBits@@YGHPAX0K@Z @ 0x216DC3 (-bSafeReadBits@@YGHPAX0K@Z.c)
 *     ?bSecureBits@@YGHPAXKPAPAX@Z @ 0x216E2F (-bSecureBits@@YGHPAXKPAPAX@Z.c)
 */

HPALETTE __stdcall NtGdiEngCreatePalette(int a1, ULONG cColors, char *a3, FLONG a4, FLONG a5, FLONG a6)
{
  HANDLE v6; // ebx
  int v7; // edi
  int Bits; // eax
  HPALETTE v10; // edi
  ULONG v11; // edi
  HPALETTE Palette; // eax
  void *v13; // [esp+0h] [ebp-428h]
  void **v14; // [esp+4h] [ebp-424h]
  HANDLE SecureHandle; // [esp+1Ch] [ebp-40Ch] BYREF
  char *v16; // [esp+20h] [ebp-408h]
  ULONG pulColors[256]; // [esp+24h] [ebp-404h] BYREF

  v16 = a3;
  v6 = 0;
  v7 = a1;
  memset(pulColors, 0, sizeof(pulColors));
  SecureHandle = 0;
  if ( cColors > 0x10000 )
    return 0;
  if ( (a1 & 0xFFFF7FFF) == 1 && cColors )
  {
    if ( cColors <= 0x100 )
    {
      Bits = bSafeReadBits(v16, pulColors, 4 * cColors, v13, (unsigned int)v14);
    }
    else
    {
      Bits = bSecureBits(4 * cColors, v16, &SecureHandle, (unsigned int)v13, v14);
      v6 = SecureHandle;
    }
    v10 = (HPALETTE)Bits;
    if ( !Bits )
      goto LABEL_14;
    v7 = a1;
  }
  v11 = v7 | 0x8000;
  if ( cColors <= 0x100 )
    Palette = EngCreatePalette(v11, cColors, pulColors, a4, a5, a6);
  else
    Palette = EngCreatePalette(v11, cColors, (ULONG *)v16, a4, a5, a6);
  v10 = Palette;
LABEL_14:
  if ( v6 )
    MmUnsecureVirtualMemory(v6);
  return v10;
}
