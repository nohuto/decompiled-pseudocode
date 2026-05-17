/*
 * XREFs of _RtlDestroyQueryDebugBuffer@4 @ 0x4B3369C0
 * Callers:
 *     <none>
 * Callees:
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _RtlpChangeQueryDebugBufferTarget@16 @ 0x4B3376D2 (_RtlpChangeQueryDebugBufferTarget@16.c)
 */

int __stdcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(0, 0);
  NtClose(*a1);
  NtUnmapViewOfSection(-1, (int)a1);
  return 0;
}
