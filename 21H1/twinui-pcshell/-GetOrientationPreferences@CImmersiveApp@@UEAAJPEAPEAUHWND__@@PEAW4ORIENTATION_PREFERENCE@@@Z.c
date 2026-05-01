/*
 * XREFs of ?GetOrientationPreferences@CImmersiveApp@@UEAAJPEAPEAUHWND__@@PEAW4ORIENTATION_PREFERENCE@@@Z @ 0x180159120
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ @ 0x18001F24C (-GetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEBAPEAUHWND__@@XZ.c)
 */

__int64 __fastcall CImmersiveApp::GetOrientationPreferences(
        enum ORIENTATION_PREFERENCE *this,
        HWND *a2,
        enum ORIENTATION_PREFERENCE *a3)
{
  HWND ApplicationWindow; // r9
  __int64 result; // rax

  *a3 = ORIENTATION_PREFERENCE_NONE;
  ApplicationWindow = CImmersiveApp::CImmersiveWindowCollection::GetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)(this + 46));
  if ( !ApplicationWindow )
    *a3 = this[164];
  result = 0LL;
  *a2 = ApplicationWindow;
  return result;
}
