/*
 * XREFs of IopQueueDeviceResetEvent @ 0x1408A0AAC
 * Callers:
 *     IoRequestDeviceRemovalForReset @ 0x1408A0710 (IoRequestDeviceRemovalForReset.c)
 * Callees:
 *     PnpSetTargetDeviceRemove @ 0x140739194 (PnpSetTargetDeviceRemove.c)
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
