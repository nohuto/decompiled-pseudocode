/*
 * XREFs of EtwWriteEndScenario @ 0x140773BE0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403BF4C4 (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140760B38 (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x1409AD290 (PopGracefulShutdown.c)
 * Callees:
 *     EtwWrite @ 0x140256BF0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     EtwGetProviderIdFromHandle @ 0x14039BB08 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x140774D7C (WdipStartEndScenario.c)
 */

NTSTATUS __fastcall EtwWriteEndScenario(
        ULONG_PTR *RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        LPCGUID ActivityId,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  NTSTATUS result; // eax
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !EventDescriptor || !ActivityId )
    return -1073741811;
  if ( !EtwEventEnabled((REGHANDLE)RegHandle, EventDescriptor) )
    return -1073741816;
  result = EtwGetProviderIdFromHandle(RegHandle, 0, &v10);
  if ( result >= 0 )
  {
    WdipStartEndScenario(&v10, ActivityId, EventDescriptor, 11LL);
    return EtwWrite((REGHANDLE)RegHandle, EventDescriptor, ActivityId, UserDataCount, UserData);
  }
  return result;
}
