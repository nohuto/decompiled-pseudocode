/*
 * XREFs of ?UpdateCaptureControllerTransform@CProjectionBorderManager@@UEAAJPEAUHWND__@@@Z @ 0x180090710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CProjectionBorderManager::UpdateCaptureControllerTransform(CProjectionBorderManager *this, HWND a2)
{
  return CProjectionBorderManager::_UpdateCaptureControllerProperty(
           this,
           CProjectionBorderManager::_UpdateCaptureControllerTransformFromWindow,
           a2);
}
