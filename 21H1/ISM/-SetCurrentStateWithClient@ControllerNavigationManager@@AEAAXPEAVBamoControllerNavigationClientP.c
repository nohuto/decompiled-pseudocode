/*
 * XREFs of ?SetCurrentStateWithClient@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011E1D8
 * Callers:
 *     ?OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z @ 0x180019390 (-OnTargetWithFocusChanged@InputStateManager@@UEAAJPEAUIInputTarget@@0@Z.c)
 *     ?ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011CCF8 (-ClientStateChanged@ControllerNavigationManager@@QEAAXPEAVBamoControllerNavigationClientProxy@@@.c)
 *     ?RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011D9C0 (-RegisterClient@ControllerNavigationManager@@MEAAJPEAVBamoControllerNavigationManagerStub@@PEAVB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?DisableNavigation@ControllerNavigationManager@@AEAAXXZ @ 0x18011CF2C (-DisableNavigation@ControllerNavigationManager@@AEAAXXZ.c)
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011D004 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 */

void __fastcall ControllerNavigationManager::SetCurrentStateWithClient(
        ControllerNavigationManager *this,
        struct BamoControllerNavigationClientProxy *a2)
{
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)a2 + 1) + 32LL))((char *)a2 + 8) )
    ControllerNavigationManager::EnableNavigation(this, a2);
  else
    ControllerNavigationManager::DisableNavigation(this);
}
