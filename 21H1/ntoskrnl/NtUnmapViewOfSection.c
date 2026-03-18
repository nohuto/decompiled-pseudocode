/*
 * XREFs of NtUnmapViewOfSection @ 0x1406D94F0
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x140635D40 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __fastcall NtUnmapViewOfSection(void *a1, unsigned __int64 a2)
{
  return NtUnmapViewOfSectionEx(a1, a2, 0);
}
