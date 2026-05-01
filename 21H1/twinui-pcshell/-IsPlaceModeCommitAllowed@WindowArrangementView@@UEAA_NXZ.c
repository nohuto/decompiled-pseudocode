/*
 * XREFs of ?IsPlaceModeCommitAllowed@WindowArrangementView@@UEAA_NXZ @ 0x180085F10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall WindowArrangementView::IsPlaceModeCommitAllowed(WindowArrangementView *this)
{
  return *((_QWORD *)this + 7) != 0LL;
}
