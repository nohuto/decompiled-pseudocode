/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x140206288
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x140206224 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140202CB4 (ExAllocateFromNPagedLookasideList.c)
 *     IopAllocateFileObjectExtension @ 0x14022C1D0 (IopAllocateFileObjectExtension.c)
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     IopSetTypeSpecificFoExtension @ 0x1402B7F84 (IopSetTypeSpecificFoExtension.c)
 *     IopGetFileObjectExtension @ 0x1403567E0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 FileObjectExtension; // r8
  char v7; // r9
  void *v8; // r8
  __int64 result; // rax
  _OWORD *v10; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  LOBYTE(a4) = 0;
  v11 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = IopAllocateFileObjectExtension(a1, &v11, a3, a4);
    v4 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_9;
  }
  FileObjectExtension = IopGetFileObjectExtension(a1, 6LL, &v11, a4);
  if ( !FileObjectExtension )
  {
LABEL_9:
    v10 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = (__int64)v10;
    if ( !v10 )
      return 3221225626LL;
    v7 = 1;
    *v10 = 0LL;
    v10[1] = 0LL;
    v10[2] = 0LL;
  }
  *(_QWORD *)(FileObjectExtension + 40) = *(_QWORD *)(a2 + 40);
  if ( v7 )
  {
    v4 = IopSetTypeSpecificFoExtension(v11, 6LL);
    if ( v4 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v8);
  }
  return (unsigned int)v4;
}
