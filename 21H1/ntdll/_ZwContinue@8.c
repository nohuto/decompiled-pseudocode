/*
 * XREFs of _ZwContinue@8 @ 0x4B2F2DB0
 * Callers:
 *     _LdrInitializeThunk@8 @ 0x4B2E62C0 (_LdrInitializeThunk@8.c)
 *     _RtlUnwind@16 @ 0x4B2E8E30 (_RtlUnwind@16.c)
 *     _KiUserApcDispatcher@16 @ 0x4B2F4D10 (_KiUserApcDispatcher@16.c)
 *     _KiUserExceptionDispatcher@8 @ 0x4B2F4E70 (_KiUserExceptionDispatcher@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwContinue(PCONTEXT ContextRecord, BOOLEAN TestAlert)
{
  return Wow64SystemServiceCall();
}
