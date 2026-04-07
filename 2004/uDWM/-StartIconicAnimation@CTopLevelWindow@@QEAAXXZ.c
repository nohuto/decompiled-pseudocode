/*
 * XREFs of ?StartIconicAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180095500
 * Callers:
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x180044A50 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z @ 0x18002C410 (-RegisterForGlobalTimeChangeNotification@CDesktopManager@@SAJPEAVCVisual@@@Z.c)
 *     ?HasAnimation@CTopLevelWindow@@AEAA_NXZ @ 0x180094A98 (-HasAnimation@CTopLevelWindow@@AEAA_NXZ.c)
 */

void __fastcall CTopLevelWindow::StartIconicAnimation(CTopLevelWindow *this)
{
  char v2; // dl
  struct CVisual *v3; // rcx

  if ( (*((_BYTE *)this + 240) & 0x40) == 0 )
  {
    if ( !CTopLevelWindow::HasAnimation(this) )
    {
      CDesktopManager::RegisterForGlobalTimeChangeNotification(v3);
      v2 = *((_BYTE *)this + 240);
    }
    *((_BYTE *)this + 240) = v2 | 0x40;
  }
}
