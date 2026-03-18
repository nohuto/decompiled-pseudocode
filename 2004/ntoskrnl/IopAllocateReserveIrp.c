/*
 * XREFs of IopAllocateReserveIrp @ 0x1404FAF2C
 * Callers:
 *     IoPageReadEx @ 0x140227B50 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140227DC8 (IoSynchronousPageWriteEx.c)
 *     IopAllocateIrpMustSucceed @ 0x14028FCD0 (IopAllocateIrpMustSucceed.c)
 *     IoAsynchronousPageWrite @ 0x140326468 (IoAsynchronousPageWrite.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     IopIsActivityTracingEnabled @ 0x140297AFC (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x140334050 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1404FB844 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // bl
  __int16 v4; // di
  PIRP v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PIRP v8; // rcx
  struct _IO_STACK_LOCATION *v9; // rax
  PIRP v10; // rcx
  struct _IO_STACK_LOCATION *v11; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140C45B60 )
    return 0LL;
  v3 = a2 + 1;
  v4 = (char)(a2 + 1);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140C45A88, 1) == 1 )
      KeWaitForSingleObject(&word_140C45A90, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 8 * (8 * v3 + v4) + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v5 = IopReserveIrps;
    --IopReserveIrps->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    --v5->CurrentLocation;
    --v5->StackCount;
    *((_QWORD *)&v5->Tail.CompletionKey + 10) = CurrentStackLocation;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140C45AB0, 1) == 1 )
      KeWaitForSingleObject(&word_140C45AB8, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140C45AA8, 72 * v3 + 208, v3);
    qword_140C45AA8->AllocationFlags = 33;
    v8 = qword_140C45AA8;
    --qword_140C45AA8->Tail.Overlay.CurrentStackLocation;
    v9 = v8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v9;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(qword_140C45AA8);
    return qword_140C45AA8;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140C45AD8, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140C45AE0, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140C45AD0, 72 * v3 + 208, v3);
  qword_140C45AD0->AllocationFlags = 33;
  v10 = qword_140C45AD0;
  --qword_140C45AD0->Tail.Overlay.CurrentStackLocation;
  v11 = v10->Tail.Overlay.CurrentStackLocation;
  --v10->CurrentLocation;
  --v10->StackCount;
  *((_QWORD *)&v10->Tail.CompletionKey + 10) = v11;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(qword_140C45AD0);
  return qword_140C45AD0;
}
