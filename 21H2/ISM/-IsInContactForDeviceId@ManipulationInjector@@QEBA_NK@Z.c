/*
 * XREFs of ?IsInContactForDeviceId@ManipulationInjector@@QEBA_NK@Z @ 0x1800C3B20
 * Callers:
 *     ?DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040A70 (-DownLevelDragTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040AF0 (-DownLevelHoverTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040B88 (-DownLevelPressTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040C58 (-DownLevelReleaseTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040D64 (-DownLevelScrollTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z @ 0x180040ED8 (-DownLevelZoomTo2D@MPCGestureHandler@@AEAAXPEAULegacyInputInfo@@KUtagPOINT@@@Z.c)
 *     ?IsInjecting@MPCGestureHandler@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18006BA68 (-IsInjecting@MPCGestureHandler@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C250C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C33C8 (-InjectDrag@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 *     ?InjectPan@ManipulationInjector@@QEAAXMMK@Z @ 0x1800C3504 (-InjectPan@ManipulationInjector@@QEAAXMMK@Z.c)
 *     ?InjectZoom@ManipulationInjector@@QEAAXMK@Z @ 0x1800C38D8 (-InjectZoom@ManipulationInjector@@QEAAXMK@Z.c)
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z @ 0x1800C3F40 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ManipulationInjector::IsInContactForDeviceId(ManipulationInjector *this, int a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r8d
  _DWORD *v4; // r9
  _DWORD *i; // rcx

  v2 = *((_DWORD *)this + 12);
  v3 = 0;
  if ( !v2 )
    return 0;
  v4 = (_DWORD *)((char *)this + 124);
  for ( i = (_DWORD *)((char *)this + 712); *i != a2 || ((*v4 - 65542) & 0xFFFEFFFF) != 0; ++i )
  {
    ++v3;
    v4 += 38;
    if ( v3 >= v2 )
      return 0;
  }
  return 1;
}
