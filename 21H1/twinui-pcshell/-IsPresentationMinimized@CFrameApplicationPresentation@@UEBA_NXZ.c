/*
 * XREFs of ?IsPresentationMinimized@CFrameApplicationPresentation@@UEBA_NXZ @ 0x18007BE20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFrameApplicationPresentation::IsPresentationMinimized(HWND *this)
{
  return IsIconic(this[16]);
}
