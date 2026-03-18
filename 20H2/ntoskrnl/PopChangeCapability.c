/*
 * XREFs of PopChangeCapability @ 0x140792D24
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x14078B0F0 (PopNotifyPolicyDevice.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x140793178 (PopResetCurrentPolicies.c)
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
