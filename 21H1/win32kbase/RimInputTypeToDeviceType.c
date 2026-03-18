/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C004F9C0
 * Callers:
 *     rimCompleteReads @ 0x1C00A18A8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00A1968 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C00A4340 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C017ABB0 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 == 2 )
    return result;
  if ( (a1 & 0x3C) == 0 )
    return 0LL;
  return 2LL;
}
