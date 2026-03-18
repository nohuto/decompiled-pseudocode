/*
 * XREFs of ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC
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

SEMOBJEX *__thiscall SEMOBJEX::SEMOBJEX(
        SEMOBJEX *this,
        HSEMAPHORE a2,
        unsigned int a3,
        HSEMAPHORE a4,
        unsigned int a5,
        HSEMAPHORE a6,
        unsigned int a7,
        HSEMAPHORE a8,
        unsigned int a9,
        HSEMAPHORE a10,
        unsigned int a11,
        HSEMAPHORE a12,
        unsigned int a13,
        HSEMAPHORE a14,
        unsigned int a15,
        HSEMAPHORE a16,
        unsigned int a17)
{
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( a2 )
  {
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 8) = a3;
    GreAcquireSemaphore(a2);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem1", *(_DWORD *)this, *((_DWORD *)this + 8));
    if ( a4 )
    {
      *((_DWORD *)this + 1) = a4;
      *((_DWORD *)this + 9) = a5;
      GreAcquireSemaphore(a4);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem2", *((_DWORD *)this + 1), *((_DWORD *)this + 9));
      if ( a6 )
      {
        *((_DWORD *)this + 2) = a6;
        *((_DWORD *)this + 10) = a7;
        GreAcquireSemaphore(a6);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem3", *((_DWORD *)this + 2), *((_DWORD *)this + 10));
        if ( a8 )
        {
          *((_DWORD *)this + 3) = a8;
          *((_DWORD *)this + 11) = a9;
          GreAcquireSemaphore(a8);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem4", *((_DWORD *)this + 3), *((_DWORD *)this + 11));
          if ( a10 )
          {
            *((_DWORD *)this + 4) = a10;
            *((_DWORD *)this + 12) = a11;
            GreAcquireSemaphore(a10);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem5", *((_DWORD *)this + 4), *((_DWORD *)this + 12));
            if ( a12 )
            {
              *((_DWORD *)this + 5) = a12;
              *((_DWORD *)this + 13) = a13;
              GreAcquireSemaphore(a12);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hSem6", *((_DWORD *)this + 5), *((_DWORD *)this + 13));
            }
          }
        }
      }
    }
  }
  return this;
}
