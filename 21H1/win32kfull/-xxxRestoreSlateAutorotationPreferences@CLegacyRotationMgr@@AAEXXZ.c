/*
 * XREFs of ?xxxRestoreSlateAutorotationPreferences@CLegacyRotationMgr@@AAEXXZ @ 0x140FCE
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ @ 0xB20A4 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ.c)
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z.c)
 */

void __thiscall CLegacyRotationMgr::xxxRestoreSlateAutorotationPreferences(CLegacyRotationMgr *this)
{
  if ( *(_DWORD *)dword_273900 != dword_2738D0 )
  {
    dword_2738F0 = 0;
    CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, dword_273900[0]);
    PostShellHookMessagesEx(50, dword_2738D0, 0);
  }
}
