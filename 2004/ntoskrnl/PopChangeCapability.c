/*
 * XREFs of PopChangeCapability @ 0x140784FD4
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14077DB50 (PopNotifyPolicyDevice.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x140785428 (PopResetCurrentPolicies.c)
 */

__int64 __fastcall PopChangeCapability(_BYTE *a1, char a2)
{
  __int64 result; // rax

  if ( *a1 != a2 )
  {
    *a1 = a2;
    return PopResetCurrentPolicies();
  }
  return result;
}
