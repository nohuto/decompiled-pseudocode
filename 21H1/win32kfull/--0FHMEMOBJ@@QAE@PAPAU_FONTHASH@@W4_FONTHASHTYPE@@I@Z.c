/*
 * XREFs of ??0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0xE7E30
 * Callers:
 *     ?bInitPrivatePFT@@YGHXZ @ 0x1D0823 (-bInitPrivatePFT@@YGHXZ.c)
 *     ?bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z @ 0x221B4A (-bLoadDeviceFontTable@PFFMEMOBJ@@QAEHPAVPDEVOBJ@@@Z.c)
 *     _bInitFontTables@0 @ 0x292DA4 (_bInitFontTables@0.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vInit@FHOBJ@@QAEXW4_FONTHASHTYPE@@I@Z @ 0xE7E84 (-vInit@FHOBJ@@QAEXW4_FONTHASHTYPE@@I@Z.c)
 */

int **__thiscall FHMEMOBJ::FHMEMOBJ(int **this, int *a2, int a3, unsigned int a4)
{
  int *v5; // eax

  *this = a2;
  if ( a4 > 0x3FFFFFF8 )
    *a2 = 0;
  else
    **this = (int)PALLOCMEM2(4 * a4 + 28, 1935763527, 1);
  v5 = (int *)**this;
  this[1] = v5;
  if ( v5 )
    FHOBJ::vInit(this, a3, a4);
  return this;
}
