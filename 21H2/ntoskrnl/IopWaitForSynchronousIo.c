/*
 * XREFs of IopWaitForSynchronousIo @ 0x1402D41CC
 * Callers:
 *     NtSetInformationFile @ 0x140352270 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x1406C9708 (IopQueryXxxInformation.c)
 * Callees:
 *     IopWaitForSynchronousIoEvent @ 0x1403F1280 (IopWaitForSynchronousIoEvent.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(IRP *a1, __int64 a2)
{
  IopWaitForSynchronousIoEvent(a1);
  return *(unsigned int *)(a2 + 56);
}
