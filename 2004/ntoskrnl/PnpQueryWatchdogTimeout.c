/*
 * XREFs of PnpQueryWatchdogTimeout @ 0x140275A9C
 * Callers:
 *     PnpAllocateWatchdog @ 0x140275A08 (PnpAllocateWatchdog.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PnpQueryWatchdogTimeout(char a1)
{
  __int64 result; // rax
  char v2; // cl

  result = 0LL;
  if ( a1 )
    return (unsigned int)PnpWatchdogTimeoutFirstChance;
  v2 = 0;
  if ( !(_BYTE)dword_140CFB19C && (PnpSetupOOBEInProgress || PnpSetupInProgress) )
    v2 = 1;
  if ( PnpWatchdogBugcheckConfig )
  {
    if ( PnpWatchdogBugcheckConfig == 1 )
      return (unsigned int)PnpWatchdogTimeoutSecondChance;
  }
  else
  {
    v2 = 0;
  }
  if ( v2 )
    return (unsigned int)PnpWatchdogTimeoutSecondChance;
  return result;
}
