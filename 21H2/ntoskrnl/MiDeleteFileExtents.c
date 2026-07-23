/*
 * XREFs of MiDeleteFileExtents @ 0x1406FF658
 * Callers:
 *     MiDeleteControlArea @ 0x140302834 (MiDeleteControlArea.c)
 *     MiSetPagesModified @ 0x1405352F0 (MiSetPagesModified.c)
 * Callees:
 *     MiControlAreaUsingCopyExtents @ 0x140322F4C (MiControlAreaUsingCopyExtents.c)
 *     MiDeleteImageExtentList @ 0x1408D0170 (MiDeleteImageExtentList.c)
 */

__int64 __fastcall MiDeleteFileExtents(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rbx

  result = MiControlAreaUsingCopyExtents(a1);
  if ( (_DWORD)result )
  {
    v3 = *(_QWORD *)(v2 + 96);
    if ( (*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0uLL) != 0 )
    {
      result = MiDeleteImageExtentList((PVOID)(*(_QWORD *)(v3 + 48) & 0xFFFFFFFFFFFFFFF0uLL));
      *(_QWORD *)(v3 + 48) = 0LL;
    }
  }
  return result;
}
