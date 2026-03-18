/*
 * XREFs of ?DelegationResponseToString@InputTraceLogging@@CGPBDK@Z @ 0x14CE7C
 * Callers:
 *     ?HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z @ 0x14D206 (-HandleDelegatedInput@DManip@InputTraceLogging@@SGXPBUtagQMSG@@K@Z.c)
 * Callees:
 *     <none>
 */

const char *__thiscall InputTraceLogging::DelegationResponseToString(char *this)
{
  char *v1; // ecx
  char *v2; // ecx

  v1 = this - 1;
  if ( !v1 )
    return "Reassign";
  v2 = v1 - 1;
  if ( !v2 )
    return "Release";
  if ( v2 == (char *)1 )
    return "Retain";
  return "UNKNOWN";
}
