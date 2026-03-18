/*
 * XREFs of IopAllocateReserveIrp @ 0x1405562E8
 * Callers:
 *     IoAsynchronousPageWrite @ 0x14020C810 (IoAsynchronousPageWrite.c)
 *     IopAllocateIrpMustSucceed @ 0x1402AA860 (IopAllocateIrpMustSucceed.c)
 *     IoSynchronousPageWriteEx @ 0x140340130 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140342C50 (IoPageReadEx.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x14020C4B8 (IopIsActivityTracingEnabled.c)
 *     IoInitializeIrp @ 0x140229D70 (IoInitializeIrp.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     IopInitActivityIdIrp @ 0x140556BE4 (IopInitActivityIdIrp.c)
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
  if ( a2 > byte_140C470E0 )
    return 0LL;
  v3 = a2 + 2;
  v4 = (char)(a2 + 2);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140C47008, 1) == 1 )
      KeWaitForSingleObject(&word_140C47010, Executive, 0, 0, 0LL);
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
    while ( _InterlockedExchange(&dword_140C47030, 1) == 1 )
      KeWaitForSingleObject(&word_140C47038, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140C47028, 72 * v3 + 208, v3);
    qword_140C47028->AllocationFlags = 33;
    v8 = qword_140C47028;
    qword_140C47028->Tail.Overlay.CurrentStackLocation -= 2;
    v9 = v8->Tail.Overlay.CurrentStackLocation;
    v8->CurrentLocation -= 2;
    v8->StackCount -= 2;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v9;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(qword_140C47028);
    return qword_140C47028;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140C47058, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140C47060, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140C47050, 72 * v3 + 208, v3);
  qword_140C47050->AllocationFlags = 33;
  v10 = qword_140C47050;
  qword_140C47050->Tail.Overlay.CurrentStackLocation -= 2;
  v11 = v10->Tail.Overlay.CurrentStackLocation;
  v10->CurrentLocation -= 2;
  v10->StackCount -= 2;
  *((_QWORD *)&v10->Tail.CompletionKey + 10) = v11;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(qword_140C47050);
  return qword_140C47050;
}
