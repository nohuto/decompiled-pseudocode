/*
 * XREFs of PopChangeCapability @ 0x14077C5D4
 * Callers:
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x1407AEE40 (PopNotifyPolicyDevice.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x14077CA28 (PopResetCurrentPolicies.c)
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
