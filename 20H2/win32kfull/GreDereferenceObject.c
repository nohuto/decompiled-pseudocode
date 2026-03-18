/*
 * XREFs of GreDereferenceObject @ 0x1C00936F4
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0090950 (CreateOrGetRedirectionBitmap.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00935DC (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0098A34 (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00A1070 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00A10C0 (UntrapAppContainerRenderingWrap.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C135C (DeleteOrSetRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C00C3448 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C00A5340 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C012B0F8 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C015D9B8 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026D014 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 */

__int64 __fastcall GreDereferenceObject(HSURF a1, unsigned int a2)
{
  unsigned int v4; // ebx
  char v6; // [rsp+20h] [rbp-18h]
  char v7; // [rsp+50h] [rbp+18h] BYREF

  SURFREF::SURFREF((SURFREF *)&v7, a1);
  v4 = 0;
  if ( (unsigned int)SURFREF::bValid((SURFREF *)&v7) )
  {
    if ( ((unsigned int)a1 & 0x800000) != 0 )
    {
      EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
    }
    else
    {
      v6 = 5;
      if ( !HmgShareUnlockRemoveObject(a1, 0LL, 1LL, a2, v6) || !(unsigned int)SURFREF::bDeleteSurface(&v7, 0LL, 1LL) )
        v4 = -1073741823;
    }
  }
  else
  {
    v4 = -1073741816;
  }
  EPALOBJ::~EPALOBJ((EPALOBJ *)&v7);
  return v4;
}
