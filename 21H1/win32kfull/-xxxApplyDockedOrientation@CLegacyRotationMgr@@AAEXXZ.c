/*
 * XREFs of ?xxxApplyDockedOrientation@CLegacyRotationMgr@@AAEXXZ @ 0x140D98
 * Callers:
 *     ?xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ @ 0xB20A4 (-xxxRefreshDisplayOrientation@CLegacyRotationMgr@@UAEXXZ.c)
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ @ 0x140B88 (-RotationLockTogglePressed@CLegacyRotationMgr@@UAEXXZ.c)
 * Callees:
 *     _PostShellHookMessagesEx@12 @ 0x17156 (_PostShellHookMessagesEx@12.c)
 *     ?QueryAutoRotationState@CLegacyRotationMgr@@UAE?AW4tagAR_STATE@@XZ @ 0xB21BA (-QueryAutoRotationState@CLegacyRotationMgr@@UAE-AW4tagAR_STATE@@XZ.c)
 *     ?GetDockedOrientationValue@CLegacyRotationMgr@@AAEKPAK@Z @ 0x14086D (-GetDockedOrientationValue@CLegacyRotationMgr@@AAEKPAK@Z.c)
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 *     ?xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z @ 0x1412C3 (-xxxSetAutoRotationStateInternal@CLegacyRotationMgr@@AAEJH@Z.c)
 *     ?TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z @ 0x186F6A (-TraceLoggingScreenOrientationChangeEvent@@YGXKW4arInitiatedBy@@HW4arFailureReason@@@Z.c)
 */

void __thiscall CLegacyRotationMgr::xxxApplyDockedOrientation(CLegacyRotationMgr *this)
{
  unsigned int DockedOrientationValue; // edi
  int AutoRotationState; // eax
  unsigned int *v4; // ecx
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v8 = 0;
  DockedOrientationValue = 0;
  if ( dword_2738F4 )
  {
    AutoRotationState = CLegacyRotationMgr::QueryAutoRotationState(this);
    v5 = AutoRotationState;
    if ( AutoRotationState == 64 || AutoRotationState == 128 || AutoRotationState == 192 )
    {
      DockedOrientationValue = CLegacyRotationMgr::GetDockedOrientationValue(this, v4);
    }
    else if ( AutoRotationState == 65 || AutoRotationState == 129 || AutoRotationState == 193 )
    {
      DockedOrientationValue = *(_DWORD *)Data;
    }
    v6 = CLegacyRotationMgr::xxxRotateScreen((CLegacyRotationMgr *)v4, DockedOrientationValue, 0, &v8);
    if ( !v6 )
    {
      if ( v8 )
      {
        v7 = 1001;
      }
      else
      {
        v6 = 1;
        v7 = 1000;
      }
      TraceLoggingScreenOrientationChangeEvent(DockedOrientationValue, 2, v6, v7);
      if ( v5 == 64 || v5 == 128 || v5 == 192 )
      {
        CLegacyRotationMgr::xxxSetAutoRotationStateInternal(this, 0);
        PostShellHookMessagesEx(50, dword_2738D0, 0);
      }
    }
  }
}
