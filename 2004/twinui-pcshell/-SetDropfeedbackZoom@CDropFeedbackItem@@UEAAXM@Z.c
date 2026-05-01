/*
 * XREFs of ?SetDropfeedbackZoom@CDropFeedbackItem@@UEAAXM@Z @ 0x18008C010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDropFeedbackItem::SetDropfeedbackZoom(CDropFeedbackItem *this, float a2)
{
  *((double *)this + 20) = a2;
}
