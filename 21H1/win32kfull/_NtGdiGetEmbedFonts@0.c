/*
 * XREFs of _NtGdiGetEmbedFonts@0 @ 0x212E2D
 * Callers:
 *     <none>
 * Callees:
 *     ?GetEmbedFonts@PUBLIC_PFTOBJ@@QAEKXZ @ 0x1D03AC (-GetEmbedFonts@PUBLIC_PFTOBJ@@QAEKXZ.c)
 */

int __stdcall NtGdiGetEmbedFonts()
{
  int v0; // ecx
  struct PFT *v2; // [esp+0h] [ebp-4h] BYREF

  v0 = 0;
  v2 = gpPFTPrivate;
  if ( gpPFTPrivate && *((_DWORD *)gpPFTPrivate + 4) )
    return PUBLIC_PFTOBJ::GetEmbedFonts(&v2);
  return v0;
}
