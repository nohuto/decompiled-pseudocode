/*
 * XREFs of ?SetDelayedEvictionTimerScheduled@VIDMM_GLOBAL@@QEAAXJ@Z @ 0x1C002E070
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00880D0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::SetDelayedEvictionTimerScheduled(VIDMM_GLOBAL *this)
{
  _InterlockedExchange((volatile __int32 *)this + 11204, 0);
}
