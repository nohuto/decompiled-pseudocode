/*
 * XREFs of CmpInitializeValueNameString @ 0x1406A553C
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406A4758 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14072D688 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x1407608EC (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x140760C44 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x14087BB00 (CmpMergeKeyValues.c)
 * Callees:
 *     CmSiBugCheck @ 0x1404EC5D4 (CmSiBugCheck.c)
 *     CmpCopyCompressedName @ 0x140703E94 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  __int16 v3; // r9
  unsigned __int16 v4; // r9
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // r11

  v3 = *(_WORD *)(BugCheckParameter3 + 2);
  if ( (*(_BYTE *)(BugCheckParameter3 + 16) & 1) != 0 )
  {
    v4 = 2 * v3;
    *(_WORD *)a2 = v4;
    if ( v4 > 0x7FFFu )
      CmSiBugCheck(0x31uLL, 1uLL, BugCheckParameter3, v4);
    result = CmpCopyCompressedName(a3, 0x7FFFLL, BugCheckParameter3 + 20);
    *(_QWORD *)(v6 + 8) = v7;
    *(_WORD *)(v6 + 2) = 0x7FFF;
  }
  else
  {
    result = BugCheckParameter3 + 20;
    *(_WORD *)a2 = v3;
    *(_QWORD *)(a2 + 8) = BugCheckParameter3 + 20;
    *(_WORD *)(a2 + 2) = v3;
  }
  return result;
}
