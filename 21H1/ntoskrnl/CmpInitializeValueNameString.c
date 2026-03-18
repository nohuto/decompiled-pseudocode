/*
 * XREFs of CmpInitializeValueNameString @ 0x140657FD8
 * Callers:
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x140656F34 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14071D9B8 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpCommitSetValueKeyUoW @ 0x14074D67C (CmpCommitSetValueKeyUoW.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x14074D9D4 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpMergeKeyValues @ 0x140874CA0 (CmpMergeKeyValues.c)
 * Callees:
 *     CmpCopyCompressedName @ 0x1406937C4 (CmpCopyCompressedName.c)
 */

__int64 __fastcall CmpInitializeValueNameString(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r10
  __int16 v4; // dx
  __int16 v5; // bx
  __int64 result; // rax
  __int64 v7; // r11

  v3 = a2;
  v4 = *(_WORD *)(a1 + 2);
  if ( (*(_BYTE *)(a1 + 16) & 1) != 0 )
  {
    v5 = 0x7FFF;
    *(_WORD *)v3 = 2 * v4;
    result = CmpCopyCompressedName(a3, 0x7FFFLL, a1 + 20);
  }
  else
  {
    *(_WORD *)v3 = v4;
    v5 = v4;
    v7 = a1 + 20;
  }
  *(_QWORD *)(v3 + 8) = v7;
  *(_WORD *)(v3 + 2) = v5;
  return result;
}
