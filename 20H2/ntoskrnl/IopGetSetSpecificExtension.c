/*
 * XREFs of IopGetSetSpecificExtension @ 0x14029F8F4
 * Callers:
 *     IopSetLockOperationProcess @ 0x1403056F8 (IopSetLockOperationProcess.c)
 *     IopCheckInitiatorHint @ 0x1403642C0 (IopCheckInitiatorHint.c)
 *     IopGetSetStreamIdentifier @ 0x140504CA4 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1405057D8 (IopAdjustFileObjectKeepAliveCount.c)
 *     IoCreateStreamFileObjectEx2 @ 0x1405D9BF0 (IoCreateStreamFileObjectEx2.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IopRetrieveTransactionParameters @ 0x140600C60 (IopRetrieveTransactionParameters.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14062CB7C (IopAllocateFoExtensionsOnCreate.c)
 *     IoCopyDeviceObjectHint @ 0x1408962A0 (IoCopyDeviceObjectHint.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14029FA60 (IopGetFileObjectExtension.c)
 *     IopAllocateFileObjectExtension @ 0x14029FD20 (IopAllocateFileObjectExtension.c)
 *     IopVerifierExAllocatePool_0 @ 0x14029FE88 (IopVerifierExAllocatePool_0.c)
 *     IopSetTypeSpecificFoExtension @ 0x140314B10 (IopSetTypeSpecificFoExtension.c)
 *     memset @ 0x140411300 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopGetSetSpecificExtension(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  char v6; // si
  size_t v7; // r15
  __int64 result; // rax
  __int64 FileObjectExtension; // rax
  __int64 v12; // rcx
  __int64 v13; // r14
  void *v14; // rbx
  void *Pool_0; // rax
  __int64 v16; // r9
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  v17[0] = 0LL;
  v6 = a4;
  v7 = (unsigned int)a3;
  if ( !(_BYTE)a4 || (result = IopAllocateFileObjectExtension(a1, 0LL, a3, a4), (int)result >= 0) )
  {
    FileObjectExtension = IopGetFileObjectExtension(a1, a2, v17, a4);
    v13 = v17[0];
    v14 = (void *)FileObjectExtension;
    if ( !FileObjectExtension && v6 )
    {
      Pool_0 = (void *)IopVerifierExAllocatePool_0(v12, v7);
      v14 = Pool_0;
      if ( !Pool_0 )
        return 3221225626LL;
      memset(Pool_0, 0, v7);
      if ( (int)IopSetTypeSpecificFoExtension(v13, a2) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        v14 = (void *)IopGetFileObjectExtension(a1, a2, 0LL, v16);
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
