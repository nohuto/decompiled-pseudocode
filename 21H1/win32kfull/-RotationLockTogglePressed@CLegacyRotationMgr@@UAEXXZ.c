/*
 * XREFs of ?RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ @ 0x140B88
 * Callers:
 *     <none>
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UAE?AW4tagAR_STATE@@XZ @ 0xB21BA (-QueryAutoRotationState@CLegacyRotationMgr@@UAE-AW4tagAR_STATE@@XZ.c)
 *     ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98 (-xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z.c)
 *     ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z @ 0x1413BE (-xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AAEJH@Z.c)
 */

void __thiscall CLegacyRotationMgr::RotationLockTogglePressed(CLegacyRotationMgr *this)
{
  unsigned int AutoRotationState; // eax
  BOOL v3; // ebx
  CLegacyRotationMgr *v4; // ecx

  AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
  if ( AutoRotationState < 2 )
  {
    v3 = dword_2738D0 == 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_2738D0 == 0);
    CLegacyRotationMgr::xxxSetSlateAutoRotationState(v4, v3);
    PostShellHookMessagesEx(50, dword_2738D0, 0);
  }
  else if ( (AutoRotationState & 0x2E) == 0 )
  {
    CLegacyRotationMgr::xxxApplyDockedOrientation(this);
  }
}
