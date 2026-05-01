/*
 * XREFs of ?GetRect@CDropFeedbackItem@@UEAAXPEAUtagRECT@@@Z @ 0x1804076B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDropFeedbackItem::GetRect(CDropFeedbackItem *this, struct tagRECT *a2)
{
  CopyRect(a2, (const RECT *)((char *)this + 76));
}
