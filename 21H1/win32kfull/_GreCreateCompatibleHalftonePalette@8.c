/*
 * XREFs of _GreCreateCompatibleHalftonePalette@8 @ 0xADC12
 * Callers:
 *     _NtGdiCreateHalftonePalette@4 @ 0xADC08 (_NtGdiCreateHalftonePalette@4.c)
 *     ?DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z @ 0x1D12FD (-DrvRealizeHalftonePalette@@YGPAVPALETTE@@PAUHDEV__@@H@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall GreCreateCompatibleHalftonePalette(int a1, char a2)
{
  int v3; // esi
  int *v5; // [esp+20h] [ebp-8h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  v6 = 0;
  v5 = 0;
  if ( PALMEMOBJ::bCreatePalette(
         (PALMEMOBJ *)&v5,
         1u,
         0x100u,
         (const unsigned int *)&aPalHalftone,
         0,
         0,
         0,
         0x100500u,
         a2 & 8) )
  {
    v5[4] |= 0x100000u;
    v6 = 1;
    v3 = *v5;
    if ( (a2 & 2) != 0 )
      v5 = 0;
  }
  else
  {
    v3 = 0;
  }
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v5);
  return v3;
}
