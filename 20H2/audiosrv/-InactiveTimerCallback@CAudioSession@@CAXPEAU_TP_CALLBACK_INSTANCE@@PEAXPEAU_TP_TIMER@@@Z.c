/*
 * XREFs of ?InactiveTimerCallback@CAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180052510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSession::InactiveTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        CAudioSession *a2,
        struct _TP_TIMER *a3)
{
  CAudioSession::PostStateCheckExpirationWork_VerifyLifetime(a2);
}
