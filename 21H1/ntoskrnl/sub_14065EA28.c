/*
 * XREFs of sub_14065EA28 @ 0x14065EA28
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x14065F368 (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406D6A70 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_14065F0FC @ 0x14065F0FC (sub_14065F0FC.c)
 *     sub_14065FA3C @ 0x14065FA3C (sub_14065FA3C.c)
 */

__int64 __fastcall sub_14065EA28(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14065F0FC(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_14065FA3C(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
