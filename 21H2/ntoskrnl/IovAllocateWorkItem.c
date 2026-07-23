/*
 * XREFs of IovAllocateWorkItem @ 0x1409C59F0
 * Callers:
 *     <none>
 * Callees:
 *     VeAllocatePoolWithTagPriority @ 0x1409D55D0 (VeAllocatePoolWithTagPriority.c)
 */

__int64 __fastcall IovAllocateWorkItem(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = VeAllocatePoolWithTagPriority((POOL_TYPE)640, 0x58uLL, 0x69776656u, HighPoolPriority, a2);
  if ( result )
  {
    *(_QWORD *)(result + 56) = 0LL;
    *(_QWORD *)(result + 40) = a1;
    *(_DWORD *)(result + 64) = 1;
    *(_QWORD *)result = 0LL;
    *(_QWORD *)(result + 16) = IopProcessWorkItem;
    *(_QWORD *)(result + 24) = result;
  }
  return result;
}
