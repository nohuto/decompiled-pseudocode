/*
 * XREFs of IoUnregisterPlugPlayNotification @ 0x1406E78B0
 * Callers:
 *     SmKmFileInfoCleanup @ 0x1409D57BC (SmKmFileInfoCleanup.c)
 *     SbpWaitForVmbus @ 0x140B55A38 (SbpWaitForVmbus.c)
 * Callees:
 *     PnpUnregisterPlugPlayNotification @ 0x14025AA04 (PnpUnregisterPlugPlayNotification.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

NTSTATUS __stdcall IoUnregisterPlugPlayNotification(PVOID NotificationEntry)
{
  if ( *((_DWORD *)NotificationEntry + 4) == 4 )
    KeBugCheckEx(0xCAu, 0xAuLL, (ULONG_PTR)NotificationEntry, 4uLL, 0LL);
  return PnpUnregisterPlugPlayNotification(NotificationEntry, 0);
}
