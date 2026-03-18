/*
 * XREFs of PopSetSystemState @ 0x1403A3240
 * Callers:
 *     PoSetUserPresent @ 0x1403A31D0 (PoSetUserPresent.c)
 *     PoSetSystemState @ 0x140569BB0 (PoSetSystemState.c)
 *     PopIssueActionRequest @ 0x140763448 (PopIssueActionRequest.c)
 *     PopAllowAwayModeSettingCallback @ 0x1407C1380 (PopAllowAwayModeSettingCallback.c)
 * Callees:
 *     PopResetIdleTime @ 0x14035DF70 (PopResetIdleTime.c)
 *     PopUserPresentSet @ 0x1403A3284 (PopUserPresentSet.c)
 *     PopDiagTraceSetSystemState @ 0x1403A334C (PopDiagTraceSetSystemState.c)
 */

__int64 __fastcall PopSetSystemState(int a1, unsigned int a2)
{
  char v3; // bl
  __int64 result; // rax

  if ( (a1 & 0xFFFFFFF8) == 0 )
  {
    v3 = a1;
    result = PopDiagTraceSetSystemState();
    if ( (v3 & 1) != 0 )
      result = PopResetIdleTime();
    if ( (v3 & 4) != 0 )
      return PopUserPresentSet(a2);
  }
  return result;
}
