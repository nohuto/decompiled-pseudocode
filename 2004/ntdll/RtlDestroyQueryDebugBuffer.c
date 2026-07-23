/*
 * XREFs of RtlDestroyQueryDebugBuffer @ 0x1800D7590
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8BC0 (RtlpQueryProcessDebugInformationFromWow64.c)
 * Callees:
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtUnmapViewOfSection @ 0x18009D350 (NtUnmapViewOfSection.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85F0 (RtlpChangeQueryDebugBufferTarget.c)
 */

NTSTATUS __cdecl RtlDestroyQueryDebugBuffer(PRTL_DEBUG_INFORMATION Buffer)
{
  RtlpChangeQueryDebugBufferTarget(Buffer, 0LL, 0LL, 0LL);
  NtClose(Buffer->SectionHandleClient);
  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, Buffer);
  return 0;
}
