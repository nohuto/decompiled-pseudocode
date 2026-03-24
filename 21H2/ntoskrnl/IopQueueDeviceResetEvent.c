/*
 * XREFs of IopQueueDeviceResetEvent @ 0x1408A094C
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1408A05B0 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     PnpSetTargetDeviceRemove @ 0x140738FD4 (PnpSetTargetDeviceRemove.c)
 */

__int64 __fastcall IopQueueDeviceResetEvent(__int64 a1)
{
  return PnpSetTargetDeviceRemove(
           *(_QWORD **)(a1 + 184),
           0,
           1,
           0,
           1,
           54,
           0,
           0LL,
           (__int64)IopDeviceRemovalForResetComplete,
           a1,
           (_DWORD *)(a1 + 164),
           a1 + 192,
           a1 + 200,
           (__int64 *)(a1 + 168));
}
