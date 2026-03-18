/*
 * XREFs of ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x18000ECE4
 * Callers:
 *     ?RequestRedraw@CProjectedShadowCaster@@QEAAXXZ @ 0x18000660C (-RequestRedraw@CProjectedShadowCaster@@QEAAXXZ.c)
 *     ?SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z @ 0x18000EA94 (-SetBlurRadiusMultiplier@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x18000EADC (-SetMaxBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z @ 0x18000EB28 (-SetOpacityFalloff@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x18000EB64 (-SetMaxOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z @ 0x18000EBC8 (-SetMinOpacity@CProjectedShadowScene@@AEAAXM@Z.c)
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x18000EC74 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ?NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18000ECC0 (-NotifyOnChanged@CProjectedShadowScene@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_SETLIGHTSOURCE@@@Z @ 0x18000ED5C (-ProcessSetLightSource@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSH.c)
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x18000F638 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOW.c)
 *     ?SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z @ 0x180021110 (-SetMinBlurRadius@CProjectedShadowScene@@AEAAXM@Z.c)
 * Callees:
 *     ?RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ @ 0x18000ED24 (-RequestRedraw@CProjectedShadowReceiver@@QEAAXXZ.c)
 */

void __fastcall CProjectedShadowScene::RequestRedrawAll(CProjectedShadowScene *this)
{
  __int64 ***v1; // rdi
  __int64 **i; // rbx

  if ( !CCommonRegistryData::DisableProjectedShadows )
  {
    v1 = (__int64 ***)*((_QWORD *)this + 9);
    for ( i = *v1; i != (__int64 **)v1; i = (__int64 **)*i )
      CProjectedShadowReceiver::RequestRedraw((CProjectedShadowReceiver *)i[2]);
  }
}
