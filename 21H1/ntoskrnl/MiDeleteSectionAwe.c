/*
 * XREFs of MiDeleteSectionAwe @ 0x140545FE8
 * Callers:
 *     MiDeletePageFileSectionNodes @ 0x14063EC28 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14063F164 (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x1406ED434 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1408D14F4 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1408D153C (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
