/*
 * XREFs of GreDrvDisconnect @ 0x1C0157FC0
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C000B814 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     xxxRemoteDisconnect @ 0x1C011F7E0 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C0156B10 (xxxRemoteReconnect.c)
 *     xxxRemotePassthruEnable @ 0x1C0226D70 (xxxRemotePassthruEnable.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C0158094 (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C0158170 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDrvDisconnect(__int64 a1)
{
  int v2; // edi
  struct _LDEV *v3; // rbx
  int v4; // r15d
  struct PDEV *v6; // r14
  struct PDEV *i; // rsi
  int v8; // eax
  HSEMAPHORE v9; // [rsp+68h] [rbp-A8h]
  HSEMAPHORE v10; // [rsp+68h] [rbp-A8h]
  unsigned int v11; // [rsp+70h] [rbp-A0h]
  unsigned int v12; // [rsp+70h] [rbp-A0h]
  HSEMAPHORE v13; // [rsp+78h] [rbp-98h]
  HSEMAPHORE v14; // [rsp+78h] [rbp-98h]
  unsigned int v15; // [rsp+80h] [rbp-90h]
  unsigned int v16; // [rsp+80h] [rbp-90h]
  _BYTE v17[96]; // [rsp+90h] [rbp-80h] BYREF
  _BYTE v18[144]; // [rsp+F0h] [rbp-20h] BYREF
  struct PDEV *v19; // [rsp+198h] [rbp+88h] BYREF
  struct PDEV *v20; // [rsp+1A0h] [rbp+90h] BYREF
  struct PDEV *v21; // [rsp+1A8h] [rbp+98h] BYREF

  v2 = 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v18,
    ghsemDynamicModeChange,
    1u,
    ghsemGreLock,
    2u,
    ghsemDCVisRgn,
    3u,
    0LL,
    0,
    0LL,
    0,
    0LL,
    0,
    v9,
    v11,
    v13,
    v15);
  v3 = gpldevDrivers;
  do
  {
    if ( !v3 )
      break;
    v4 = 0;
    if ( *((_QWORD *)v3 + 2) && *((_DWORD *)v3 + 6) == 1 && *(_QWORD *)(*((_QWORD *)v3 + 112) + 624LL) )
    {
      GreAcquireSemaphore(ghsemDriverMgmt);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
      v6 = 0LL;
      for ( i = gppdevList; v2 >= 0 && i && *((struct _LDEV **)i + 224) == v3; i = *(struct PDEV **)i )
      {
        v19 = i;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)&v19);
        EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
        GreReleaseSemaphoreInternal(ghsemDriverMgmt);
        if ( v6 )
        {
          v20 = v6;
          PDEVOBJ::vUnreferencePdev(&v20, 0LL);
        }
        if ( v19 && (*((_DWORD *)v19 + 10) & 1) != 0 )
        {
          SEMOBJEX::SEMOBJEX(
            (SEMOBJEX *)v17,
            *((HSEMAPHORE *)v19 + 8),
            4u,
            ghsemSprite,
            5u,
            ghsemHT,
            6u,
            *((HSEMAPHORE *)v19 + 6),
            0xBu,
            0LL,
            0,
            0LL,
            0,
            v10,
            v12,
            v14,
            v16);
          PDEVOBJ::vSync(
            (PDEVOBJ *)&v19,
            (struct _SURFOBJ *)((*((_QWORD *)v19 + 319) + 24LL) & -(__int64)(*((_QWORD *)v19 + 319) != 0LL)),
            0LL,
            0);
          if ( !v4 )
          {
            v4 = 1;
            if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v3 + 112) + 624LL))(
                   *(_QWORD *)(a1 + 24),
                   *(_QWORD *)(a1 + 16)) )
            {
              *((_DWORD *)v3 + 15) = 3;
            }
            else
            {
              *((_DWORD *)v3 + 15) = 6;
              v2 = -2143354873;
            }
          }
          SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v17);
        }
        GreAcquireSemaphore(ghsemDriverMgmt);
        EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDriverMgmt", ghsemDriverMgmt, 13LL);
        v6 = i;
      }
      EtwTraceGreLockReleaseSemaphore(L"ghsemDriverMgmt", ghsemDriverMgmt);
      GreReleaseSemaphoreInternal(ghsemDriverMgmt);
      if ( v6 )
      {
        v21 = v6;
        PDEVOBJ::vUnreferencePdev(&v21, 0LL);
      }
      if ( !v4 && v2 >= 0 )
      {
        SEMOBJEX::SEMOBJEX(
          (SEMOBJEX *)v17,
          ghsemSprite,
          5u,
          ghsemHT,
          6u,
          ghsemDriverMgmt,
          0xDu,
          0LL,
          0,
          0LL,
          0,
          0LL,
          0,
          v10,
          v12,
          v14,
          v16);
        if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)v3 + 112) + 624LL))(
               *(_QWORD *)(a1 + 24),
               *(_QWORD *)(a1 + 16)) )
        {
          v8 = 3;
        }
        else
        {
          v2 = -2143354873;
          v8 = 6;
        }
        *((_DWORD *)v3 + 15) = v8;
        SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v17);
      }
    }
    v3 = *(struct _LDEV **)v3;
  }
  while ( v2 >= 0 );
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v18);
  return (unsigned int)v2;
}
