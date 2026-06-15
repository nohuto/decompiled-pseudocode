/*
 * XREFs of ?OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800BED50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 */

void __fastcall CMuteSoftware::OnPersistState(
        struct _TP_CALLBACK_INSTANCE *a1,
        CMuteSoftware *a2,
        struct _TP_TIMER *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x4000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_a111594f2af03e3a71e6f1c2b278efda_Traceguids, a2);
  }
  CMuteSoftware::PersistMuteState(a2);
}
