/*
 * XREFs of ?SetShape@SFMLOGICALSURFACE@@QAEHPAUHDEV__@@PAU_SURFOBJ@@@Z @ 0x22FA6
 * Callers:
 *     _GreHintSpriteShape@28 @ 0x23FC0 (_GreHintSpriteShape@28.c)
 *     ?DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z @ 0x24A46 (-DeInitialize@SFMLOGICALSURFACE@@QAEXPAUHLSURF__@@W4_CLEANUPTYPE@@@Z.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z @ 0xAA854 (-vSpDwmMigrateSpriteLSurfReference@@YGXPAUHDEV__@@PAVSFMLOGICALSURFACE@@PAVSURFACE@@1@Z.c)
 *     _vSpDwmMigrateLSurfShapeReferenceWrap@12 @ 0xAEC6C (_vSpDwmMigrateLSurfShapeReferenceWrap@12.c)
 *     ?bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV3@@Z @ 0xC6572 (-bSpDwmCreateLogicalSurface@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAUtagSIZE@@PAPAV.c)
 *     _GreTransferDwmStateToSpriteState@8 @ 0xCF1B4 (_GreTransferDwmStateToSpriteState@8.c)
 *     _GreTransferSpriteStateToDwmState@8 @ 0xE11CA (_GreTransferSpriteStateToDwmState@8.c)
 * Callees:
 *     ?SpNotifyLSurfaceRedirSurfAssoc@@YGJQAUHDEV__@@PAUHLSURF__@@PAU_SURFOBJ@@H@Z @ 0x23086 (-SpNotifyLSurfaceRedirSurfAssoc@@YGJQAUHDEV__@@PAUHLSURF__@@PAU_SURFOBJ@@H@Z.c)
 */

BOOL __thiscall SFMLOGICALSURFACE::SetShape(SFMLOGICALSURFACE *this, HDEV a2, struct _SURFOBJ *a3)
{
  BOOL v4; // edi
  SURFOBJ *v5; // eax
  char v6; // cl
  SURFOBJ *v7; // eax
  int v8; // eax
  __int64 v10; // [esp-8h] [ebp-18h]
  struct _SURFOBJ *v11; // [esp+0h] [ebp-10h]
  int v12; // [esp+4h] [ebp-Ch]
  SURFOBJ *pso; // [esp+Ch] [ebp-4h]

  v4 = 0;
  v5 = (SURFOBJ *)*((_DWORD *)this + 28);
  pso = v5;
  if ( v5 || !a3 )
  {
    v6 = 0;
    if ( v5 && !a3 )
    {
      SURFACE::RemoveLSurf((SURFACE *)&v5[-1].lDelta, this);
      EngUnlockSurface(pso);
      if ( a2 )
        SpNotifyLSurfaceRedirSurfAssoc(*((HDEV *)this + 28), 0, v11, v12);
      v4 = 1;
      v10 = *(int *)(*((_DWORD *)this + 28) + 4);
      EtwLogicalSurfPhysSurfUnbindEvent(*(_DWORD *)this, *(int *)this >> 31, v10, HIDWORD(v10));
      v6 = 0;
    }
  }
  else
  {
    v6 = 1;
  }
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 39) &= ~2u;
  *((_DWORD *)this + 28) = a3;
  if ( v6 )
  {
    v7 = EngLockSurface(a3->hsurf);
    if ( v7 )
      SURFACE::AddLSurf((SURFACE *)&v7[-1].lDelta, this);
    *((_DWORD *)this + 39) |= 1u;
    v4 = 1;
    if ( a2 )
    {
      v8 = SpNotifyLSurfaceRedirSurfAssoc((HDEV)a3, (HLSURF)1, v11, v12);
      if ( v8 != -1073741822 && v8 < 0 )
        v4 = 0;
    }
    EtwLogicalSurfPhysSurfBindEvent(*(_DWORD *)this, *(int *)this >> 31, a3->hsurf, (int)a3->hsurf >> 31);
  }
  return v4;
}
