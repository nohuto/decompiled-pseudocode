/*
 * XREFs of PnpQueryWatchdogTimeout @ 0x1402D5AFC
 * Callers:
 *     PnpAllocateWatchdog @ 0x1402D5A78 (PnpAllocateWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpQueryWatchdogTimeout(char a1)
{
  __int64 result; // rax
  char v2; // dl

  result = 0LL;
  if ( a1 )
    return (unsigned int)PnpWatchdogTimeoutFirstChance;
  v2 = 0;
  if ( !(_BYTE)dword_140D051DC && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v2 = 1;
  if ( PnpWatchdogBugcheckConfig && (PnpWatchdogBugcheckConfig == 1 || v2) )
    return (unsigned int)PnpWatchdogTimeoutSecondChance;
  return result;
}
