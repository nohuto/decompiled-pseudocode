/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x1405BA494
 * Callers:
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaPageGroupDescriptorFree @ 0x1405BA4DC (ExpSaPageGroupDescriptorFree.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 */

PSLIST_ENTRY __fastcall ExpSaBinaryArrayRemove(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  int v3; // ecx
  _DWORD *v4; // r9
  PSLIST_ENTRY result; // rax
  unsigned __int64 v6; // r8

  v2 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v4 = *(_DWORD **)(v2 + 8LL * (unsigned int)(v3 - 2));
  result = (PSLIST_ENTRY)(unsigned int)a2;
  v6 = (unsigned int)a2 ^ (unsigned __int64)(unsigned int)(1 << v3);
  *(_QWORD *)&v4[2 * v6 + 2] = 0LL;
  if ( (*(_QWORD *)v4)-- == 1LL )
  {
    *(_QWORD *)(v2 + 8LL * (unsigned int)(a1 - 2)) = 0LL;
    return ExFreeHeapPool((ULONG_PTR)v4, a2, v6, v4);
  }
  return result;
}
