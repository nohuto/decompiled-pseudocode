/*
 * XREFs of EtwpReceiveReplyDataBlock @ 0x14071BC7C
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 * Callees:
 *     KeRemoveQueue @ 0x140206110 (KeRemoveQueue.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 *     EtwpUnreferenceDataBlock @ 0x14071AE6C (EtwpUnreferenceDataBlock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReceiveReplyDataBlock(unsigned int *a1, unsigned int a2, unsigned int *a3)
{
  void *v5; // rcx
  LARGE_INTEGER v7; // rax
  NTSTATUS v8; // ebx
  struct _DMA_ADAPTER *v9; // rbp
  PLIST_ENTRY v10; // rax
  PLIST_ENTRY v11; // rdi
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int Flink_high; // eax
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = (void *)*a1;
  v7.QuadPart = EtwpOneMs * a1[1];
  DmaAdapter = 0LL;
  Timeout = v7;
  v8 = ObReferenceObjectByHandle(v5, 4u, EtwpRegistrationObjectType, 1, (PVOID *)&DmaAdapter, 0LL);
  if ( v8 >= 0 )
  {
    v9 = DmaAdapter;
    if ( (DmaAdapter[6].Size & 4) != 0 )
    {
      v10 = KeRemoveQueue(*(PRKQUEUE *)&DmaAdapter[3].Version, 1, &Timeout);
      v11 = v10;
      if ( v10 == (PLIST_ENTRY)258 || v10 == (PLIST_ENTRY)192 )
      {
        v8 = (int)v10;
      }
      else
      {
        Flink = v10[1].Flink;
        Flink_high = HIDWORD(Flink->Flink);
        if ( Flink_high > a2 )
        {
          v8 = -1073741789;
        }
        else
        {
          memmove(a1, Flink, Flink_high);
          Flink_high = HIDWORD(Flink->Flink);
          v8 = 0;
        }
        *a3 = Flink_high;
        EtwpUnreferenceDataBlock((volatile signed __int32 *)Flink);
        ExFreePoolWithTag(v11, 0);
      }
    }
    else
    {
      v8 = -1073741816;
    }
    HalPutDmaAdapter(v9);
  }
  return (unsigned int)v8;
}
