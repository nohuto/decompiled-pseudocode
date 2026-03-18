/*
 * XREFs of PopPowerRequestIsExecutionRequiredCapable @ 0x14071EC54
 * Callers:
 *     PopPowerRequestCleanUp @ 0x140361F40 (PopPowerRequestCleanUp.c)
 *     PopHandleConvergedPowerRequestUpdate @ 0x14071EAC4 (PopHandleConvergedPowerRequestUpdate.c)
 *     PopEnableExecutionRequiredPowerRequests @ 0x1407CFE38 (PopEnableExecutionRequiredPowerRequests.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopPowerRequestIsExecutionRequiredCapable(__int64 a1)
{
  char v1; // dl

  v1 = 0;
  if ( *(_QWORD *)(a1 + 120) )
    return **(_DWORD **)(a1 + 80) != 0;
  return v1;
}
