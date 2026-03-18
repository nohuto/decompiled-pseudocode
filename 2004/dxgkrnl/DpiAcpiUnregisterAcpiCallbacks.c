/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D6238
 * Callers:
 *     DpiAddDevice @ 0x1C017EFC0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02C9E40 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0018650 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C00B1C90 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, unsigned int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C00B1C90 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C00B1B50, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
