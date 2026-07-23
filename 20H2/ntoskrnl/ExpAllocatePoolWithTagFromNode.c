/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x140211FF0
 * Callers:
 *     ExAllocatePoolWithTagPriority @ 0x140211F50 (ExAllocatePoolWithTagPriority.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExAllocatePoolMm @ 0x14022D3E0 (ExAllocatePoolMm.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140391918 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x140391D9C (ExpSaBinaryArrayInsert.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403C7930 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaInitialize @ 0x1403C978C (ExpSaInitialize.c)
 *     ExAllocatePool2 @ 0x1409B7280 (ExAllocatePool2.c)
 *     ExAllocatePool3 @ 0x1409B7340 (ExAllocatePool3.c)
 * Callees:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     MmGetNextNode @ 0x14028738C (MmGetNextNode.c)
 *     RtlRaiseStatus @ 0x1402FB1C0 (RtlRaiseStatus.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(POOL_TYPE a1, ULONG_PTR a2, ULONG a3, int a4, int a5)
{
  int v8; // r14d
  int v9; // r15d
  unsigned int v10; // ebx
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
      v13 = (_QWORD *)qword_140C57F40;
      if ( (a1 & 0x200) != 0 )
        v13 = (_QWORD *)qword_140C57F48;
      KeBugCheckEx(0x41u, a2, (unsigned int)v13[17], (unsigned int)v13[21] + (unsigned int)v13[23], 0LL);
    }
    if ( (a1 & 0x10) != 0 )
      RtlRaiseStatus(-1073741670);
    return 0LL;
  }
  return result;
}
