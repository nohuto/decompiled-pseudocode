/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x140346ED0
 * Callers:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x140346100 (ExAllocatePoolMm.c)
 *     ExAllocatePoolWithTagPriority @ 0x140346E30 (ExAllocatePoolWithTagPriority.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391F38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x140392334 (ExpSaBinaryArrayInsert.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C8860 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1403CA4CC (ExpSaInitialize.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B5270 (ExAllocatePool3.c)
 * Callees:
 *     MmGetNextNode @ 0x140211644 (MmGetNextNode.c)
 *     RtlRaiseStatus @ 0x140212910 (RtlRaiseStatus.c)
 *     ExAllocateHeapPool @ 0x140346F60 (ExAllocateHeapPool.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
      v13 = (_QWORD *)qword_140C58100[0];
      if ( (a1 & 0x200) != 0 )
        v13 = (_QWORD *)qword_140C58108;
      KeBugCheckEx(0x41u, a2, (unsigned int)v13[17], (unsigned int)v13[21] + (unsigned int)v13[23], 0LL);
    }
    if ( (a1 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  return result;
}
