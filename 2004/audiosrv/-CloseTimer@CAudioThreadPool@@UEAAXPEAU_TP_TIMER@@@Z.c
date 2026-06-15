/*
 * XREFs of ?CloseTimer@CAudioThreadPool@@UEAAXPEAU_TP_TIMER@@@Z @ 0x180047F30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioThreadPool::CloseTimer(CAudioThreadPool *this, struct _TP_TIMER *a2)
{
  CloseThreadpoolTimer(a2);
}
