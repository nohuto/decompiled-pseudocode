/*
 * XREFs of IoSetOplockPrivateFoExt @ 0x1402AABB8
 * Callers:
 *     FsRtlpOplockEnqueueRH @ 0x1402AAB54 (FsRtlpOplockEnqueueRH.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140213400 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     IopSetTypeSpecificFoExtension @ 0x140236194 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1402D0A50 (IopAllocateFileObjectExtension.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoSetOplockPrivateFoExt(__int64 a1, __int64 a2)
{
  int v2; // ebx
  signed __int64 FileObjectExtension; // r8
  char v5; // r9
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
  FileObjectExtension = IopGetFileObjectExtension(a1, 6LL);
  if ( !FileObjectExtension )
  {
LABEL_9:
    v8 = ExAllocateFromNPagedLookasideList(&IopOplockFoExtLookasideList);
    FileObjectExtension = (signed __int64)v8;
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
    v2 = IopSetTypeSpecificFoExtension(v9, 6u, FileObjectExtension);
    if ( v2 < 0 )
      ExFreeToNPagedLookasideList(&IopOplockFoExtLookasideList, v6);
  }
  return (unsigned int)v2;
}
