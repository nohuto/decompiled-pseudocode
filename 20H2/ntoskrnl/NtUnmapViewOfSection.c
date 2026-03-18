/*
 * XREFs of NtUnmapViewOfSection @ 0x140685440
 * Callers:
 *     <none>
 * Callees:
 *     NtUnmapViewOfSectionEx @ 0x140685760 (NtUnmapViewOfSectionEx.c)
 */

__int64 __fastcall NtUnmapViewOfSection(__int64 a1, __int64 a2)
{
  return NtUnmapViewOfSectionEx(a1, a2, 0LL);
}
