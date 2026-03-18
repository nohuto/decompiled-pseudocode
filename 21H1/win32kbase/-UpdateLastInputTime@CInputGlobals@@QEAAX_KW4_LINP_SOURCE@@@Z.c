/*
 * XREFs of ?UpdateLastInputTime@CInputGlobals@@QEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C005AF20
 * Callers:
 *     SetProtocolType @ 0x1C00544A0 (SetProtocolType.c)
 *     PowerConnectionEvent @ 0x1C005966C (PowerConnectionEvent.c)
 *     UserPowerInfoCallout @ 0x1C005E654 (UserPowerInfoCallout.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C00C8888 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z @ 0x1C005B39C (-_UpdateLastInputTime@CInputGlobals@@AEAAX_KW4_LINP_SOURCE@@@Z.c)
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 */

void __fastcall CInputGlobals::UpdateLastInputTime(__int64 a1, __int64 a2, unsigned int a3)
{
  RIMLockExclusive(a1);
  CInputGlobals::_UpdateLastInputTime(a1, a2, a3);
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
