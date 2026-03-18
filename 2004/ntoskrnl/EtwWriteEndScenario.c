/*
 * XREFs of EtwWriteEndScenario @ 0x140775FF0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403C0454 (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x140762418 (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x1409AE0F0 (PopGracefulShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140293470 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x14039C298 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x14077718C (WdipStartEndScenario.c)
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
