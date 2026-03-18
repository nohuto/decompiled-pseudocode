/*
 * XREFs of PopPowerRequestIsExecutionRequiredStatusHeld @ 0x1406A86F0
 * Callers:
 *     PopHandleConvergedPowerRequestUpdate @ 0x1406A71B0 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407C1634 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopPowerRequestIsExecutionRequiredStatusHeld(__int64 a1)
{
  bool result; // al

  result = *(_DWORD *)(a1 + 44) != 0;
  if ( PopPowerRequestConvertSystemToExecution )
  {
    if ( *(_DWORD *)(a1 + 36) )
      return 1;
  }
  return result;
}
