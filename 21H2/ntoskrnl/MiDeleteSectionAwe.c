/*
 * XREFs of MiDeleteSectionAwe @ 0x1405AA5E8
 * Callers:
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 *     MiDeletePageFileSectionNodes @ 0x1406F4878 (MiDeletePageFileSectionNodes.c)
 *     MiDereferenceFailedControlArea @ 0x1407F854C (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x14097CFDC (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x14097D034 (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
