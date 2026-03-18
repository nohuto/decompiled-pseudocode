/*
 * XREFs of ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C0066200
 * Callers:
 *     UserPowerInfoCallout @ 0x1C002A474 (UserPowerInfoCallout.c)
 *     SetProtocolType @ 0x1C0071E20 (SetProtocolType.c)
 *     PowerConnectionEvent @ 0x1C00B842C (PowerConnectionEvent.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C78B0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C006580C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 */

void __fastcall CInputGlobals::UpdateLastInputTime(__int64 a1, __int64 a2, int a3)
{
  RIMLockExclusive(a1);
  CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
