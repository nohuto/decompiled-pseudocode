/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x14033C180
 * Callers:
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x14033B3B0 (ExAllocatePoolMm.c)
 *     ExAllocatePoolWithTagPriority @ 0x14033C0E0 (ExAllocatePoolWithTagPriority.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391DE8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x1403921E4 (ExpSaBinaryArrayInsert.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C86C0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1403CA32C (ExpSaInitialize.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B41B0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B4270 (ExAllocatePool3.c)
 * Callees:
 *     MmGetNextNode @ 0x1402936D4 (MmGetNextNode.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 *     ExAllocateHeapPool @ 0x14033C210 (ExAllocateHeapPool.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(POOL_TYPE a1, ULONG_PTR a2, ULONG a3, int a4, int a5)
{
  int v8; // r14d
  int v9; // r15d
  int v10; // ebx
  unsigned int NextNode; // eax
  __int64 result; // rax
  _QWORD *v13; // rcx
  int v14; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 >= 0 )
    v8 = 1;
  else
    v8 = (unsigned __int16)KeNumberNodes;
  v9 = a5;
  v10 = a4 & 0x7FFFFFFF;
  v14 = 0;
  if ( a4 >= 0 )
    v10 = a4;
  NextNode = v10;
  while ( 1 )
  {
    result = ExAllocateHeapPool(a1, a2, a3, NextNode, v9);
    if ( result )
      break;
    if ( --v8 )
    {
      NextNode = MmGetNextNode(v10, &v14);
      if ( NextNode != -1 )
        continue;
    }
    ++ExPoolFailures;
    if ( (a1 & 2) != 0 )
    {
      v13 = (_QWORD *)qword_140C580C0[0];
      if ( (a1 & 0x200) != 0 )
        v13 = (_QWORD *)qword_140C580C8;
      KeBugCheckEx(0x41u, a2, (unsigned int)v13[17], (unsigned int)v13[21] + (unsigned int)v13[23], 0LL);
    }
    if ( (a1 & 0x10) != 0 )
      RtlRaiseStatus(0xC000009A);
    return 0LL;
  }
  return result;
}
