/*
 * XREFs of ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C02D0A90
 * Callers:
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x1C02D1154 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     DpiKsrCallback @ 0x1C02D1750 (DpiKsrCallback.c)
 *     DpiKsrDoKsrSave @ 0x1C02D17A4 (DpiKsrDoKsrSave.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00186B0 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DpIterateFdoContexts(__int64 (__fastcall *a1)(__int64 *, void *), void *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 v10; // rax

  AcquireMiniportListMutex();
  v4 = qword_1C00B0B40;
  if ( *(_QWORD *)v4 != v4 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v4 + 72), Executive, 0, 0, 0LL);
      v5 = *(__int64 **)(v4 + 56);
      if ( (__int64 *)*v5 != v5 )
      {
        do
        {
          if ( *((_DWORD *)v5 + 4) == 1953656900 && *((_DWORD *)v5 + 5) == 2 )
          {
            v6 = a1(v5, a2);
            v9 = v6;
            if ( v6 < 0 )
            {
              v10 = WdLogNewEntry5_WdError(v8, v7);
              *(_QWORD *)(v10 + 24) = v9;
              WdLogEvent5_WdError(v10);
            }
          }
          v5 = (__int64 *)*v5;
        }
        while ( *v5 != *(_QWORD *)(v4 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v4 + 72), 0);
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != qword_1C00B0B40 );
  }
  _InterlockedExchange64(&qword_1C00B0B50, 0LL);
  KeReleaseMutex(Mutex, 0);
}
