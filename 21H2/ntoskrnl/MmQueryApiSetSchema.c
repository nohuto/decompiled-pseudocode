/*
 * XREFs of MmQueryApiSetSchema @ 0x140371F58
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DC7D8 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x140616880 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x14075D914 (PsQueryCurrentApiSetSchema.c)
 *     sub_140A1CEE4 @ 0x140A1CEE4 (sub_140A1CEE4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C4CC00;
  result = &qword_140C4CC08;
  *a2 = &qword_140C4CC08;
  return result;
}
