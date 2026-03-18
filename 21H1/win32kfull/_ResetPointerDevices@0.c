/*
 * XREFs of _ResetPointerDevices@0 @ 0xB08AE
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 *     _MasterInputThreadPrepareForRitTakeover@0 @ 0xD3CB8 (_MasterInputThreadPrepareForRitTakeover@0.c)
 *     ?PrepareForMasterInputThreadTakingOver@@YGXPAVLegacyInputDispatcher@@@Z @ 0xD5666 (-PrepareForMasterInputThreadTakingOver@@YGXPAVLegacyInputDispatcher@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ResetPointerDevices()
{
  NTSTATUS result; // eax
  HANDLE Handle; // [esp+0h] [ebp-4h] BYREF

  Handle = 0;
  result = CHidInput::GetKernelHandleToRimObj(_gpHidInput, &Handle);
  if ( result >= 0 )
  {
    RIMResetPointerDevices(Handle);
    return ZwClose(Handle);
  }
  return result;
}
