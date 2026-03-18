/*
 * XREFs of MmQueryApiSetSchema @ 0x1403714E0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DBE68 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x140756A60 (PsQueryCurrentApiSetSchema.c)
 *     sub_140A1FEE4 @ 0x140A1FEE4 (sub_140A1FEE4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C4CA80;
  result = &qword_140C4CA88;
  *a2 = &qword_140C4CA88;
  return result;
}
