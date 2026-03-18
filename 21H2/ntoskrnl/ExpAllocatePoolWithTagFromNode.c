/*
 * XREFs of ExpAllocatePoolWithTagFromNode @ 0x140349710
 * Callers:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     CcAsyncCopyRead @ 0x1402F5790 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F5AEC (CcPostWorkQueueAsyncRead.c)
 *     ExAllocatePoolMm @ 0x14030B860 (ExAllocatePoolMm.c)
 *     ExAllocateCacheAwarePushLock @ 0x140389430 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403A61E8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x1403A6628 (ExpSaBinaryArrayInsert.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403D0750 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcInitializeNumaNode @ 0x1403D1580 (CcInitializeNumaNode.c)
 *     ExpSaInitialize @ 0x1403D9134 (ExpSaInitialize.c)
 *     CcInitializeNumaNodeForVolume @ 0x14053C5FC (CcInitializeNumaNodeForVolume.c)
 *     CcInitializeQuickLWSThreadItem @ 0x14053CF1C (CcInitializeQuickLWSThreadItem.c)
 *     ExpAllocatePoolWithTagPriority @ 0x140A6E028 (ExpAllocatePoolWithTagPriority.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 *     MmGetNextNode @ 0x14030B3F0 (MmGetNextNode.c)
 *     ExAllocateHeapPool @ 0x1403497C0 (ExAllocateHeapPool.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ExpAllocatePoolWithTagFromNode(POOL_TYPE a1, ULONG_PTR a2, __int64 a3, int a4, int a5)
{
  int v7; // r14d
  int v8; // r15d
  int v9; // ebx
  __int64 result; // rax
  _QWORD *v11; // rcx
  int v12; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 >= 0 )
    v7 = 1;
  else
    v7 = (unsigned __int16)KeNumberNodes;
  v8 = a5;
  v9 = a4 & 0x7FFFFFFF;
  v12 = 0;
  if ( a4 >= 0 )
    v9 = a4;
  while ( 1 )
  {
    result = ExAllocateHeapPool(a1, v8);
    if ( result )
      break;
    if ( !--v7 || (unsigned int)MmGetNextNode(v9, &v12) == -1 )
    {
      ++ExPoolFailures;
      if ( (a1 & 2) != 0 )
      {
        v11 = (_QWORD *)qword_140C5EA40[0];
        if ( (a1 & 0x200) != 0 )
          v11 = (_QWORD *)qword_140C5EA48;
        KeBugCheckEx(0x41u, a2, (unsigned int)v11[17], (unsigned int)v11[21] + (unsigned int)v11[23], 0LL);
      }
      if ( (a1 & 0x10) != 0 )
        RtlRaiseStatus(-1073741670);
      return 0LL;
    }
  }
  return result;
}
