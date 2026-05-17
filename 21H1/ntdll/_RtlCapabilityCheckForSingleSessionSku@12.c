/*
 * XREFs of _RtlCapabilityCheckForSingleSessionSku@12 @ 0x4B346050
 * Callers:
 *     <none>
 * Callees:
 *     _RtlIsMultiSessionSku@0 @ 0x4B2AD7C0 (_RtlIsMultiSessionSku@0.c)
 *     _RtlCapabilityCheck@12 @ 0x4B2EF210 (_RtlCapabilityCheck@12.c)
 */

int __stdcall RtlCapabilityCheckForSingleSessionSku(int a1, unsigned __int16 *a2, char *a3)
{
  int result; // eax

  if ( !a3 )
    return -1073741811;
  if ( !RtlIsMultiSessionSku() )
    return RtlCapabilityCheck(a1, a2, a3);
  result = 0;
  *a3 = 0;
  return result;
}
