/*
 * XREFs of EtwWriteEndScenario @ 0x1407883D0
 * Callers:
 *     PnpCompleteSystemStartProcess @ 0x1403C3418 (PnpCompleteSystemStartProcess.c)
 *     PopDiagTracePowerTransitionEnd @ 0x1407748F8 (PopDiagTracePowerTransitionEnd.c)
 *     PopGracefulShutdown @ 0x1409B0F60 (PopGracefulShutdown.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BF30 (EtwEventEnabled.c)
 *     EtwWrite @ 0x14025DC90 (EtwWrite.c)
 *     EtwGetProviderIdFromHandle @ 0x14039F028 (EtwGetProviderIdFromHandle.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     WdipStartEndScenario @ 0x14078956C (WdipStartEndScenario.c)
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
