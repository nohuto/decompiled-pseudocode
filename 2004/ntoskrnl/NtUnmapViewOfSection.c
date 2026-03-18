/*
 * XREFs of NtUnmapViewOfSection @ 0x1406FCBE0
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x140600D00 (NtUnmapViewOfSectionEx.c)
 */

NTSTATUS __fastcall NtUnmapViewOfSection(void *a1, unsigned __int64 a2)
{
  return NtUnmapViewOfSectionEx(a1, a2, 0);
}
