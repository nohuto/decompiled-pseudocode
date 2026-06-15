/*
 * XREFs of ?CloseWait@CAudioThreadPool@@UEAAXPEAU_TP_WAIT@@@Z @ 0x18003CBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseWait(CAudioThreadPool *this, struct _TP_WAIT *a2)
{
  CloseThreadpoolWait(a2);
}
