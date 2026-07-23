/*
 * XREFs of NtRegisterThreadTerminatePort @ 0x14070C180
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140297DA0 (ExAllocatePoolWithQuotaTag.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtRegisterThreadTerminatePort(HANDLE PortHandle)
{
  struct _KTHREAD *CurrentThread; // rbx
  NTSTATUS result; // eax
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v4; // rcx
  PADAPTER_OBJECT DmaAdapter; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             PortHandle,
             1u,
             LpcPortObjectType,
             CurrentThread->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  if ( result >= 0 )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x10uLL, 0x70547350u);
    v4 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      PoolWithQuotaTag[1] = DmaAdapter;
      *PoolWithQuotaTag = CurrentThread[1].InitialStack;
      result = 0;
      CurrentThread[1].InitialStack = v4;
    }
    else
    {
      HalPutDmaAdapter(DmaAdapter);
      return -1073741670;
    }
  }
  return result;
}
