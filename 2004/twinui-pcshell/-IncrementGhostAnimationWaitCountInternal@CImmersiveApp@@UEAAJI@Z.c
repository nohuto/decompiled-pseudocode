/*
 * XREFs of ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18017E620
 * Callers:
 *     <none>
 * Callees:
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023DC0 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18002459C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180024678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0322_0001@@W4GHOST_STATUS@@@Z @ 0x18009427C (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18017DCCC (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::IncrementGhostAnimationWaitCountInternal(CImmersiveApp *this)
{
  CImmersiveApp::CImmersiveWindowCollection *v1; // rbx
  int v2; // edx
  int v3; // r8d

  v1 = (CImmersiveApp *)((char *)this + 184);
  if ( !CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 184)) )
    CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual((__int64)v1, 0, 4u);
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(v1) )
  {
    CImmersiveApp::CImmersiveWindowCollection::GhostAnimationWaitCompleted(v1);
    if ( CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(v1, v2, v3) )
      CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(v1);
  }
  return 2147947423LL;
}
