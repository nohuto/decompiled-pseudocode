/*
 * XREFs of MmQueryApiSetSchema @ 0x14036F590
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403D91D8 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x140747E80 (PsQueryCurrentApiSetSchema.c)
 *     sub_140A19EE4 @ 0x140A19EE4 (sub_140A19EE4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C4CA00;
  result = &qword_140C4CA08;
  *a2 = &qword_140C4CA08;
  return result;
}
