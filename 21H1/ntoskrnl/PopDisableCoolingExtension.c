/*
 * XREFs of PopDisableCoolingExtension @ 0x1408DE528
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x1408DE270 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140205C14 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x14035D404 (PopAcquireRwLockExclusive.c)
 *     PopPropogateCoolingChange @ 0x1403C56E4 (PopPropogateCoolingChange.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopDiagTraceCoolingExtension @ 0x1406EBE10 (PopDiagTraceCoolingExtension.c)
 */

void __fastcall PopDisableCoolingExtension(__int64 a1)
{
  ULONG_PTR v1; // rsi
  __int64 v3; // rbx
  void (__fastcall *v4)(__int64); // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1 + 32;
  memset(&Event, 0, sizeof(Event));
  PopAcquireRwLockExclusive(a1 + 32);
  if ( *(_BYTE *)(a1 + 64) )
  {
    *(_BYTE *)(a1 + 64) = 0;
    PopDiagTraceCoolingExtension(a1, (const EVENT_DESCRIPTOR *)POP_ETW_EVENT_COOLING_EXTENSION_REMOVE);
    KeInitializeEvent(&Event, NotificationEvent, 0);
    *(_QWORD *)(a1 + 80) = &Event;
    PopPropogateCoolingChange(a1);
    PopReleaseRwLock(v1);
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    PopAcquireRwLockExclusive(v1);
    *(_QWORD *)(a1 + 80) = 0LL;
    v3 = *(_QWORD *)(a1 + 96);
    v4 = *(void (__fastcall **)(__int64))(a1 + 112);
    PopReleaseRwLock(v1);
    v4(v3);
  }
  else
  {
    PopReleaseRwLock(v1);
  }
}
