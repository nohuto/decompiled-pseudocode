/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x140A51DD0
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140C44B48 = 5;
  qword_140C44B28 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140C44B58 = (__int64)&qword_140C44B50;
  qword_140C44B50 = (__int64)&qword_140C44B50;
  qword_140C44B40 = (__int64)&qword_140C44B38;
  qword_140C44B38 = (__int64)&qword_140C44B38;
  result = 0LL;
  qword_140C44B68 = 0LL;
  dword_140C44B30 = 0;
  byte_140C44B4A = 8;
  dword_140C44B4C = 0;
  dword_140C44B60 = 0x7FFFFFFF;
  return result;
}
