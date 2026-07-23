/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x1405F3724
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     EtwEventEnabled @ 0x14026B690 (EtwEventEnabled.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     EtwpSetProviderTraitsCommon @ 0x1405F38C0 (EtwpSetProviderTraitsCommon.c)
 *     ObReferenceObjectByHandle @ 0x14062B200 (ObReferenceObjectByHandle.c)
 *     EtwpEventWriteRegistrationStatus @ 0x140935238 (EtwpEventWriteRegistrationStatus.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, int a3)
{
  struct _DMA_ADAPTER *v6; // rsi
  void *v7; // rcx
  NTSTATUS v8; // ebx
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp+8h] BYREF
  PADAPTER_OBJECT v18; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
    goto LABEL_18;
  v7 = *(void **)a1;
  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(v7, 0x800u, EtwpRegistrationObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  v6 = DmaAdapter;
  v18 = DmaAdapter;
  if ( v8 < 0 )
    goto LABEL_13;
  if ( (DmaAdapter[6].Size & 8) == 0 )
  {
    if ( DmaAdapter[6].DmaOperations )
    {
      v8 = -1073741823;
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 16);
      if ( (_WORD)v9 )
      {
        v10 = *(_QWORD *)(a1 + 8);
        if ( v10 + v9 > 0x7FFFFFFF0000LL || v10 + v9 < v10 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          LOWORD(v9) = *(_WORD *)(a1 + 16);
        }
      }
      PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v9 + 28LL, 0x54777445u);
      Node = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove((char *)&PoolWithTag[1].Left + 4, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
        v8 = EtwpSetProviderTraitsCommon(
               a1,
               a2,
               a3,
               (int)v6,
               Node,
               *(unsigned __int16 *)(a1 + 16),
               &EtwpProviderTraitsUmMutex,
               &EtwpProviderTraitsUmTree);
      }
      else
      {
        v8 = -1073741670;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = -1073741811;
  }
LABEL_13:
  if ( v6 )
  {
    if ( v8 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
      EtwpEventWriteRegistrationStatus(v15, v14, v16, v6, v8);
    HalPutDmaAdapter(v6);
  }
  return (unsigned int)v8;
}
