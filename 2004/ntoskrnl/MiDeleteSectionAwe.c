/*
 * XREFs of MiDeleteSectionAwe @ 0x140546638
 * Callers:
 *     MiDeletePageFileSectionNodes @ 0x140609AD8 (MiDeletePageFileSectionNodes.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     MiDereferenceFailedControlArea @ 0x140710F04 (MiDereferenceFailedControlArea.c)
 * Callees:
 *     MiDeleteAweInfo @ 0x1408D2844 (MiDeleteAweInfo.c)
 *     MiDeleteAweInfoPages @ 0x1408D288C (MiDeleteAweInfoPages.c)
 */

__int64 __fastcall MiDeleteSectionAwe(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 8);
  MiDeleteAweInfoPages(v1);
  return MiDeleteAweInfo(0LL, v1);
}
