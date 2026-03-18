/*
 * XREFs of ResetPointerDevices @ 0x1C002A488
 * Callers:
 *     ?PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z @ 0x1C0009874 (-PrepareForMasterInputThreadTakingOver@@YAXPEAVLegacyInputDispatcher@@@Z.c)
 *     xxxSwitchDesktop @ 0x1C002BDDC (xxxSwitchDesktop.c)
 *     MasterInputThreadPrepareForRitTakeover @ 0x1C0104154 (MasterInputThreadPrepareForRitTakeover.c)
 * Callees:
 *     <none>
 */

NTSTATUS ResetPointerDevices()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  Handle = 0LL;
  result = CHidInput::GetKernelHandleToRimObj(gpHidInput, &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle);
    return ZwClose(Handle);
  }
  return result;
}
