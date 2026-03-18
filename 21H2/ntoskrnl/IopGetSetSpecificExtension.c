/*
 * XREFs of IopGetSetSpecificExtension @ 0x1402A38B4
 * Callers:
 *     IopCheckInitiatorHint @ 0x140280170 (IopCheckInitiatorHint.c)
 *     IopSetLockOperationProcess @ 0x1402A36D0 (IopSetLockOperationProcess.c)
 *     IopGetSetStreamIdentifier @ 0x14055802C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x140558AE0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14071CAFC (IopAllocateFoExtensionsOnCreate.c)
 *     IopRetrieveTransactionParameters @ 0x14072B200 (IopRetrieveTransactionParameters.c)
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IoCreateStreamFileObjectEx2 @ 0x14074CD70 (IoCreateStreamFileObjectEx2.c)
 *     IoCopyDeviceObjectHint @ 0x1409361B0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x1402A3A14 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x1402A3A60 (IopAllocateFileObjectExtension.c)
 *     IopSetTypeSpecificFoExtension @ 0x1402A3F70 (IopSetTypeSpecificFoExtension.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 result; // rax
  void *FileObjectExtension; // r8

  v7 = a3;
  if ( !a4 || (result = IopAllocateFileObjectExtension(a1, 0LL), (int)result >= 0) )
  {
    FileObjectExtension = (void *)IopGetFileObjectExtension(a1, a2);
    if ( !FileObjectExtension && a4 )
    {
      if ( !ExAllocatePool2(64LL, v7, 1162243913LL) )
        return 3221225626LL;
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
