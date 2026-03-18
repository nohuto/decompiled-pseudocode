/*
 * XREFs of sub_1C000AA60 @ 0x1C000AA60
 * Callers:
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 *     sub_1C000A800 @ 0x1C000A800 (sub_1C000A800.c)
 * Callees:
 *     sub_1C000B240 @ 0x1C000B240 (sub_1C000B240.c)
 */

__int64 __fastcall sub_1C000AA60(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx(&DeviceObject.Queue, 0LL);
    DeviceObject.Queue.ListEntry.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
    if ( ++LODWORD(DeviceObject.DeviceExtension) == 1 )
      sub_1C000B240();
    DeviceObject.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&DeviceObject.Queue, 0LL);
  }
  return result;
}
