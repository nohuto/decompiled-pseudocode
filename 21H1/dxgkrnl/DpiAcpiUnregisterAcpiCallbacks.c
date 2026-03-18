/*
 * XREFs of DpiAcpiUnregisterAcpiCallbacks @ 0x1C02D1CB8
 * Callers:
 *     DpiAddDevice @ 0x1C0172ED0 (DpiAddDevice.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C02C58C0 (DpiFdoHandleRemoveDevice.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00188E0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

LONG __fastcall DpiAcpiUnregisterAcpiCallbacks(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  AcquireMiniportListMutex();
  if ( dword_1C00AFB90 )
  {
    (*(void (__fastcall **)(_QWORD, void (__fastcall *)(PVOID, unsigned int, __int64)))(v1 + 936))(
      *(_QWORD *)(v1 + 864),
      DpiAcpiEventCallback);
    if ( !--dword_1C00AFB90 )
    {
      IoUnregisterPlugPlayNotification(NotificationEntry);
      NotificationEntry = 0LL;
      ExUnregisterCallback(CallbackRegistration);
      CallbackRegistration = 0LL;
    }
  }
  _InterlockedExchange64(&qword_1C00AFA50, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
