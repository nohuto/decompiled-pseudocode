/*
 * XREFs of IoDisconnectInterrupt @ 0x140761BD0
 * Callers:
 *     IoDisconnectInterruptEx @ 0x140761B30 (IoDisconnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140762014 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectLineBasedInterrupt @ 0x1407C9BF4 (IopConnectLineBasedInterrupt.c)
 * Callees:
 *     KeRemoveQueueDpc @ 0x140246840 (KeRemoveQueueDpc.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     KeFreeInterrupt @ 0x14037685C (KeFreeInterrupt.c)
 *     KeDisconnectInterrupt @ 0x140376884 (KeDisconnectInterrupt.c)
 *     IoAddTriageDumpDataBlock @ 0x1403CC998 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopDestroyActiveConnectBlock @ 0x140762810 (IopDestroyActiveConnectBlock.c)
 *     PnpTraceInterruptConnection @ 0x140762910 (PnpTraceInterruptConnection.c)
 *     IopReleaseActiveConnectLock @ 0x14076297C (IopReleaseActiveConnectLock.c)
 *     IopAcquireActiveConnectLock @ 0x1407629A0 (IopAcquireActiveConnectLock.c)
 *     IopInitializeActiveConnectBlock @ 0x1407629C4 (IopInitializeActiveConnectBlock.c)
 *     IopDestroyPassiveInterruptBlock @ 0x1408A1800 (IopDestroyPassiveInterruptBlock.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __stdcall IoDisconnectInterrupt(PKINTERRUPT InterruptObject)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rdi
  unsigned int *p_Number; // rsi
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  char i; // si
  __int64 v8; // r14
  ULONG_PTR v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax
  struct _KTHREAD *v12; // r9
  char v13; // dl
  unsigned __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rcx
  _WORD *v17; // rcx
  __int64 v18; // rcx
  unsigned __int16 *v19; // rdi
  __int64 v20; // rdx
  _WORD *v21; // rcx
  __int64 v22; // rcx
  _WORD *v23; // rcx
  __int64 v24; // rcx
  _BYTE v25[80]; // [rsp+30h] [rbp-78h] BYREF

  memset(v25, 0, sizeof(v25));
  KeRemoveQueueDpc((PRKDPC)&InterruptObject[1].MessageServiceRoutine);
  IopInitializeActiveConnectBlock(&InterruptObject[-1].IsrDpcStats.IsrCount, v25);
  v2 = InterruptObject[-1].IsrDpcStats.IsrTimeStart
     - ((InterruptObject[-1].IsrDpcStats.IsrTimeStart >> 1) & 0x5555555555555555LL);
  v3 = (0x101010101010101LL
      * (((v2 & 0x3333333333333333LL)
        + ((v2 >> 2) & 0x3333333333333333LL)
        + (((v2 & 0x3333333333333333LL) + ((v2 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
  IopAcquireActiveConnectLock(v25);
  p_Number = &InterruptObject[1].Number;
  LOBYTE(v5) = v3;
  KeDisconnectInterrupt((__int64 *)&InterruptObject[1].Number, v5, (__int64)&InterruptObject[-1].IsrDpcStats.IsrCount);
  IopReleaseActiveConnectLock(v25);
  if ( LOBYTE(InterruptObject[1].Type) )
    IopDestroyPassiveInterruptBlock(HIDWORD(InterruptObject[-1].IsrDpcStats.DpcTime));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( LOBYTE(InterruptObject[1].Type) )
  {
    v12 = KeGetCurrentThread();
    v13 = 0;
    if ( (char)v3 <= 0 )
      goto LABEL_17;
    v14 = v3;
    do
    {
      v15 = *(_QWORD *)p_Number;
      p_Number += 2;
      if ( *(struct _KTHREAD **)(v15 + 152) == v12 )
        v13 = 1;
      --v14;
    }
    while ( v14 );
    if ( !v13 )
LABEL_17:
      KeWaitForSingleObject(&InterruptObject[1].InterruptListEntry, Executive, 0, 0, 0LL);
  }
  KeLeaveCriticalRegion();
  for ( i = 0; i < (char)v3; ++i )
  {
    v8 = *((_QWORD *)&InterruptObject[1].Number + i);
    v9 = *(_QWORD *)(v8 + 280);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 312);
      v11 = *(_QWORD *)(v10 + 40);
      if ( !v11 || (*(_DWORD *)(v11 + 396) & 0x20000) != 0 )
      {
        IoAddTriageDumpDataBlock(*(_QWORD *)(v8 + 280), (PVOID)*(unsigned __int16 *)(v9 + 2));
        v16 = *(_QWORD *)(v9 + 8);
        if ( v16 )
        {
          IoAddTriageDumpDataBlock(v16, (PVOID)(unsigned int)*(__int16 *)(v16 + 2));
          v17 = (_WORD *)(*(_QWORD *)(v9 + 8) + 56LL);
          if ( *v17 )
          {
            IoAddTriageDumpDataBlock((ULONG)v17, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(v9 + 8) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(v9 + 8) + 56LL));
          }
        }
        v18 = *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL);
        if ( v18 )
        {
          v19 = (unsigned __int16 *)(v18 + 40);
          IoAddTriageDumpDataBlock(v18, (PVOID)0x310);
          if ( *v19 )
          {
            IoAddTriageDumpDataBlock((ULONG)v19, (PVOID)2);
            IoAddTriageDumpDataBlock(*((_QWORD *)v19 + 1), (PVOID)*v19);
          }
          v20 = *(_QWORD *)(v9 + 312);
          v21 = (_WORD *)(*(_QWORD *)(v20 + 40) + 56LL);
          if ( *v21 )
          {
            IoAddTriageDumpDataBlock((ULONG)v21, (PVOID)2);
            IoAddTriageDumpDataBlock(
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 64LL),
              (PVOID)*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 56LL));
            v20 = *(_QWORD *)(v9 + 312);
          }
          v22 = *(_QWORD *)(*(_QWORD *)(v20 + 40) + 16LL);
          if ( v22 )
          {
            v23 = (_WORD *)(v22 + 56);
            if ( *v23 )
            {
              IoAddTriageDumpDataBlock((ULONG)v23, (PVOID)2);
              v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) + 16LL);
              IoAddTriageDumpDataBlock(*(_QWORD *)(v24 + 64), (PVOID)*(unsigned __int16 *)(v24 + 56));
            }
          }
        }
        KeBugCheckEx(0xCAu, 2uLL, v9, 0LL, 0LL);
      }
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 96));
      ObfDereferenceObjectWithTag((PVOID)v9, 0x54706E50u);
      *(_QWORD *)(v8 + 280) = 0LL;
    }
    KeFreeInterrupt((PSLIST_ENTRY)v8);
  }
  IopDestroyActiveConnectBlock(v25);
  ExFreePoolWithTag(&InterruptObject[-1].IsrDpcStats, 0);
  PnpTraceInterruptConnection(0LL);
}
