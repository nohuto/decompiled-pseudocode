/*
 * XREFs of IoCsqRemoveNextIrp @ 0x140227BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

PIRP __stdcall IoCsqRemoveNextIrp(PIO_CSQ Csq, PVOID PeekContext)
{
  PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdx
  IRP *v8; // rdi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  CsqAcquireLock = Csq->CsqAcquireLock;
  Csq->ReservePointer = 0LL;
  v12 = 0;
  ((void (__fastcall *)(PIO_CSQ, char *))CsqAcquireLock)(Csq, &v12);
  v5 = 0LL;
  do
  {
    v6 = ((__int64 (__fastcall *)(PIO_CSQ, __int64, PVOID))Csq->CsqPeekNextIrp)(Csq, v5, PeekContext);
    v8 = (IRP *)v6;
    if ( !v6 )
    {
      LOBYTE(v7) = v12;
      ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v7);
      return 0LL;
    }
    v5 = v6;
  }
  while ( !_InterlockedExchange64((volatile __int64 *)(v6 + 104), 0LL) );
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqRemoveIrp)(Csq, v6);
  v10 = v8->Tail.Overlay.DriverContext[3];
  if ( *(_DWORD *)v10 == 1 )
    v10[1] = 0LL;
  v8->Tail.Overlay.DriverContext[3] = 0LL;
  LOBYTE(v9) = v12;
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v9);
  return v8;
}
