/*
 * XREFs of ??1SEMOBJEX@@QAE@XZ @ 0xD2964
 * Callers:
 *     _GreDrvDisconnect@4 @ 0xD28A4 (_GreDrvDisconnect@4.c)
 *     _GreDrvReconnect@8 @ 0x2260D5 (_GreDrvReconnect@8.c)
 *     _bDrvDisconnect@12 @ 0x2263A6 (_bDrvDisconnect@12.c)
 *     _bDrvDisplayIOCtl@12 @ 0x2264B0 (_bDrvDisplayIOCtl@12.c)
 *     _bDrvReconnect@16 @ 0x226594 (_bDrvReconnect@16.c)
 *     _bDrvShadowConnect@12 @ 0x2266CF (_bDrvShadowConnect@12.c)
 *     _bDrvShadowDisconnect@12 @ 0x2267EF (_bDrvShadowDisconnect@12.c)
 *     _vDrvInvalidateRect@8 @ 0x22690F (_vDrvInvalidateRect@8.c)
 * Callees:
 *     <none>
 */

void __thiscall SEMOBJEX::~SEMOBJEX(SEMOBJEX *this)
{
  if ( *((_DWORD *)this + 7) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem8", *((_DWORD *)this + 7));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 7));
  }
  if ( *((_DWORD *)this + 6) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem7", *((_DWORD *)this + 6));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 6));
  }
  if ( *((_DWORD *)this + 5) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem6", *((_DWORD *)this + 5));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 5));
  }
  if ( *((_DWORD *)this + 4) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem5", *((_DWORD *)this + 4));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 4));
  }
  if ( *((_DWORD *)this + 3) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem4", *((_DWORD *)this + 3));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 3));
  }
  if ( *((_DWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem3", *((_DWORD *)this + 2));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 2));
  }
  if ( *((_DWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem2", *((_DWORD *)this + 1));
    GreReleaseSemaphoreInternal(*((_DWORD *)this + 1));
  }
  if ( *(_DWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hSem1", *(_DWORD *)this);
    GreReleaseSemaphoreInternal(*(_DWORD *)this);
  }
}
