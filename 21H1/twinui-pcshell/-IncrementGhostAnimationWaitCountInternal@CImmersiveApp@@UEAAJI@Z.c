/*
 * XREFs of ?IncrementGhostAnimationWaitCountInternal@CImmersiveApp@@UEAAJI@Z @ 0x18015A270
 * Callers:
 *     <none>
 * Callees:
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0321_0001@@W4GHOST_STATUS@@@Z @ 0x180020C98 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023590 (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x180023D6C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180023E48 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x18015991C (-GhostAnimationWaitCompleted@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
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
