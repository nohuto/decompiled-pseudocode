/*
 * XREFs of AlpcpSignal @ 0x140208A70
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1405EF030 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x1405F2B2C (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x14030D9FC (AlpcpQueueIoCompletionPort.c)
 */

void __fastcall AlpcpSignal(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // ecx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx

  v5 = 0;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    if ( *(_BYTE *)(a1 + 58) )
    {
      LOBYTE(a3) = 1;
      LOBYTE(a2) = *(_BYTE *)(a1 + 59);
      AlpcpQueueIoCompletionPort(v6, a2, a3);
    }
    else
    {
      LOBYTE(v5) = (_BYTE)a2 != 0;
      KeReleaseSemaphoreEx(*(_QWORD *)(v6 + 248), 1, 1, a4, v5);
    }
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = v7 + 1160;
      if ( (_BYTE)a2 )
        KeReleaseSemaphoreEx(v8, 1, 1, a4, (_BYTE)a3 != 0 ? 1 : 5);
      else
        KeReleaseSemaphoreEx(v8, 1, 1, a4, 2);
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 40);
      if ( (v9 & 1) != 0 )
      {
        if ( v9 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v9 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          v10 = *(_QWORD *)(a1 + 40);
          if ( (v10 & 2) != 0 )
            HalPutDmaAdapter((PADAPTER_OBJECT)(v10 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
}
