/*
 * XREFs of sub_140619308 @ 0x140619308
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x140619C48 (WbGetHeapExecutedBlock.c)
 *     WbAddHeapExecutedBlockToCache @ 0x1406DA080 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     sub_1406199DC @ 0x1406199DC (sub_1406199DC.c)
 *     sub_14061A31C @ 0x14061A31C (sub_14061A31C.c)
 */

__int64 __fastcall sub_140619308(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  result = sub_1406199DC(a1 + 8, a2, 8, (unsigned int)&v7, a4);
  if ( (int)result >= 0 && a3 )
  {
    result = sub_14061A31C(v7);
    if ( (int)result >= 0 )
      *a3 = v6;
  }
  return result;
}
