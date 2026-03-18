/*
 * XREFs of CmpUnlockKeyBodyFromMemory @ 0x140915784
 * Callers:
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 */

__int64 __fastcall CmpUnlockKeyBodyFromMemory(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 104);
  MmUnlockPages((PMDL)(v1 + 64));
  MmUnlockPages((PMDL)v1);
  CmSiFreeMemory((PPRIVILEGE_SET)v1);
  *(_QWORD *)(a1 + 104) = 0LL;
  result = 65503LL;
  *(_WORD *)(a1 + 48) &= ~0x20u;
  return result;
}
