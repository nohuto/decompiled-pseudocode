/*
 * XREFs of ?EnsureTls@UmfdTls@@SGPAV1@XZ @ 0x8BCF4
 * Callers:
 *     ?UmfdEscXFORMOBJ_iGetXform@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8AFFE (-UmfdEscXFORMOBJ_iGetXform@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     _UmfdCreateUsermodeDdiParameters@16 @ 0x8B614 (_UmfdCreateUsermodeDdiParameters@16.c)
 *     ?UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x8BA08 (-UmfdEscSendCompleteWaitReceive@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z @ 0x8BB2A (-UmfdHostSendCompleteWaitReceive@@YGJW4FontDriverType@@@Z.c)
 *     _UmfdCaptureUsermodeDdiParameters@0 @ 0x8BCCC (_UmfdCaptureUsermodeDdiParameters@0.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ @ 0xCFF72 (-UninitializeThread@UmfdHostLifeTimeManager@@SGXXZ.c)
 *     ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA (-ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z.c)
 *     ?UmfdEscFONTOBJ_pifi@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCDEC (-UmfdEscFONTOBJ_pifi@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCloseFigure@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCE17 (-UmfdEscPATHOBJ_bCloseFigure@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YGHP6GHPAU_PATHOBJ@@PAU_POINTFIX@@K@Z01K@Z @ 0x1FCE3C (-UmfdEscPATHOBJ_bCommonTo@@YGHP6GHPAU_PATHOBJ@@PAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdEscPATHOBJ_bMoveTo@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1FCF1B (-UmfdEscPATHOBJ_bMoveTo@@YGXPAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?Create@UmfdTls@@CGPAV1@XZ @ 0xE91AE (-Create@UmfdTls@@CGPAV1@XZ.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

struct UmfdTls *__stdcall UmfdTls::EnsureTls()
{
  PKTHREAD CurrentThread; // esi
  int *ThreadWin32Thread; // eax
  int v2; // esi
  struct UmfdTls *result; // eax

  CurrentThread = KeGetCurrentThread();
  if ( IsThreadCrossSessionAttached() )
    return 0;
  ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return 0;
  v2 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return 0;
  result = *(struct UmfdTls **)(v2 + 200);
  if ( !result )
  {
    result = UmfdTls::Create();
    *(_DWORD *)(v2 + 200) = result;
  }
  return result;
}
