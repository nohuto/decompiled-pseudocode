/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x14066B574
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     EtwEventEnabled @ 0x140212640 (EtwEventEnabled.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     EtwpSetProviderTraitsCommon @ 0x14066B740 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1409364D8 (EtwpEventWriteRegistrationStatus.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, int a3)
{
  struct _DMA_ADAPTER *v6; // rsi
  void *v7; // rcx
  NTSTATUS v8; // ebx
  unsigned __int16 Size; // ax
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp+8h] BYREF
  PADAPTER_OBJECT v19; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
    goto LABEL_15;
  v7 = *(void **)a1;
  DmaAdapter = 0LL;
  v8 = ObReferenceObjectByHandle(v7, 0x800u, EtwpRegistrationObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  v6 = DmaAdapter;
  v19 = DmaAdapter;
  if ( v8 < 0 )
    goto LABEL_16;
  Size = DmaAdapter[6].Size;
  if ( (Size & 8) == 0 && (Size & 2) != 0 )
  {
    if ( DmaAdapter[6].DmaOperations )
    {
      v8 = -1073741823;
    }
    else
    {
      v10 = *(unsigned __int16 *)(a1 + 16);
      if ( (_WORD)v10 )
      {
        v11 = *(_QWORD *)(a1 + 8);
        if ( v11 + v10 > 0x7FFFFFFF0000LL || v11 + v10 < v11 )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          LOWORD(v10) = *(_WORD *)(a1 + 16);
        }
      }
      PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v10 + 28LL, 0x54777445u);
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
LABEL_15:
    v8 = -1073741811;
  }
LABEL_16:
  if ( v6 )
  {
    if ( v8 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
      EtwpEventWriteRegistrationStatus(v15, v14, v16, v6, v8);
    HalPutDmaAdapter(v6);
  }
  return (unsigned int)v8;
}
