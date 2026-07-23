/*
 * XREFs of IopGetSetSpecificExtension @ 0x140361838
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402722F0 (IopCheckInitiatorHint.c)
 *     IopSetLockOperationProcess @ 0x14036245C (IopSetLockOperationProcess.c)
 *     IopGetSetStreamIdentifier @ 0x1405067A4 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405072D8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1406C9360 (IoCreateStreamFileObjectEx2.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406F68FC (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x14071AF00 (IopRetrieveTransactionParameters.c)
 *     IoCopyDeviceObjectHint @ 0x1408939D0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopVerifierExAllocatePool_0 @ 0x140234E58 (IopVerifierExAllocatePool_0.c)
 *     IopSetTypeSpecificFoExtension @ 0x140236194 (IopSetTypeSpecificFoExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1402D0A50 (IopAllocateFileObjectExtension.c)
 *     IopGetFileObjectExtension @ 0x140361530 (IopGetFileObjectExtension.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        __int64 *a6)
{
  SIZE_T v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  PVOID Pool_0; // rax
  __int64 v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v16);
    v13 = v16[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      Pool_0 = IopVerifierExAllocatePool_0(v12, v7);
      v14 = Pool_0;
      if ( !Pool_0 )
        return 3221225626LL;
      memset(Pool_0, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2, (signed __int64)v14) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL);
      }
    }
    if ( a5 )
      *a5 = v14;
    if ( a6 )
      *a6 = v13;
    return 0LL;
  }
  return result;
}
