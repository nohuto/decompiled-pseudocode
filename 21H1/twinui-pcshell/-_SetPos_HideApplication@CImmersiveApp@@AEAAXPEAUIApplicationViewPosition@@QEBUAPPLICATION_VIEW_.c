/*
 * XREFs of ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18015F764
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800211F0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 * Callees:
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x1800239BC (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x18015D0B0 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18015F1AC (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::_SetPos_HideApplication(__int64 a1, __int64 a2, _OWORD *a3, char a4, unsigned int a5)
{
  void (__fastcall *v9)(__int64, __int64 *); // rbx
  __int64 result; // rax
  __int64 v11[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a5 == 2 )
  {
    v11[0] = 0LL;
    v9 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(a1 + 112) + 464LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
    v9(a1 + 112, v11);
    if ( (unsigned int)CImmersiveApp::_UpdateApplication(a1, a2, a3, a4) == 1 )
      CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
        (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 296),
        9LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  }
  result = CImmersiveApp::_HideApplication(a1, a5);
  if ( a5 != 2 )
    return CImmersiveApp::_UpdateApplication(a1, a2, a3, a4);
  return result;
}
