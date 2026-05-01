/*
 * XREFs of ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x18015D0B0
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x1800211F0 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x1800237F0 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18015F764 (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
        CImmersiveApp::CImmersiveWindowCollection *this,
        __int64 a2)
{
  unsigned __int64 i; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  (*(void (__fastcall **)(_QWORD))(***((_QWORD ***)this + 21) + 144LL))(**((_QWORD **)this + 21));
  for ( i = 0LL; i < *((_QWORD *)this + 22); ++i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 216LL))(v5) )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 144LL))(v6, a2);
    }
  }
}
