/*
 * XREFs of ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C030AEB0
 * Callers:
 *     DxgkShutdown @ 0x1C0301AD0 (DxgkShutdown.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C000BD00 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C01BB044 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyShutdown(DXGGLOBAL *this)
{
  volatile signed __int64 **v1; // rsi
  volatile signed __int64 *v2; // rbx
  volatile signed __int64 *v3; // rdi
  volatile signed __int64 *v4; // rbp
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rcx
  _QWORD *v8; // r10
  _BYTE v9[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v10[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (volatile signed __int64 **)((char *)this + 800);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGGLOBAL *)((char *)this + 704), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v2 = *v1;
  while ( v2 != (volatile signed __int64 *)v1 && v2 )
  {
    v3 = v2;
    v4 = v2;
    v2 = (volatile signed __int64 *)*v2;
    _m_prefetchw((const void *)(v4 + 3));
    v5 = *((_QWORD *)v4 + 3);
    while ( v5 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v3 + 3, v5 + 1, v5);
      if ( v6 == v5 )
      {
        LOBYTE(v5) = 1;
        break;
      }
    }
    if ( (_BYTE)v5 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v10, (struct DXGADAPTER *const)v3, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v3);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v10) >= 0 )
      {
        v7 = *((_QWORD *)v3 + 350);
        if ( v7 )
        {
          ADAPTER_RENDER::FlushScheduler(v7, 6u, 0xFFFFFFFF, 0);
          v8 = (_QWORD *)*((_QWORD *)v4 + 350);
          if ( v8 )
          {
            if ( *(_BYTE *)(v8[2] + 209LL)
              || ((*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v8[81] + 8LL) + 56LL))(v8[82]),
                  (v8 = (_QWORD *)*((_QWORD *)v4 + 350)) != 0LL) )
            {
              ADAPTER_RENDER::FlushScheduler((__int64)v8, 7u, 0xFFFFFFFF, 0);
            }
          }
        }
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v10);
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
