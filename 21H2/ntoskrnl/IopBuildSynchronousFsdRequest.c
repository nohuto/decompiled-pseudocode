/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x140705F30
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x140705EF0 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x14074C6C0 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x14080F068 (IopCreateArcName.c)
 *     HalpQueryPccInterface @ 0x14090AD84 (HalpQueryPccInterface.c)
 *     RawQueryFileSystemInformation @ 0x1409B54D8 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x14029BAD0 (IopBuildAsynchronousFsdRequest.c)
 *     IopQueueThreadIrp @ 0x1402AE1B0 (IopQueueThreadIrp.c)
 */

IRP *__fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        LARGE_INTEGER *a5,
        struct _KEVENT *a6,
        struct _IO_STATUS_BLOCK *a7)
{
  IRP *result; // rax
  IRP *v8; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7);
  v8 = result;
  if ( result )
  {
    result->UserEvent = a6;
    IopQueueThreadIrp((__int64)result);
    return v8;
  }
  return result;
}
