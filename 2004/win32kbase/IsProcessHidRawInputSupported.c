/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C005DF48
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016977C (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C01CC850 (ApiSetProcessHidRawInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C0252F08 )
    return qword_1C0252F08();
  else
    return 3221225659LL;
}
