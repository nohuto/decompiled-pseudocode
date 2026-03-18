/*
 * XREFs of DpiMiracastStopMiracastSessionAsync @ 0x1C0061DB0
 * Callers:
 *     DxgNotifyDpcCB @ 0x1C0014800 (DxgNotifyDpcCB.c)
 * Callees:
 *     DpiMiracastReleaseMiracastDeviceContext @ 0x1C0061CB0 (DpiMiracastReleaseMiracastDeviceContext.c)
 */

__int64 __fastcall DpiMiracastStopMiracastSessionAsync(volatile signed __int32 *P, char a2, _QWORD *a3, int a4)
{
  unsigned int v8; // edi
  ULONG v9; // eax
  char *PoolWithTag; // rax
  char *v11; // rdi
  PDRIVER_OBJECT v12; // rcx

  if ( !a2 || a3 )
  {
    _InterlockedIncrement(P + 6);
    _InterlockedXor(P + 7, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    v9 = IoSizeofWorkItem();
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v9 + 32LL, 0x74727044u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *(_QWORD *)PoolWithTag = P;
      PoolWithTag[8] = a2;
      if ( a3 )
        *((_QWORD *)PoolWithTag + 2) = *a3;
      v12 = g_pDriverObject;
      *((_DWORD *)PoolWithTag + 6) = a4;
      IoInitializeWorkItem(v12, (PIO_WORKITEM)(PoolWithTag + 32));
      IoQueueWorkItemEx((PIO_WORKITEM)(v11 + 32), DpiMiracastStopMiracastSessionWork, DelayedWorkQueue, v11);
      return 0;
    }
    else
    {
      v8 = -1073741801;
      WdLogSingleEntry1(6LL, -1073741801LL);
      DpiMiracastReleaseMiracastDeviceContext((int *)P, (unsigned int)DpiMiracastStopMiracastSessionAsync);
    }
  }
  else
  {
    v8 = -1073741811;
    WdLogSingleEntry2(2LL, P, -1073741811LL);
  }
  return v8;
}
