/*
 * XREFs of ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180009934
 * Callers:
 *     ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18000D5A0 (-_CleanupNonStaticsResources@CAccent@@IEAAXXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x18000FC64 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 * Callees:
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180030B38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 */

void __fastcall CDesktopManager::SetBackStop(struct CAccent *a1)
{
  struct CAnalogCompositorManager *Instance; // rax

  *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32) = a1;
  Instance = CAnalogCompositorManager::GetInstance();
  *((_BYTE *)Instance + 80) = a1 != 0LL;
  CAnalogCompositorManager::UpdateHolographicLockState(Instance);
}
