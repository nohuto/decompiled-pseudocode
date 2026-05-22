/*
 * XREFs of ?GetFocusTarget@MPCFocusTarget@@UEAAPEAUIFocusInputTarget@@XZ @ 0x18001C590
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IFocusInputTarget *__fastcall MPCFocusTarget::GetFocusTarget(MPCFocusTarget *this)
{
  return (struct IFocusInputTarget *)*((_QWORD *)this + 1);
}
