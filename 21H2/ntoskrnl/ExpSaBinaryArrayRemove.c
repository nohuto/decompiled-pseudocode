/*
 * XREFs of ExpSaBinaryArrayRemove @ 0x1403A0690
 * Callers:
 *     ExpSaPageGroupDescriptorFree @ 0x1403A0424 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 */

__int64 __fastcall ExpSaBinaryArrayRemove(__int64 a1, unsigned int a2)
{
  __int64 v2; // r10
  int v3; // ecx
  _QWORD *v4; // r9
  __int64 result; // rax

  v2 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v4 = *(_QWORD **)(v2 + 8LL * (unsigned int)(v3 - 2));
  result = a2;
  v4[(a2 ^ (unsigned __int64)(unsigned int)(1 << v3)) + 1] = 0LL;
  if ( (*v4)-- == 1LL )
  {
    *(_QWORD *)(v2 + 8LL * (unsigned int)(a1 - 2)) = 0LL;
    return ExFreeHeapPool((ULONG_PTR)v4);
  }
  return result;
}
