/*
 * XREFs of IopGetSetSpecificExtension @ 0x140356AE8
 * Callers:
 *     IopCheckInitiatorHint @ 0x1402602E0 (IopCheckInitiatorHint.c)
 *     IopSetLockOperationProcess @ 0x14035770C (IopSetLockOperationProcess.c)
 *     IopGetSetStreamIdentifier @ 0x140506824 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140507358 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x140700F60 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x140703B20 (IopRetrieveTransactionParameters.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14071BF10 (IoCreateStreamFileObjectEx2.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14072044C (IopAllocateFoExtensionsOnCreate.c)
 *     IoCopyDeviceObjectHint @ 0x140893870 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x14022C1D0 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x1402B6C78 (IopVerifierExAllocatePool_0.c)
 *     IopSetTypeSpecificFoExtension @ 0x1402B7F84 (IopSetTypeSpecificFoExtension.c)
 *     IopGetFileObjectExtension @ 0x1403567E0 (IopGetFileObjectExtension.c)
 *     memset @ 0x140414200 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
