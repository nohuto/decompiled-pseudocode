/*
 * XREFs of MmScrubMemory @ 0x1408DC27C
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 * Callees:
 *     KeWaitForGate @ 0x14022A4E4 (KeWaitForGate.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeInitializeGate @ 0x140251190 (KeInitializeGate.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExQueueWorkItemToPartition @ 0x1403025FC (ExQueueWorkItemToPartition.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall MmScrubMemory(__int64 a1, void *a2, _QWORD *a3)
{
  NTSTATUS result; // eax
  unsigned int v5; // edi
  _DWORD *Pool; // rax
  _QWORD *v7; // rsi
  int v8; // edi
  _QWORD *v9; // r14
  unsigned int v10; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // r15
  int *v13; // rax
  PADAPTER_OBJECT DmaAdapter; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  *a3 = 0LL;
  DmaAdapter = 0LL;
  result = ObReferenceObjectByHandle(
             a2,
             1u,
             (POBJECT_TYPE)ExEventObjectType,
             KeGetCurrentThread()->PreviousMode,
             (PVOID *)&DmaAdapter,
             0LL);
  if ( result >= 0 )
  {
    v5 = (unsigned __int16)KeNumberNodes;
    Pool = MiAllocatePool(64, 224LL * (unsigned __int16)KeNumberNodes + 64, 0x6363454Du);
    v7 = Pool;
    if ( Pool )
    {
      *Pool = v5;
      KeInitializeGate((__int64)(Pool + 2));
      v7[4] = DmaAdapter;
      v9 = v7 + 8;
      v7[6] = &MiSystemPartition;
      v10 = 0;
      CurrentThread = KeGetCurrentThread();
      v7[5] = 0LL;
      v7[7] = CurrentThread;
      if ( v5 )
      {
        v12 = v7 + 13;
        do
        {
          *v9 = v7;
          *((_DWORD *)v12 - 8) = v10;
          *(v12 - 3) = 0LL;
          *(v12 - 1) = MiScrubMemoryWorker;
          *v12 = v9;
          ExQueueWorkItemToPartition(v12 - 3, 4, v10++, qword_140C50E70);
          v9 += 28;
          v12 += 28;
        }
        while ( v10 < v5 );
      }
      v15 = 0LL;
      v8 = MiScrubProcesses((__int64)v7, &v15);
      KeWaitForGate((__int64)(v7 + 1), 0);
      if ( v8 >= 0 )
      {
        v13 = (int *)v9 + 3;
        while ( 1 )
        {
          v13 -= 56;
          if ( *v13 < 0 )
            break;
          if ( !--v10 )
            goto LABEL_13;
        }
        v8 = *v13;
      }
LABEL_13:
      *a3 = v15 + v7[5];
      ExFreePoolWithTag(v7, 0);
      if ( *(_DWORD *)(&DmaAdapter->Size + 1) || (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
        v8 = -1073741248;
      else
        _InterlockedIncrement(&dword_140C4E818);
    }
    else
    {
      v8 = -1073741670;
    }
    HalPutDmaAdapter(DmaAdapter);
    return v8;
  }
  return result;
}
