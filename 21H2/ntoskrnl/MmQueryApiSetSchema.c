/*
 * XREFs of MmQueryApiSetSchema @ 0x140371AA8
 * Callers:
 *     KiMarkBugCheckRegions @ 0x1403DC948 (KiMarkBugCheckRegions.c)
 *     NtQueryInformationJobObject @ 0x1406804E0 (NtQueryInformationJobObject.c)
 *     PsQueryCurrentApiSetSchema @ 0x14075DAD4 (PsQueryCurrentApiSetSchema.c)
 *     sub_140A1DEE4 @ 0x140A1DEE4 (sub_140A1DEE4.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MmQueryApiSetSchema(_QWORD *a1, _QWORD *a2)
{
  __int64 *result; // rax

  *a1 = &qword_140C4CC40;
  result = &qword_140C4CC48;
  *a2 = &qword_140C4CC48;
  return result;
}
