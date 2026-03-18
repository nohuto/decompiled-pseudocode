/*
 * XREFs of AlpcpSignal @ 0x14033495C
 * Callers:
 *     NtAlpcSendWaitReceivePort @ 0x14060A800 (NtAlpcSendWaitReceivePort.c)
 *     AlpcpCompleteDeferSignalRequest @ 0x140611C38 (AlpcpCompleteDeferSignalRequest.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x140334A14 (AlpcpQueueIoCompletionPort.c)
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
