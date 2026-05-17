/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800D76E0
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8D10 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009DB80 (NtUnmapViewOfSection.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D8740 (RtlpChangeQueryDebugBufferTarget.c)
 */

__int64 __fastcall RtlDestroyQueryDebugBuffer(HANDLE *a1)
{
  RtlpChangeQueryDebugBufferTarget(a1, 0LL, 0LL, 0LL);
  NtClose(*a1);
  NtUnmapViewOfSection();
  return 0LL;
}
