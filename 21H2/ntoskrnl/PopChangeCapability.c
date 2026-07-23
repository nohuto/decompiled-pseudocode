/*
 * XREFs of PopChangeCapability @ 0x140793A44
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopNotifyPolicyDevice @ 0x1407C4800 (PopNotifyPolicyDevice.c)
 * Callees:
 *     PopResetCurrentPolicies @ 0x140793E98 (PopResetCurrentPolicies.c)
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
