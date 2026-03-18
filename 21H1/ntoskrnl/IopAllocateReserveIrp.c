/*
 * XREFs of IopAllocateReserveIrp @ 0x1404FA8DC
 * Callers:
 *     IopAllocateIrpMustSucceed @ 0x140253450 (IopAllocateIrpMustSucceed.c)
 *     IoPageReadEx @ 0x140280BA0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140280E18 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x1402ECB38 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopIsActivityTracingEnabled @ 0x14025B27C (IopIsActivityTracingEnabled.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     IoInitializeIrp @ 0x1402F6F10 (IoInitializeIrp.c)
 *     IopInitActivityIdIrp @ 0x1404FB1F4 (IopInitActivityIdIrp.c)
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
  if ( a2 > byte_140C45CE0 )
    return 0LL;
  v3 = a2 + 1;
  v4 = (char)(a2 + 1);
  if ( !a3 )
  {
    while ( _InterlockedExchange(&dword_140C45C08, 1) == 1 )
      KeWaitForSingleObject(&word_140C45C10, Executive, 0, 0, 0LL);
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
    while ( _InterlockedExchange(&dword_140C45C30, 1) == 1 )
      KeWaitForSingleObject(&word_140C45C38, Executive, 0, 0, 0LL);
    IoInitializeIrp(qword_140C45C28, 72 * v3 + 208, v3);
    qword_140C45C28->AllocationFlags = 33;
    v8 = qword_140C45C28;
    --qword_140C45C28->Tail.Overlay.CurrentStackLocation;
    v9 = v8->Tail.Overlay.CurrentStackLocation;
    --v8->CurrentLocation;
    --v8->StackCount;
    *((_QWORD *)&v8->Tail.CompletionKey + 10) = v9;
    if ( IopIsActivityTracingEnabled() )
      IopInitActivityIdIrp(qword_140C45C28);
    return qword_140C45C28;
  }
  if ( a3 != 3 )
    return 0LL;
  Timeout.QuadPart = 0LL;
  while ( _InterlockedExchange(&dword_140C45C58, 1) == 1 )
  {
    Timeout.QuadPart = -50000000LL;
    if ( KeWaitForSingleObject(&stru_140C45C60, Executive, 0, 0, &Timeout) == 258 )
      return 0LL;
  }
  IoInitializeIrp(qword_140C45C50, 72 * v3 + 208, v3);
  qword_140C45C50->AllocationFlags = 33;
  v10 = qword_140C45C50;
  --qword_140C45C50->Tail.Overlay.CurrentStackLocation;
  v11 = v10->Tail.Overlay.CurrentStackLocation;
  --v10->CurrentLocation;
  --v10->StackCount;
  *((_QWORD *)&v10->Tail.CompletionKey + 10) = v11;
  if ( IopIsActivityTracingEnabled() )
    IopInitActivityIdIrp(qword_140C45C50);
  return qword_140C45C50;
}
