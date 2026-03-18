/*
 * XREFs of IsProcessHidRawInputSupported @ 0x1C0050488
 * Callers:
 *     RIMCreateHidDesc @ 0x1C009F54C (RIMCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016FACC (RIMIDECreateHIDDesc.c)
 *     ApiSetProcessHidRawInput @ 0x1C01D27D0 (ApiSetProcessHidRawInput.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsProcessHidRawInputSupported()
{
  if ( qword_1C0258EC8 )
    return qword_1C0258EC8();
  else
    return 3221225659LL;
}
