/*
 * XREFs of ?GetDCompositionInteropDevice@CDesktopManager@@SAPEAUIDCompositionDesktopDevicePartner@@XZ @ 0x180011FCC
 * Callers:
 *     ?ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z @ 0x180011994 (-ValidateDevice@UdwmDcompVisual@@QEAAJPEA_N@Z.c)
 *     ?Initialize@UdwmDcompVisual@@QEAAJXZ @ 0x180011AA0 (-Initialize@UdwmDcompVisual@@QEAAJXZ.c)
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800451BC (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ @ 0x180045B94 (-AddNewRevealAmbientLight@CGlobalLightSet@@AEAAJXZ.c)
 *     ?AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180046098 (-AddNewSharedDistantLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Comp.c)
 *     ?AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composition@34@PEAUIExpressionAnimation@634@@Z @ 0x1800462A4 (-AddNewRevealSpotLightWithType@CGlobalLightSet@@AEAAJW4LightType@UI@Windows@@PEAUIVisual@Composi.c)
 *     ?ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004B728 (-ValidateDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180097210 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BA4E0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z @ 0x1800BAF78 (-AddCasterFromSharedHandle@CProjectedShadowScene@@QEAAJPEAX0PEAVCTopLevelWindow@@@Z.c)
 *     ?AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVisual@@@Z @ 0x1800BB068 (-AddCasterFromSharedHandle@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAXPEAVCVi.c)
 *     ?CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z @ 0x1800BB4F8 (-CreateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJ_K@Z.c)
 *     ?Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Composition@UI@Windows@@W4ProjectedShadowSceneType@5WindowsInternal@@@Z @ 0x1800BB930 (-Initialize@CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAAJPEAUICompositionLight@Comp.c)
 *     ?RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z @ 0x1800BBB70 (-RemoveCaster@CProjectedShadowScene@@QEAAJPEAVCTopLevelWindow@@@Z.c)
 * Callees:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180017FF0 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 */

struct IDCompositionDesktopDevicePartner *__fastcall CDesktopManager::GetDCompositionInteropDevice(CDesktopManager *a1)
{
  if ( (int)CDesktopManager::EnsureDCompositionInteropDevice(a1) < 0 )
    return 0LL;
  else
    return (struct IDCompositionDesktopDevicePartner *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 27);
}
