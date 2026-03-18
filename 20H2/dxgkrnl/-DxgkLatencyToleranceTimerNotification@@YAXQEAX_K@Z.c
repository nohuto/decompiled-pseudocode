/*
 * XREFs of ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C0214E30
 * Callers:
 *     <none>
 * Callees:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C00367B4 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DxgkLatencyToleranceTimerNotification(KSPIN_LOCK *a1, __int64 a2)
{
  DXGADAPTER::LatencyToleranceTimerNotification(a1, a2);
}
