/*
 * XREFs of MiDeleteFileExtents @ 0x140609194
 * Callers:
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiSetPagesModified @ 0x14052FBE0 (MiSetPagesModified.c)
 * Callees:
 *     MiControlAreaUsingCopyExtents @ 0x140221FEC (MiControlAreaUsingCopyExtents.c)
 *     MiDeleteImageExtentList @ 0x1408CCA10 (MiDeleteImageExtentList.c)
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
