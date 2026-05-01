/*
 * XREFs of ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x180023C90
 * Callers:
 *     ?PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z @ 0x180020AD8 (-PresentWindowInFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUITaskWindow@@@Z.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180024020 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSource@@@Z @ 0x18017B8E0 (-ClearVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4VisibilityOverrideSour.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18017E4D4 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&_::Invoke @ 0x18017EF60 (CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__-_--Invoke.c)
 *     ?SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TRANSITION_TYPE@@@Z @ 0x180181C1C (-SetPendingApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@W4APP_TR.c)
 *     ?SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4VisibilityOverrideSource@@@Z @ 0x180181EF8 (-SetVisibilityOverride@CImmersiveWindowCollection@CImmersiveApp@@QEAAJW4ViewVisibilityState@@W4V.c)
 *     ?_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ @ 0x180183088 (-_CleanupPendingPresentedWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAXXZ.c)
 * Callees:
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180020D9C (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180020F20 (-IsPresentationInProgress@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023DC0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180023E40 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180024678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0001@@W4GHOST_STATUS@@@Z @ 0x18009427C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x180180580 (-QueueAyncVisibilityReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
        CImmersiveApp::CImmersiveWindowCollection *this)
{
  char *v2; // rax
  char *v3; // rdx
  char *v4; // rcx
  unsigned int v5; // edi
  unsigned __int64 i; // rsi
  bool v7; // dl
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx

  if ( !*((_QWORD *)this + 22) )
    return 0LL;
  v2 = (char *)this + 216;
  v3 = (char *)this + 248;
  v4 = v2;
  if ( v2 != v3 )
  {
    while ( !*v4 )
    {
      v4 += 8;
      if ( v4 == v3 )
        goto LABEL_5;
    }
    v5 = 2;
    do
    {
      if ( *v2 )
      {
        if ( !*((_DWORD *)v2 + 1) )
          goto LABEL_13;
        if ( *((_DWORD *)v2 + 1) == 1 )
          v5 = 1;
      }
      v2 += 8;
    }
    while ( v2 != v3 );
LABEL_14:
    if ( v5 != 2 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19)) )
        CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus((__int64)this, 0x10u);
      else
        CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(this, 0LL, 16LL);
      if ( CImmersiveApp::CImmersiveWindowCollection::IsPresentationInProgress(this) )
      {
        CImmersiveApp::CImmersiveWindowCollection::QueueAyncVisibilityReconciliation(this);
        return 0LL;
      }
    }
    goto LABEL_7;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 200) )
  {
LABEL_13:
    v5 = 0;
    goto LABEL_14;
  }
  v5 = 2;
LABEL_7:
  (*(void (__fastcall **)(_QWORD, _QWORD))(***((_QWORD ***)this + 21) + 224LL))(**((_QWORD **)this + 21), v5);
  for ( i = 1LL; i < *((_QWORD *)this + 22); ++i )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 216LL))(v9);
    v11 = *(_QWORD *)(*((_QWORD *)this + 21) + 8 * i);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 224LL))(v11, v10 != 0 ? v5 : 0);
  }
  if ( v5 == 2 )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 56LL))(*((_QWORD *)this + 19)) )
    {
      CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(this, 16LL);
      if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(this) )
        CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this, v7);
    }
  }
  return 0LL;
}
