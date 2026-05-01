/*
 * XREFs of ?SetOpacity@CDropFeedbackItem@@UEAAXN@Z @ 0x18042B350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDropFeedbackItem::SetOpacity(CDropFeedbackItem *this, double a2)
{
  if ( *((_DWORD *)this + 17) == 3 && a2 != 0.0 )
    a2 = DOUBLE_0_2000000029802322;
  *((double *)this + 21) = a2;
}
