/*
 * XREFs of ?IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ @ 0x18007C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFrameApplicationPresentation::IsPresentationMinimized(HWND *this)
{
  return IsIconic(this[16]);
}
