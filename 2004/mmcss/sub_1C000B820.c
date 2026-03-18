/*
 * XREFs of sub_1C000B820 @ 0x1C000B820
 * Callers:
 *     sub_1C0004874 @ 0x1C0004874 (sub_1C0004874.c)
 *     sub_1C000B570 @ 0x1C000B570 (sub_1C000B570.c)
 * Callees:
 *     sub_1C000B240 @ 0x1C000B240 (sub_1C000B240.c)
 */

__int64 __fastcall sub_1C000B820(__int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *CurrentThread; // rax
  bool v3; // zf

  result = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(result + 3) & 1) != 0 )
  {
    ExAcquirePushLockExclusiveEx(&DeviceObject.Queue, 0LL);
    CurrentThread = (struct _LIST_ENTRY *)KeGetCurrentThread();
    v3 = LODWORD(DeviceObject.DeviceExtension)-- == 1;
    DeviceObject.Queue.ListEntry.Blink = CurrentThread;
    if ( v3 )
      sub_1C000B240();
    DeviceObject.Queue.ListEntry.Blink = 0LL;
    return ExReleasePushLockExclusiveEx(&DeviceObject.Queue, 0LL);
  }
  return result;
}
