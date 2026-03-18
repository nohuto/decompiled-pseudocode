/*
 * XREFs of IopAllocateReserveIrp @ 0x1404FE7D0
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140211230 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x14024E230 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x14024E538 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x140329CA0 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x140209C94 (IopIsActivityTracingEnabled.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x14030A790 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1404FF118 (IopInitActivityIdIrp.c)
 */

PIRP __fastcall IopAllocateReserveIrp(LARGE_INTEGER a1, char a2, int a3)
{
  CCHAR v3; // di
  __int16 v4; // si
  PIRP v5; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PIRP v8; // rcx
  struct _IO_STACK_LOCATION *v9; // rax
  PIRP v10; // rcx
  struct _IO_STACK_LOCATION *v11; // rax
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp+8h] BYREF

  Timeout = a1;
  if ( a2 > byte_140C45BA0 )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140C45AC8, 1) == 1 )
      KeWaitForSingleObject(&word_140C45AD0, Executive, 0, 0, 0LL);
    IoInitializeIrp(IopReserveIrps, 8 * (8 * v3 + v4) + 208, v3);
    IopReserveIrps->AllocationFlags = 33;
    v5 = IopReserveIrps;
    IopReserveIrps->Tail.Overlay.CurrentStackLocation -= 2;
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->CurrentLocation -= 2;
    v5->StackCount -= 2;
    *((_QWORD *)&v5->Tail.CompletionKey + 10) = CurrentStackLocation;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(IopReserveIrps);
    return IopReserveIrps;
  }
  if ( a3 == 1 )
  {
    while ( _InterlockedExchange(&dword_140C45AF0, 1) == 1 )
      KeWaitForSingleObject(&word_140C45AF8, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140C45AE8, 72 * v3 + 208, v3);
    qword_140C45AE8->AllocationFlags = 33;
    v8 = qword_140C45AE8;
    qword_140C45AE8->Tail.Overlay.CurrentStackLocation -= 2;
    v9 = v8->Tail.Overlay.CurrentStackLocation;
    v8->CurrentLocation -= 2;
    v8->StackCount -= 2;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v9;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(qword_140C45AE8);
    return qword_140C45AE8;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140C45B18, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140C45B20, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140C45B10, 72 * v3 + 208, v3);
  qword_140C45B10->AllocationFlags = 33;
  v10 = qword_140C45B10;
  qword_140C45B10->Tail.Overlay.CurrentStackLocation -= 2;
  v11 = v10->Tail.Overlay.CurrentStackLocation;
  v10->CurrentLocation -= 2;
  v10->StackCount -= 2;
  *((_QWORD *)&v10->Tail.CompletionKey + 10) = v11;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(qword_140C45B10);
  return qword_140C45B10;
}
