/*
 * XREFs of FsRtlDeregisterUncProvider @ 0x140887360
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
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
