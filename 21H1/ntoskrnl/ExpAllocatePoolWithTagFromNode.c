/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x14024FE80
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x14024FDE0 (ExAllocatePoolWithTagPriority.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x1402A1070 (ExAllocatePoolMm.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14038E8B8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14038ED3C (ExpSaBinaryArrayInsert.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C3FD0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1403C5D8C (ExpSaInitialize.c)
 *     ExAllocatePool2 @ 0x1409B1280 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B1340 (ExAllocatePool3.c)
 * Callees:
 *     MmGetNextNode @ 0x140241930 (MmGetNextNode.c)
 *     ExAllocateHeapPool @ 0x14024FF10 (ExAllocateHeapPool.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
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
      v13 = (_QWORD *)qword_140C57FC0;
      if ( (a1 & 0x200) != 0 )
        v13 = (_QWORD *)qword_140C57FC8;
      KeBugCheckEx(0x41u, a2, (unsigned int)v13[17], (unsigned int)v13[21] + (unsigned int)v13[23], 0LL);
    }
    if ( (a1 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  return result;
}
