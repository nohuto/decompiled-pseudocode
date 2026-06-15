/*
 * XREFs of ?OnPersistState@CVolumeSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C1380
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800BE26C (WPP_SF_q.c)
 */

void __fastcall CVolumeSoftware::OnPersistState(
        struct _TP_CALLBACK_INSTANCE *a1,
        CVolumeSoftware *a2,
        struct _TP_TIMER *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x4000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, (__int64)&WPP_0837af417b5438e10b8c3569af41ec07_Traceguids, a2);
  }
  CVolumeSoftware::PersistVolumeState(a2);
}
