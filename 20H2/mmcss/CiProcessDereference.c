/*
 * XREFs of CiProcessDereference @ 0x1C000B720
 * Callers:
 *     CiProcessNotification @ 0x1C0001AB0 (CiProcessNotification.c)
 *     CiThreadCreate @ 0x1C000A800 (CiThreadCreate.c)
 *     CiDispatchClose @ 0x1C000B440 (CiDispatchClose.c)
 *     CiThreadCleanup @ 0x1C000B570 (CiThreadCleanup.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000C300 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     <none>
 */

void __fastcall CiProcessDereference(char *P)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rcx
  signed __int64 v4; // rtt
  char v5; // di
  signed __int64 v6; // rax
  bool v7; // cc
  signed __int64 v8; // rax

  _m_prefetchw(P + 32);
  v2 = *((_QWORD *)P + 4);
  v3 = v2 - 1;
  if ( v2 - 1 <= 0 )
  {
LABEL_4:
    if ( v3 )
      __fastfail(0xEu);
    v5 = 0;
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 4, 0xFFFFFFFFFFFFFFFFuLL);
    v7 = v6 <= 1;
    v8 = v6 - 1;
    if ( v7 )
    {
      if ( v8 )
        __fastfail(0xEu);
      v5 = 1;
      RtlRbRemoveNode(&WPP_MAIN_CB.DeviceQueue.Busy, P + 40);
    }
    WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
    if ( v5 )
    {
      ObfDereferenceObject(*((PVOID *)P + 10));
      ExFreePoolWithTag(P, 0x5073634Du);
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)P + 4, v3, v2);
      if ( v4 == v2 )
        break;
      v3 = v2 - 1;
      if ( v2 - 1 <= 0 )
        goto LABEL_4;
    }
  }
}
