/*
 * XREFs of PopDisableCoolingExtension @ 0x14098B798
 * Callers:
 *     PopCoolingExtensionPnpNotification @ 0x14098B4E0 (PopCoolingExtensionPnpNotification.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     PopPropogateCoolingChange @ 0x1405C9A5C (PopPropogateCoolingChange.c)
 *     PopDiagTraceCoolingExtension @ 0x14086141C (PopDiagTraceCoolingExtension.c)
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
