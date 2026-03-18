/*
 * XREFs of IopGetSetSpecificExtension @ 0x140281A24
 * Callers:
 *     IopSetLockOperationProcess @ 0x1402E3C10 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x14033E7F0 (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x140500D7C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405018B8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x140601200 (IopRetrieveTransactionParameters.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x140674ADC (IopAllocateFoExtensionsOnCreate.c)
 *     IoCreateStreamFileObjectEx2 @ 0x140702350 (IoCreateStreamFileObjectEx2.c)
 *     IoCopyDeviceObjectHint @ 0x14088F490 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x140281B14 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x140281DD0 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x140281F38 (IopVerifierExAllocatePool_0.c)
 *     IopSetTypeSpecificFoExtension @ 0x140305BE0 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v11; // rcx
  void *FileObjectExtension; // rbx
  void *Pool_0; // rax

  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = (void *)IopGetFileObjectExtension(a1, a2);
    if ( !FileObjectExtension && a4 )
    {
      Pool_0 = (void *)IopVerifierExAllocatePool_0(v11, v7);
      FileObjectExtension = Pool_0;
      if ( !Pool_0 )
        return 3221225626LL;
      memset(Pool_0, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(0LL, a2) < 0 )
      {
        ExFreePoolWithTag(FileObjectExtension, 0);
        FileObjectExtension = (void *)IopGetFileObjectExtension(a1, a2);
      }
    }
    if ( a5 )
      *a5 = FileObjectExtension;
    if ( a6 )
      *a6 = 0LL;
    return 0LL;
  }
  return result;
}
