/*
 * XREFs of CiProcessLocate @ 0x1C000B2C0
 * Callers:
 *     CiProcessNotification @ 0x1C0002BE0 (CiProcessNotification.c)
 *     CiThreadCreate @ 0x1C000AED0 (CiThreadCreate.c)
 *     CiDispatchCreateNotificationClient @ 0x1C000C370 (CiDispatchCreateNotificationClient.c)
 * Callees:
 *     CiProcessComparer @ 0x1C000A210 (CiProcessComparer.c)
 */

__int64 __fastcall CiProcessLocate(unsigned __int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  int v4; // esi
  int v5; // eax
  __int64 v6; // rax

  v2 = 0LL;
  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  v3 = (__int64)WPP_MAIN_CB.DeviceQueue.1;
  WPP_MAIN_CB.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  if ( (WPP_MAIN_CB.Dpc.Type & 1) != 0 )
  {
    if ( !*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 )
      goto LABEL_9;
    v3 = (unsigned __int64)&WPP_MAIN_CB.DeviceQueue.32 ^ *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1;
  }
  v4 = WPP_MAIN_CB.Dpc.Type & 1;
  if ( !v3 )
    goto LABEL_9;
  while ( 1 )
  {
    v5 = CiProcessComparer(a1, v3);
    if ( v5 < 0 )
    {
      v6 = *(_QWORD *)v3;
      if ( v4 && v6 )
        goto LABEL_15;
      goto LABEL_7;
    }
    if ( v5 <= 0 )
      break;
    v6 = *(_QWORD *)(v3 + 8);
    if ( v4 && v6 )
    {
LABEL_15:
      v3 ^= v6;
      goto LABEL_8;
    }
LABEL_7:
    v3 = v6;
LABEL_8:
    if ( !v3 )
      goto LABEL_9;
  }
  v2 = v3 - 40;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 - 40 + 32)) <= 1 )
    __fastfail(0xEu);
LABEL_9:
  WPP_MAIN_CB.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}
