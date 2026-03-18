/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x140A4F7C8
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A50C78 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140C449A8 = 5;
  qword_140C44988 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140C449B8 = (__int64)&qword_140C449B0;
  qword_140C449B0 = (__int64)&qword_140C449B0;
  qword_140C449A0 = (__int64)&qword_140C44998;
  qword_140C44998 = (__int64)&qword_140C44998;
  result = 0LL;
  qword_140C449C8 = 0LL;
  dword_140C44990 = 0;
  byte_140C449AA = 8;
  dword_140C449AC = 0;
  dword_140C449C0 = 0x7FFFFFFF;
  return result;
}
