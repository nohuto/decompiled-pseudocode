/*
 * XREFs of MiDeleteSectionAwe @ 0x14054A008
 * Callers:
 *     MiDeletePageFileSectionNodes @ 0x140682688 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x1406826EC (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x1406E3578 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1408D8684 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1408D86CC (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
