/*
 * XREFs of AlpcpSignal @ 0x1402EF81C
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x140682950 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140689DBC (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1402EF8D4 (AlpcpQueueIoCompletionPort.c)
 */

void __fastcall AlpcpSignal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
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
    {
      LOBYTE(a3) = 1;
      LOBYTE(a2) = *(_BYTE *)(a1 + 59);
      AlpcpQueueIoCompletionPort(v5, a2, a3);
    }
    else
    {
      KeReleaseSemaphoreEx(*(_QWORD *)(v5 + 248), 1LL, 1LL, a4, (_BYTE)a2 != 0);
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = v6 + 1160;
      if ( (_BYTE)a2 )
        KeReleaseSemaphoreEx(v7, 1LL, 1LL, a4, (_BYTE)a3 != 0 ? 1 : 5);
      else
        KeReleaseSemaphoreEx(v7, 1LL, 1LL, a4, 2);
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
