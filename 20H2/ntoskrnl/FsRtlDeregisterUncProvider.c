/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x14088E1D0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402FAEB0 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
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
