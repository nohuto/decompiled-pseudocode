/*
 * XREFs of PnpDeviceCompletionQueueInitialize @ 0x140A70348
 * Callers:
 *     IopInitializePlugPlayServices @ 0x140A505F8 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpDeviceCompletionQueueInitialize()
{
  __int64 result; // rax

  byte_140C44988 = 5;
  qword_140C44968 = (__int64)&PnpDeviceCompletionQueue;
  PnpDeviceCompletionQueue = (__int64)&PnpDeviceCompletionQueue;
  qword_140C44998 = (__int64)&qword_140C44990;
  qword_140C44990 = (__int64)&qword_140C44990;
  qword_140C44980 = (__int64)&qword_140C44978;
  qword_140C44978 = (__int64)&qword_140C44978;
  result = 0LL;
  qword_140C449A8 = 0LL;
  dword_140C44970 = 0;
  byte_140C4498A = 8;
  dword_140C4498C = 0;
  dword_140C449A0 = 0x7FFFFFFF;
  return result;
}
