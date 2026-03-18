/*
 * XREFs of ?psoSpCreateSurface@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@KJJH@Z @ 0xA135A
 * Callers:
 *     _bSpEnableSprites@4 @ 0x9E6C6 (_bSpEnableSprites@4.c)
 *     ?bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z @ 0xA0A28 (-bSpUpdatePosition@@YGHPAVSPRITE@@PAU_POINTL@@HH@Z.c)
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 *     ?psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z @ 0x1DFA3C (-psoSpGetComposite@@YGPAU_SURFOBJ@@PAU_SPRITESTATE@@PAU_RECTL@@PAK@Z.c)
 *     ?vSpCreateExMirror@@YGXPAUHDEV__@@@Z @ 0x1E11AC (-vSpCreateExMirror@@YGXPAUHDEV__@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__userpurge psoSpCreateSurface@<eax>(
        ULONG a1@<edx>,
        HDEV *a2@<ecx>,
        SIZEL sizl,
        int a4,
        int a5,
        int a6)
{
  SURFOBJ *v7; // esi
  HBITMAP Bitmap; // eax
  SURFOBJ *v9; // eax
  HDEV v10; // ecx

  v7 = 0;
  if ( !a1 )
    a1 = *((_DWORD *)a2[4] + 11);
  Bitmap = EngCreateBitmap(sizl, 0, a1, 1u, 0);
  if ( Bitmap )
  {
    v9 = EngLockSurface((HSURF)Bitmap);
    v10 = *a2;
    v7 = v9;
    v9[1].dhpdev = (DHPDEV)((int)v9[1].dhpdev | 0x1000);
    v9->hdev = v10;
  }
  else
  {
    _DbgPrint("psoSpCreateSurface: Error allocating sprite bitmap\n");
  }
  return v7;
}
