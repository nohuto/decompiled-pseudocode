/*
 * XREFs of MiDeleteSectionAwe @ 0x14054BD48
 * Callers:
 *     MiDereferenceFailedControlArea @ 0x1406220F4 (MiDereferenceFailedControlArea.c)
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x1406FF678 (MiDeletePageFileSectionNodes.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1408D5FA4 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1408D5FEC (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
