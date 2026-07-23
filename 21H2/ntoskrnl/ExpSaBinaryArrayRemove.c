/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x1405BA6C4
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA70C (ExpSaPageGroupDescriptorFree.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14034C810 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall ExpSaBinaryArrayRemove(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  int v3; // ecx
  _QWORD *v4; // r9
  PSLIST_ENTRY result; // rax

  v2 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v4 = *(_QWORD **)(v2 + 8LL * (unsigned int)(v3 - 2));
  result = (PSLIST_ENTRY)a2;
  v4[(a2 ^ (unsigned __int64)(unsigned int)(1 << v3)) + 1] = 0LL;
  if ( (*v4)-- == 1LL )
  {
    *(_QWORD *)(v2 + 8LL * (unsigned int)(a1 - 2)) = 0LL;
    return ExFreeHeapPool((ULONG_PTR)v4);
  }
  return result;
}
