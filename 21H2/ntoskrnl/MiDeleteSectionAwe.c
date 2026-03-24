/*
 * XREFs of MiDeleteSectionAwe @ 0x14054BB08
 * Callers:
 *     MiCreatePagingFileMap @ 0x14061C548 (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x1406C34F4 (MiDereferenceFailedControlArea.c)
 *     MiDeletePageFileSectionNodes @ 0x1406E8298 (MiDeletePageFileSectionNodes.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1408D5E44 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1408D5E8C (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
