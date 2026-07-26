/*
 * XREFs of CmpRegUtilAllocateUnicodeString @ 0x1C01291CC
 * Callers:
 *     CmRegUtilUcValueSetUcString @ 0x1C0128FC4 (CmRegUtilUcValueSetUcString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpRegUtilAllocateUnicodeString(__int64 a1, unsigned __int16 a2)
{
  PVOID PoolWithTag; // rax

  *(_WORD *)a1 = 0;
  *(_WORD *)(a1 + 2) = a2 + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2 + 2LL, 0x63557050u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC000009A : 0;
}
