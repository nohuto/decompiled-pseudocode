/*
 * XREFs of AlpcpSignal @ 0x1402AA060
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x1406D7150 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x1406DA33C (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     AlpcpQueueIoCompletionPort @ 0x14022AED0 (AlpcpQueueIoCompletionPort.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 */

void __fastcall AlpcpSignal(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rcx

  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    if ( *(_BYTE *)(a1 + 58) )
      AlpcpQueueIoCompletionPort(v5, *(_BYTE *)(a1 + 59), 1, a2);
    else
      KeReleaseSemaphoreEx(*(_QWORD *)(v5 + 248), 1, 1, a4, a2 != 0);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = v6 + 1160;
      if ( a2 )
        KeReleaseSemaphoreEx(v7, 1, 1, a4, a3 != 0 ? 1 : 5);
      else
        KeReleaseSemaphoreEx(v7, 1, 1, a4, 2);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 40);
      if ( (v8 & 1) != 0 )
      {
        if ( v8 >= 4 )
        {
          KeSetEvent((PRKEVENT)(v8 & 0xFFFFFFFFFFFFFFFCuLL), 0, a2);
          v9 = *(_QWORD *)(a1 + 40);
          if ( (v9 & 2) != 0 )
            HalPutDmaAdapter((PADAPTER_OBJECT)(v9 & 0xFFFFFFFFFFFFFFFCuLL));
        }
        *(_QWORD *)(a1 + 40) = 0LL;
      }
    }
  }
}
