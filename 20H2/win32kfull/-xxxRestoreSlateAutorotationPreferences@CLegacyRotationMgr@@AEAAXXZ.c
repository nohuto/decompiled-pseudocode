/*
 * XREFs of ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AEAAXXZ @ 0x1C01D1228
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ @ 0x1C00152F0 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UEAAXXZ.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00BF158 (PostShellHookMessagesEx.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01D15C4 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AEAAJH@Z.c)
 */

void __fastcall CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(CLegacyRotationMgr *this)
{
  if ( dword_1C0335668 != dword_1C0335638 )
  {
    dword_1C0335658 = 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_1C0335668);
    PostShellHookMessagesEx(0x32u, dword_1C0335638, 0LL);
  }
}
