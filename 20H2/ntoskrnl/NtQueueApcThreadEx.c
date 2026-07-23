/*
 * XREFs of NtQueueApcThreadEx @ 0x140699390
 * Callers:
 *     NtQueueApcThread @ 0x1406991A0 (NtQueueApcThread.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeInitializeApc @ 0x1402D69A0 (KeInitializeApc.c)
 *     KeInsertQueueApc @ 0x1402EBBB0 (KeInsertQueueApc.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __cdecl NtQueueApcThreadEx(
        HANDLE ThreadHandle,
        HANDLE ReserveHandle,
        PPS_APC_ROUTINE ApcRoutine,
        PVOID ApcArgument1,
        PVOID ApcArgument2,
        PVOID ApcArgument3)
{
  HANDLE v7; // rbx
  char v10; // r14
  KPROCESSOR_MODE PreviousMode; // si
  NTSTATUS result; // eax
  struct _DMA_ADAPTER *v13; // rdi
  unsigned __int64 v14; // rax
  __int16 v15; // ax
  __int64 v16; // rcx
  char *PoolWithQuotaTag; // rbx
  void (__fastcall *v18)(__int64); // r9
  void (__fastcall *v19)(char *); // rsi
  int v20; // ebx
  PVOID Object; // [rsp+40h] [rbp-38h] BYREF
  PADAPTER_OBJECT DmaAdapter; // [rsp+88h] [rbp+10h] BYREF

  v7 = 0LL;
  v10 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( ReserveHandle != (HANDLE)1 )
    v7 = ReserveHandle;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             ThreadHandle,
             0x10u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  if ( result >= 0 )
  {
    v13 = DmaAdapter;
    if ( (*(_DWORD *)(&DmaAdapter[7].Size + 1) & 0x400) != 0
      || (v13 = DmaAdapter, (v14 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10]) != 0)
      && ((v15 = *(_WORD *)(v14 + 8), v15 == 332) || v15 == 452)
      && ((v16 = *(_QWORD *)(*(_QWORD *)&DmaAdapter[34].Version + 1408LL)) == 0 || *(_WORD *)(v16 + 8) == 0x8664)
      && (unsigned __int64)-((__int64)ApcRoutine >> 2) <= 0xFFFFFFFF )
    {
      v20 = -1073741816;
    }
    else if ( v7 )
    {
      Object = 0LL;
      v20 = ObReferenceObjectByHandle(v7, 2u, PspMemoryReserveObjectTypes, PreviousMode, &Object, 0LL);
      if ( v20 >= 0 )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Object, 1, 0) )
        {
          v18 = PspUserApcReserveKernelRoutine;
          v13 = DmaAdapter;
          v19 = (void (__fastcall *)(char *))PspUserApcReserveKernelRoutine;
          PoolWithQuotaTag = (char *)Object + 8;
LABEL_15:
          KeInitializeApc(
            (__int64)PoolWithQuotaTag,
            (__int64)v13,
            0,
            (__int64)v18,
            (__int64)v19,
            (__int64)ApcRoutine,
            v10,
            (__int64)ApcArgument1);
          if ( KeInsertQueueApc((__int64)PoolWithQuotaTag, (__int64)ApcArgument2, (__int64)ApcArgument3, 0) )
          {
            v20 = 0;
          }
          else
          {
            v19(PoolWithQuotaTag);
            v20 = -1073741823;
          }
          goto LABEL_17;
        }
        HalPutDmaAdapter((PADAPTER_OBJECT)Object);
        v13 = DmaAdapter;
        v20 = -1073741584;
      }
    }
    else
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, 0x58uLL, 0x70617350u);
      if ( PoolWithQuotaTag )
      {
        v18 = (void (__fastcall *)(__int64))KeSpecialUserApcKernelRoutine;
        v19 = (void (__fastcall *)(char *))ExFreePoolWithTag;
        v10 = ReserveHandle != (HANDLE)1;
        if ( ReserveHandle != (HANDLE)1 )
          v18 = (void (__fastcall *)(__int64))SC_ENV::Free;
        goto LABEL_15;
      }
      v20 = -1073741801;
    }
LABEL_17:
    HalPutDmaAdapter(v13);
    return v20;
  }
  return result;
}
