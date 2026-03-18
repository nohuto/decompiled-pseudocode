/*
 * XREFs of PopCompleteDirectedPowerTransitionCallback @ 0x140570F94
 * Callers:
 *     PopFxCompleteDirectedPowerTransition @ 0x140564A5C (PopFxCompleteDirectedPowerTransition.c)
 *     PopIssueDirectedPowerTransition @ 0x1408EC0C4 (PopIssueDirectedPowerTransition.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     PoFxIdleDevice @ 0x14036B4B4 (PoFxIdleDevice.c)
 *     PopCompleteNotifyTransitionCommon @ 0x140384F48 (PopCompleteNotifyTransitionCommon.c)
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
  return KeReleaseSemaphoreEx(*(_QWORD *)(a2 + 40), 0LL, 1LL, v7, 0);
}
