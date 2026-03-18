/*
 * XREFs of ?DxgkLatencyToleranceTimerNotification@@YAXQEAX_K@Z @ 0x1C0211D90
 * Callers:
 *     <none>
 * Callees:
 *     ?LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z @ 0x1C0035A24 (-LatencyToleranceTimerNotification@DXGADAPTER@@QEAAX_K@Z.c)
 */

void __fastcall DxgkLatencyToleranceTimerNotification(KSPIN_LOCK *a1, __int64 a2)
{
  DXGADAPTER::LatencyToleranceTimerNotification(a1, a2);
}
