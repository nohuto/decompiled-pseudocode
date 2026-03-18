/*
 * XREFs of MmQueryApiSetSchema @ 0x140251894
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403EBAC8 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x140684450 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x1406D972C (PsQueryCurrentApiSetSchema.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C4F3B8;
  result = &qword_140C4F3C0;
  *a2 = &qword_140C4F3C0;
  return result;
}
