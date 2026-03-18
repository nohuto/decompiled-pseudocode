/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C006F248
 * Callers:
 *     RIMCreateHidDesc @ 0x1C006E4C4 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016721C (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C01CA4D0 (ApiSetProcessHidRawInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C0250F08 )
    return qword_1C0250F08();
  else
    return 3221225659LL;
}
