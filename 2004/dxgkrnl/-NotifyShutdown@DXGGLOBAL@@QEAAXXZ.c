/*
 * XREFs of ?NotifyShutdown@DXGGLOBAL@@QEAAXXZ @ 0x1C026A088
 * Callers:
 *     DxgkShutdown @ 0x1C0261460 (DxgkShutdown.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00024A0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0003F80 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0139CC8 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGGLOBAL::NotifyShutdown(DXGGLOBAL *this)
{
  volatile signed __int64 **v1; // rsi
  __int64 v2; // rdx
  volatile signed __int64 *v3; // rbx
  volatile signed __int64 *v4; // rdi
  volatile signed __int64 *v5; // rbp
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // r10
  _BYTE v11[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v12[144]; // [rsp+30h] [rbp-A8h] BYREF

  v1 = (volatile signed __int64 **)((char *)this + 664);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGGLOBAL *)((char *)this + 584), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v3 = *v1;
  while ( v3 != (volatile signed __int64 *)v1 && v3 )
  {
    v4 = v3;
    v5 = v3;
    v3 = (volatile signed __int64 *)*v3;
    _m_prefetchw((const void *)(v5 + 3));
    v6 = *((_QWORD *)v5 + 3);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v4 + 3, v6 + 1, v6);
      if ( v7 == v6 )
      {
        LOBYTE(v6) = 1;
        break;
      }
    }
    if ( (_BYTE)v6 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v12, (struct DXGADAPTER *const)v4, 0LL);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v4);
      if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v12, 2LL) < 0 )
        goto LABEL_17;
      v9 = *((_QWORD *)v4 + 338);
      if ( v9 )
      {
        ADAPTER_RENDER::FlushScheduler(v9, 6, 0xFFFFFFFF, 0);
        v10 = (_QWORD *)*((_QWORD *)v5 + 338);
        if ( !v10 )
          goto LABEL_17;
        if ( !*(_BYTE *)(v10[2] + 209LL) )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v10[80] + 8LL) + 56LL))(v10[81]);
          v10 = (_QWORD *)*((_QWORD *)v5 + 338);
        }
      }
      else
      {
        v10 = 0LL;
      }
      if ( v10 )
        ADAPTER_RENDER::FlushScheduler((__int64)v10, 7, 0xFFFFFFFF, 0);
LABEL_17:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v12, v8);
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11, v2);
}
