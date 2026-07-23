/*
 * XREFs of IopWaitForSynchronousIo @ 0x140272EA4
 * Callers:
 *     NtSetInformationFile @ 0x14035CFC0 (NtSetInformationFile.c)
 *     IopQueryXxxInformation @ 0x140677FF8 (IopQueryXxxInformation.c)
 *     NtQueryInformationFile @ 0x1406EA600 (NtQueryInformationFile.c)
 * Callees:
 *     IopWaitForSynchronousIoEvent @ 0x1403F11B0 (IopWaitForSynchronousIoEvent.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(IRP *a1, __int64 a2)
{
  IopWaitForSynchronousIoEvent(a1);
  return *(unsigned int *)(a2 + 56);
}
