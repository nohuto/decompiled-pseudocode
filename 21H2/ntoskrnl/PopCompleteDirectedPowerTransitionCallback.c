/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x1405D6DC4
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x1405CBD34 (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x1409977F0 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1402D25CC (PoFxIdleDevice.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     PopCompleteNotifyTransitionCommon @ 0x1403945DC (PopCompleteNotifyTransitionCommon.c)
 */

__int64 __fastcall PopCompleteDirectedPowerTransitionCallback(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  int v6; // esi
  _DWORD *v7; // r9

  v4 = 0LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( a3 < 0 )
    v4 = *(_QWORD *)(a1 + 96);
  PopCompleteNotifyTransitionCommon(a2, (__int64 *)(*(_QWORD *)(a1 + 48) + 160LL), a3, v4);
  if ( *(_BYTE *)a2 == 2 && v6 == 1 )
    PoFxIdleDevice(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL));
  return KeReleaseSemaphoreEx(*(volatile signed __int32 **)(a2 + 40), 0LL, 1LL, v7, 0);
}
