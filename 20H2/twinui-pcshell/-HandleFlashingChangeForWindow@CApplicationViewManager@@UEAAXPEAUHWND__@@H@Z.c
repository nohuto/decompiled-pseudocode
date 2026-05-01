/*
 * XREFs of ?HandleFlashingChangeForWindow@CApplicationViewManager@@UEAAXPEAUHWND__@@H@Z @ 0x18018EFA0
 * Callers:
 *     <none>
 * Callees:
 *     CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___ @ 0x18018CC70 (CApplicationViewManager--_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___.c)
 */

void __fastcall CApplicationViewManager::HandleFlashingChangeForWindow(CApplicationViewManager *this, HWND a2, int a3)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v3 = a2;
  *((_QWORD *)&v3 + 1) = (char *)this - 160;
  CApplicationViewManager::_HandleFlashingChange__lambda_d2283a63d6b85274b5dfb750ad5a931e___(
    (__int64)this - 160,
    &v3,
    a3);
}
