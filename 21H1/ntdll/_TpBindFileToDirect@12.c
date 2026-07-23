/*
 * XREFs of _TpBindFileToDirect@12 @ 0x4B2E713D
 * Callers:
 *     _TpAllocIoCompletion@20 @ 0x4B2E6E50 (_TpAllocIoCompletion@20.c)
 *     _RtlpTpIoAlloc@12 @ 0x4B3855A8 (_RtlpTpIoAlloc@12.c)
 *     _RtlpTpIoLookup@12 @ 0x4B385A3D (_RtlpTpIoLookup@12.c)
 * Callees:
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _ZwSetInformationFile@20 @ 0x4B2F2BF0 (_ZwSetInformationFile@20.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

NTSTATUS __fastcall TpBindFileToDirect(HANDLE FileHandle, int a2, int a3)
{
  NTSTATUS result; // eax
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+4h] [ebp-10h] BYREF
  _DWORD FileInformation[2]; // [esp+Ch] [ebp-8h] BYREF

  if ( !FileHandle || !a2 || !a3 || NtCurrentPeb()->Ldr->ShutdownInProgress )
    TppRaiseInvalidParameter();
  FileInformation[0] = *(_DWORD *)(a3 + 40);
  FileInformation[1] = a2;
  result = ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 8u, FileCompletionInformation);
  if ( result >= 0 )
  {
    TpAdjustBindingCount(a3, 1u);
    return 0;
  }
  return result;
}
