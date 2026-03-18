/*
 * XREFs of IopGetSetSpecificExtension @ 0x1402289D4
 * Callers:
 *     IopCheckInitiatorHint @ 0x140278000 (IopCheckInitiatorHint.c)
 *     IopSetLockOperationProcess @ 0x1402D6EC0 (IopSetLockOperationProcess.c)
 *     IopGetSetStreamIdentifier @ 0x1405013CC (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140501F08 (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140635260 (IoCreateStreamFileObjectEx2.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14065867C (IopAllocateFoExtensionsOnCreate.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x1406792E0 (IopRetrieveTransactionParameters.c)
 *     IoCopyDeviceObjectHint @ 0x1408907B0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140228AC4 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140228D80 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool @ 0x140228EE8 (IopVerifierExAllocatePool.c)
 *     IopSetTypeSpecificFoExtension @ 0x140343690 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  size_t v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  void *Pool; // rax
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v16);
    v13 = v16[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && a4 )
    {
      Pool = (void *)IopVerifierExAllocatePool(v12, v7);
      v14 = Pool;
      if ( !Pool )
        return 3221225626LL;
      memset(Pool, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2, v14) < 0 )
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
