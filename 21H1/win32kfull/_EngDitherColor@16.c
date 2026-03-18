/*
 * XREFs of _EngDitherColor@16 @ 0x1E7B57
 * Callers:
 *     ?bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@Z@Z @ 0x95996 (-bGetRealizedBrush@@YGHPAVBRUSH@@PAVEBRUSHOBJ@@P6GHPAU_BRUSHOBJ@@PAU_SURFOBJ@@33PAU_XLATEOBJ@@K@.c)
 *     ?PanDitherColor@@YGKPAUDHPDEV__@@KKPAK@Z @ 0x1F5A94 (-PanDitherColor@@YGKPAUDHPDEV__@@KKPAK@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?vComputeSubspaces@@YGPAU_VERTEX_DATA@@KPAU1@@Z @ 0x1E7464 (-vComputeSubspaces@@YGPAU_VERTEX_DATA@@KPAU1@@Z.c)
 *     ?vDitherColor4bpp@@YGXPAKPAU_VERTEX_DATA@@1K@Z @ 0x1E76B7 (-vDitherColor4bpp@@YGXPAKPAU_VERTEX_DATA@@1K@Z.c)
 *     ?vDitherColor8bpp@@YGXPAKPAU_VERTEX_DATA@@1K@Z @ 0x1E7943 (-vDitherColor8bpp@@YGXPAKPAU_VERTEX_DATA@@1K@Z.c)
 */

ULONG __stdcall EngDitherColor(HDEV hdev, ULONG iMode, ULONG rgb, ULONG *pul)
{
  ULONG result; // eax
  int v5; // edi
  unsigned int *v6; // eax
  unsigned int i; // edx
  int v8; // ecx
  int v9; // [esp-4h] [ebp-38h]
  struct _VERTEX_DATA *v10; // [esp+0h] [ebp-34h]
  unsigned int v11; // [esp+4h] [ebp-30h]
  unsigned int v12[8]; // [esp+10h] [ebp-24h] BYREF

  result = 0;
  if ( *((_WORD *)hdev + 704) == 8 && *((_WORD *)hdev + 705) == 8 )
  {
    if ( iMode == 2 )
    {
      memset(pul, 0, 0x20u);
      for ( i = ((unsigned int)(unsigned __int8)((unsigned __int16)(28 * BYTE2(rgb)
                                                                  + 77 * (unsigned __int8)rgb
                                                                  + 151 * BYTE1(rgb)) >> 8)
               + 1) >> 2; i; pul[v8] |= (unsigned __int8)byte_25D390[i] )
        v8 = (unsigned __int8)byte_25D3CF[i--];
      return 1;
    }
    v5 = *((_DWORD *)hdev + 351);
    if ( v5 == 3 || v5 == 2 )
    {
      v6 = (unsigned int *)vComputeSubspaces(rgb, (int *)v12);
      v9 = ((char *)v6 - (char *)v12) >> 3;
      if ( v5 == 3 )
        vDitherColor8bpp(v12, (unsigned int **)pul, v6, (struct _VERTEX_DATA *)v9, v10, v11);
      else
        vDitherColor4bpp(v12, pul, v6, (struct _VERTEX_DATA *)v9, v10, v11);
      return 1;
    }
  }
  return result;
}
