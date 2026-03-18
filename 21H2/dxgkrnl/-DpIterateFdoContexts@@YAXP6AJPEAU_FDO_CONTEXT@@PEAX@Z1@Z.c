/*
 * XREFs of ?DpIterateFdoContexts@@YAXP6AJPEAU_FDO_CONTEXT@@PEAX@Z1@Z @ 0x1C03930F0
 * Callers:
 *     ?DpiKsrCancel@@YAXPEAX@Z @ 0x1C0393784 (-DpiKsrCancel@@YAXPEAX@Z.c)
 *     ?DpiKsrComplete@@YAXPEAX@Z @ 0x1C039382C (-DpiKsrComplete@@YAXPEAX@Z.c)
 *     DpiKsrDoKsrSave @ 0x1C0393EE0 (DpiKsrDoKsrSave.c)
 * Callees:
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C001C320 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DpIterateFdoContexts(__int64 (__fastcall *a1)(__int64 *, void *), void *a2)
{
  __int64 v4; // rbx
  __int64 *v5; // rdi
  int v6; // eax

  AcquireMiniportListMutex();
  v4 = qword_1C01304C8;
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
            if ( v6 < 0 )
              WdLogSingleEntry1(2LL, v6);
          }
          v5 = (__int64 *)*v5;
        }
        while ( *v5 != *(_QWORD *)(v4 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v4 + 72), 0);
      v4 = *(_QWORD *)v4;
    }
    while ( *(_QWORD *)v4 != qword_1C01304C8 );
  }
  _InterlockedExchange64(&qword_1C01304D8, 0LL);
  KeReleaseMutex(Mutex, 0);
}
