/*
 * XREFs of sub_14065EE5C @ 0x14065EE5C
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x14065D374 (WbAddHeapExecutedBlockToCache.c)
 *     WbGetHeapExecutedBlock @ 0x14065F79C (WbGetHeapExecutedBlock.c)
 * Callees:
 *     sub_14065F530 @ 0x14065F530 (sub_14065F530.c)
 *     sub_14065FE70 @ 0x14065FE70 (sub_14065FE70.c)
 */

__int64 __fastcall sub_14065EE5C(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_14065F530(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_14065FE70(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
