/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x140297828
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x1402977C4 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140228D80 (IopAllocateFileObjectExtension.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14026E044 (ExAllocateFromNPagedLookasideList.c)
 *     IopSetTypeSpecificFoExtension @ 0x140343690 (IopSetTypeSpecificFoExtension.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 FileObjectExtension; // r8
  char v5; // r10
  void *v6; // r8
  __int64 result; // rax
  _OWORD *v8; // rax
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v9 = 0LL;
  if ( !*(_QWORD *)(a1 + 208) )
  {
    result = IopAllocateFileObjectExtension(a1, &v9);
    v2 = result;
    if ( (int)result < 0 )
      return result;
    goto LABEL_9;
  }
  FileObjectExtension = IopGetFileObjectExtension(a1, 6, &v9);
  if ( !FileObjectExtension )
  {
LABEL_9:
    v8 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = (__int64)v8;
    if ( !v8 )
      return 3221225626LL;
    v5 = 1;
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
  }
  *(_QWORD *)(FileObjectExtension + 40) = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v2 = IopSetTypeSpecificFoExtension(v9, 6LL, FileObjectExtension);
    if ( v2 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v6);
  }
  return (unsigned int)v2;
}
