/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x14028C720
 * Callers:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x140248040 (ExAllocatePoolMm.c)
 *     ExAllocatePoolWithTagPriority @ 0x14028C680 (ExAllocatePoolWithTagPriority.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038F428 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14038F8AC (ExpSaBinaryArrayInsert.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C4F40 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1403C6CFC (ExpSaInitialize.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B1340 (ExAllocatePool3.c)
 * Callees:
 *     MmGetNextNode @ 0x14027E6C8 (MmGetNextNode.c)
 *     ExAllocateHeapPool @ 0x14028C7B0 (ExAllocateHeapPool.c)
 *     RtlRaiseStatus @ 0x1403281A0 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
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
      v13 = (_QWORD *)qword_140C57EC0[0];
      if ( (a1 & 0x200) != 0 )
        v13 = (_QWORD *)qword_140C57EC8;
      KeBugCheckEx(0x41u, a2, (unsigned int)v13[17], (unsigned int)v13[21] + (unsigned int)v13[23], 0LL);
    }
    if ( (a1 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  return result;
}
