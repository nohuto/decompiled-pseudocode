/*
 * XREFs of ?InputMessageRetrieveToString@InputTraceLogging@@CGPBDW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x14D347
 * Callers:
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x14DA70 (-RetrieveMessage@Pointer@InputTraceLogging@@SGXPBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@.c)
 * Callees:
 *     <none>
 */

const char *__thiscall InputTraceLogging::InputMessageRetrieveToString(char *this)
{
  char *v1; // ecx
  char *v2; // ecx
  char *v3; // ecx

  v1 = this - 1;
  if ( !v1 )
    return "ReturnMsg";
  v2 = v1 - 1;
  if ( !v2 )
    return "NoMsg";
  v3 = v2 - 1;
  if ( !v3 )
    return "SkipMsg";
  if ( v3 == (char *)1 )
    return "ContinueScan";
  return "UNKNOWN";
}
