/*
 * XREFs of ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18002A2C0
 * Callers:
 *     ?BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z @ 0x180010040 (-BeginDestroySprite@CTopLevelWindow3D@@QEAAJPEA_N@Z.c)
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180015CD8 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18002A3C8 (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType@1@@Z @ 0x18002A3EC (-IsTransitionEnabledForWindowGroup@CTopLevelWindow3D@@CA_NPEBVCWindowData@@W4WindowAnimationType.c)
 *     ?IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z @ 0x18002A45C (-IsFeatureEnabled@CDesktopManager@@SA_NW4DwmFeature@1@@Z.c)
 *     ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800837A4 (-_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z.c)
 */

char __fastcall CTopLevelWindow3D::ShouldShowTransition(__int64 a1, unsigned int a2)
{
  char v4; // r8
  __int64 v5; // rdx
  char v6; // bl
  CLivePreview *v8; // rcx
  bool v9; // al
  __int64 v10; // rax

  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 328) + 608LL);
  if ( (v4 & 0x10) != 0 )
    return 0;
  if ( (v4 & 0x20) != 0 )
    return 0;
  if ( CDesktopManager::CheckAnyPreference(0x10u) )
    return 0;
  v5 = *(_QWORD *)(a1 + 328);
  if ( (*(_DWORD *)(v5 + 100) & 0xC00000) != 0xC00000 && *(char *)(v5 + 612) >= 0 )
    return 0;
  if ( *(char *)(v5 + 104) < 0 )
    return 0;
  v6 = 1;
  if ( (*(_BYTE *)(v5 + 608) & 1) == 0 )
    return 0;
  if ( (*(_BYTE *)(v5 + 612) & 2) != 0 )
    return 0;
  if ( !*(_BYTE *)(v5 + 352) )
    return 0;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    return 0;
  if ( *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance + 8) >= *((_DWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 181) )
  {
    v10 = *(_QWORD *)(a1 + 360);
    if ( !v10 || *(_BYTE *)(v10 + 72) )
      return 0;
  }
  v8 = (CLivePreview *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 64);
  v9 = *((_BYTE *)v8 + 280) && v5 && CLivePreview::_IsInLivePreview(v8, (const struct CWindowData *)v5);
  if ( v9
    || !(unsigned __int8)CDesktopManager::IsFeatureEnabled(1LL)
    || !(unsigned __int8)CTopLevelWindow3D::IsTransitionEnabledForWindowGroup(*(_QWORD *)(a1 + 328), a2) )
  {
    return 0;
  }
  return v6;
}
