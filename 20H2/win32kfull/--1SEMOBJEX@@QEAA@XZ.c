/*
 * XREFs of ??1SEMOBJEX@@QEAA@XZ @ 0x1C0158094
 * Callers:
 *     GreDrvDisconnect @ 0x1C0157FC0 (GreDrvDisconnect.c)
 *     GreDrvReconnect @ 0x1C02BE9A8 (GreDrvReconnect.c)
 *     bDrvDisconnect @ 0x1C02BEDAC (bDrvDisconnect.c)
 *     bDrvDisplayIOCtl @ 0x1C02BEF88 (bDrvDisplayIOCtl.c)
 *     bDrvReconnect @ 0x1C02BF138 (bDrvReconnect.c)
 *     bDrvShadowConnect @ 0x1C02BF348 (bDrvShadowConnect.c)
 *     bDrvShadowDisconnect @ 0x1C02BF530 (bDrvShadowDisconnect.c)
 *     vDrvInvalidateRect @ 0x1C02BF718 (vDrvInvalidateRect.c)
 * Callees:
 *     <none>
 */

void __fastcall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this)
{
  __int64 v1; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem8", v1);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 7));
  }
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem7", v3);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 6));
  }
  v4 = *((_QWORD *)this + 5);
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem6", v4);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 5));
  }
  v5 = *((_QWORD *)this + 4);
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem5", v5);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 4));
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem4", v6);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 3));
  }
  v7 = *((_QWORD *)this + 2);
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem3", v7);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem2", v8);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem1", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
}
