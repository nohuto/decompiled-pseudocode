/*
 * XREFs of ?ResetFeedbackTarget@DragData@@UEAAXXZ @ 0x18008B770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragData::ResetFeedbackTarget(DragData *this)
{
  *((_QWORD *)this + 12) = 0xFFFFFFFF00000000uLL;
}
