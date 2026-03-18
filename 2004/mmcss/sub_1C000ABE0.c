/*
 * XREFs of sub_1C000ABE0 @ 0x1C000ABE0
 * Callers:
 *     sub_1C0001AB0 @ 0x1C0001AB0 (sub_1C0001AB0.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 *     sub_1C000C300 @ 0x1C000C300 (sub_1C000C300.c)
 * Callees:
 *     sub_1C000A0A0 @ 0x1C000A0A0 (sub_1C000A0A0.c)
 */

__int64 __fastcall sub_1C000ABE0(unsigned __int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  int v4; // esi
  int v5; // eax
  __int64 v6; // rax

  v2 = 0LL;
  ExAcquirePushLockExclusiveEx(&DeviceObject.DeviceQueue.DeviceListHead.Blink, 0LL);
  v3 = (__int64)DeviceObject.DeviceQueue.1;
  DeviceObject.DeviceQueue.Lock = (KSPIN_LOCK)KeGetCurrentThread();
  if ( (DeviceObject.Dpc.Type & 1) != 0 && *(_QWORD *)&DeviceObject.DeviceQueue.1 )
    v3 = (unsigned __int64)&DeviceObject.DeviceQueue.32 ^ *(_QWORD *)&DeviceObject.DeviceQueue.1;
  v4 = DeviceObject.Dpc.Type & 1;
  while ( v3 )
  {
    v5 = sub_1C000A0A0(a1, v3);
    if ( v5 >= 0 )
    {
      if ( v5 <= 0 )
      {
        v2 = v3 - 40;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 - 40 + 32)) <= 1 )
          __fastfail(0xEu);
        break;
      }
      v6 = *(_QWORD *)(v3 + 8);
      if ( v4 && v6 )
      {
LABEL_15:
        v3 ^= v6;
        continue;
      }
    }
    else
    {
      v6 = *(_QWORD *)v3;
      if ( v4 && v6 )
        goto LABEL_15;
    }
    v3 = v6;
  }
  DeviceObject.DeviceQueue.Lock = 0LL;
  ExReleasePushLockExclusiveEx(&DeviceObject.DeviceQueue.DeviceListHead.Blink, 0LL);
  return v2;
}
