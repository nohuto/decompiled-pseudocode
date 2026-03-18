/*
 * XREFs of GreDereferenceObject @ 0x1C00AFA30
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C002366C (CreateOrGetRedirectionBitmap.c)
 *     ?CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z @ 0x1C002C794 (-CleanupShape@SFMLOGICALSURFACE@@QEAAXPEAVSURFACE@@@Z.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C004F130 (DeleteOrSetRedirectionBitmap.c)
 *     ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C006530C (-_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z.c)
 *     ?UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0075990 (-UntrapAppContainerRendering@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     UntrapAppContainerRenderingWrap @ 0x1C00759E0 (UntrapAppContainerRenderingWrap.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0077CC0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00AF918 (-CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z.c)
 * Callees:
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C01598B0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C015A84C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bValid@SURFREF@@QEBAHXZ @ 0x1C026E1A8 (-bValid@SURFREF@@QEBAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C026E634 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
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
