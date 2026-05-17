/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800D7930
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8F60 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009D5F0 (NtUnmapViewOfSection.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D8990 (RtlpChangeQueryDebugBufferTarget.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection();
  return 0LL;
}
