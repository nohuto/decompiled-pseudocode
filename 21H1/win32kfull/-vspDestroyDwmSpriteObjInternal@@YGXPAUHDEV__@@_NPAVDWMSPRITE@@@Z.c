/*
 * XREFs of ?vspDestroyDwmSpriteObjInternal@@YGXPAUHDEV__@@_NPAVDWMSPRITE@@@Z @ 0xA3F2E
 * Callers:
 *     ?GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z @ 0x1BBC6 (-GreDeleteSpriteInternal@@YGJPAUHDEV__@@PAUHWND__@@PAXH@Z.c)
 *     ?hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z @ 0x1EF6E (-hspCreateDwmSpriteObj@@YGPAUHSPRITE__@@PAUHWND__@@KPAUHDEV__@@H@Z.c)
 *     ?GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG@Z @ 0x1F714 (-GreCreateSpriteInternal@@YGPAXPAUHDEV__@@PAUHWND__@@PAUtagRECT@@PAUtagMINIWINDOWINFO@@KHHHHHPBG.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreDeleteSpriteDelayDelete@16 @ 0x1CDFF8 (_GreDeleteSpriteDelayDelete@16.c)
 * Callees:
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z @ 0x21CFA (-StopSfmStateTracking@SFMLOGICALSURFACE@@QAEJPAUHDEV__@@PAUSfmState@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z @ 0x24476 (-bhLSurfDestroyLogicalSurfaceObject@@YGHPAVSFMLOGICALSURFACE@@HW4_CLEANUPTYPE@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z @ 0x246B2 (-SetLogicalSurface@DWMSPRITE@@QAEXPAUHDEV__@@PAVSFMLOGICALSURFACE@@@Z.c)
 *     ?CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ @ 0x24AAC (-CleanupRegions@SFMLOGICALSURFACE@@QAEXXZ.c)
 *     ?vspRemoveStateReferencesForSprite@@YGXPAVDWMSPRITE@@@Z @ 0xA3FEA (-vspRemoveStateReferencesForSprite@@YGXPAVDWMSPRITE@@@Z.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 */

void __userpurge vspDestroyDwmSpriteObjInternal(
        unsigned __int8 a1@<dl>,
        HDEV a2@<ecx>,
        HDEV a3,
        bool a4,
        struct DWMSPRITE *a5)
{
  int v5; // edi
  int v6; // ebx
  int v7; // eax
  struct DWMSPRITE *v8; // [esp+0h] [ebp-18h]
  int *v9; // [esp+4h] [ebp-14h]

  if ( a3 )
  {
    v5 = *((_DWORD *)a3 + 34);
    v6 = (_DWORD)a3[33] & 0x10;
    if ( *((int *)a3 + 19) >= 1 )
      CheckAndProcessWindowResizeComplete(0, (int)v8, v9);
    if ( v5 )
    {
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)a3, a2, 0);
      SFMLOGICALSURFACE::CleanupRegions((REGION **)v5);
      v7 = *(_DWORD *)(v5 + 156);
      if ( (v7 & 0x80u) != 0 && (v7 & 8) != 0 && (v7 & 0x10) != 0 )
      {
        *(_DWORD *)(v5 + 156) = v7 & 0xFFFFFFEF;
        SFMLOGICALSURFACE::StopSfmStateTracking((SFMLOGICALSURFACE *)v5, a2, gpSfmState);
      }
      bhLSurfDestroyLogicalSurfaceObject((int *)v5, 1, 0);
    }
    if ( !v6 )
      vspRemoveStateReferencesForSprite(v8);
    if ( !*(_DWORD *)a3
      || (EtwDwmSpriteDestroyEvent(0, 0, *(_DWORD *)a3, *(_DWORD *)a3 >> 31),
          HmgRemoveObject(*(_DWORD *)a3, a1, 0, 1, 15, 0)) )
    {
      FreeObject(a3, 15);
    }
    --*((_DWORD *)g_pDwmState + 13);
  }
}
