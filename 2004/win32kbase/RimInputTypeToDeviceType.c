/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C00565E0
 * Callers:
 *     RIMRemoveInputOfType @ 0x1C00563B0 (RIMRemoveInputOfType.c)
 *     rimIssueReads @ 0x1C00AB7E4 (rimIssueReads.c)
 *     rimCompleteReads @ 0x1C00AB9B0 (rimCompleteReads.c)
 *     RIMDiscoverSpecificDevice @ 0x1C0174880 (RIMDiscoverSpecificDevice.c)
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
