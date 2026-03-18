/*
 * XREFs of MmQueryApiSetSchema @ 0x14036E960
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403D8398 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x140746300 (PsQueryCurrentApiSetSchema.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C4CB40;
  result = &qword_140C4CB48;
  *a2 = &qword_140C4CB48;
  return result;
}
