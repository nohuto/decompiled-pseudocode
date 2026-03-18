/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x140888680
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140327E90 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 */

void __stdcall FsRtlDeregisterUncProvider(HANDLE Handle)
{
  if ( (char *)Handle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL && ZwClose(Handle) >= 0 )
  {
    KeWaitForSingleObject(&FsRtlpUncSemaphore, Executive, 0, 0, 0LL);
    --FsRtlpRedirs;
    KeReleaseSemaphore(&FsRtlpUncSemaphore, 0, 1, 0);
  }
}
