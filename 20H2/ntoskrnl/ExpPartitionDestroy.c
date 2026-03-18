/*
 * XREFs of ExpPartitionDestroy @ 0x1409586A4
 * Callers:
 *     ExpPartitionInitialize @ 0x1407BDFAC (ExpPartitionInitialize.c)
 *     PspTeardownPartition @ 0x14090F8E0 (PspTeardownPartition.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     KeFlushQueuedDpcs @ 0x14030D5C0 (KeFlushQueuedDpcs.c)
 *     KeCancelTimer2 @ 0x14033C240 (KeCancelTimer2.c)
 *     ZwWaitForSingleObject @ 0x1403F81F0 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpWorkQueueDestroy @ 0x140958888 (ExpWorkQueueDestroy.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall ExpPartitionDestroy(PVOID P, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned __int16 i; // si
  __int64 v6; // rdi
  void *v7; // rcx
  unsigned __int16 v8; // si
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rdx
  _DWORD *v12; // rdi

  if ( *((_QWORD *)P + 2) )
  {
    for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
    {
      v6 = *(_QWORD *)(*((_QWORD *)P + 2) + 8LL * i);
      if ( v6 )
      {
        if ( *(_QWORD *)(v6 + 264) )
        {
          *(_DWORD *)(v6 + 272) = 1;
          KeSetEvent((PRKEVENT)(v6 + 16), 0, 0);
          ZwWaitForSingleObject(*(HANDLE *)(v6 + 264), 0, 0LL);
          ZwClose(*(HANDLE *)(v6 + 264));
        }
        KeCancelTimer2(v6 + 128, 0LL, a3, a4);
        KeCancelTimer((PKTIMER)(v6 + 40));
        KeFlushQueuedDpcs();
        ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 2) + 8LL * i), 0);
      }
    }
    ExFreePoolWithTag(*((PVOID *)P + 2), 0);
  }
  v7 = (void *)*((_QWORD *)P + 1);
  if ( v7 )
  {
    v8 = 0;
    if ( KeNumberNodes )
    {
      do
      {
        if ( *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * v8) )
        {
          v9 = 0LL;
          v10 = 0LL;
          if ( (_UNKNOWN *)KeNodeBlock[v8] != (_UNKNOWN *)((char *)&KiNodeInit + 384 * v8) )
            v9 = KeNodeBlock[v8];
          do
          {
            v11 = *(_QWORD *)(*((_QWORD *)P + 1) + 8LL * *(unsigned __int16 *)(v9 + 146));
            v12 = *(_DWORD **)(v11 + v10);
            if ( ((unsigned __int8)v12 & 1) == 0 && v12 )
            {
              if ( v12[1] )
                KeBugCheckEx(0x18Eu, 2uLL, *(_QWORD *)P, *(_QWORD *)(v11 + v10), 0LL);
              ExpWorkQueueDestroy(*(_QWORD *)(v11 + v10));
              ExFreePoolWithTag(v12, 0);
            }
            v10 += 8LL;
          }
          while ( v10 < 64 );
          ExFreePoolWithTag(*(PVOID *)(*((_QWORD *)P + 1) + 8LL * v8), 0);
        }
        ++v8;
      }
      while ( v8 < (unsigned __int16)KeNumberNodes );
      v7 = (void *)*((_QWORD *)P + 1);
    }
    ExFreePoolWithTag(v7, 0);
  }
  ExFreePoolWithTag(P, 0);
}
