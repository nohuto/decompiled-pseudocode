/*
 * XREFs of DxgkStartPnPStop @ 0x1C02C572C
 * Callers:
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A780 (-AcquireExclusive@COREACCESS@@QEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BC90 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BD4C (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0046BEC (-Acquire@DXGADAPTERSTOPRESETLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C01C02FC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 */

void __fastcall DxgkStartPnPStop(DXGADAPTER *this)
{
  bool v2; // si
  DXGADAPTER *v3; // rbx
  char *v4; // rcx
  struct DXGGLOBAL *Global; // rax
  struct DXGGLOBAL *v6; // rax
  DXGADAPTER *v7; // [rsp+50h] [rbp-68h] BYREF
  char v8; // [rsp+58h] [rbp-60h]
  _BYTE v9[64]; // [rsp+60h] [rbp-58h] BYREF

  v7 = this;
  v8 = 0;
  DXGADAPTERSTOPRESETLOCKEXCLUSIVE::Acquire((DXGADAPTERSTOPRESETLOCKEXCLUSIVE *)&v7);
  COREACCESS::COREACCESS((COREACCESS *)v9, this);
  COREACCESS::AcquireExclusive((__int64)v9, 1u, 0);
  v2 = *((_QWORD *)this + 350) && *((_DWORD *)this + 50) == 1;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry1(1LL, 1308LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsCoreResourceExclusiveOwner()", 1308LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 2705) = 1;
  COREACCESS::~COREACCESS((COREACCESS *)v9);
  if ( v8 )
  {
    v3 = v7;
    v4 = (char *)v7 + 136;
    *((_QWORD *)v7 + 18) = 0LL;
    ExReleasePushLockExclusiveEx(v4, 0LL);
    KeLeaveCriticalRegion();
    DXGADAPTER::ReleaseReferenceNoTracking(v3);
  }
  if ( v2 )
  {
    Global = DXGGLOBAL_GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))DxgkCheckPairedRenderAdapterForStopCallBack,
      (__int64)this,
      1LL);
  }
  v6 = DXGGLOBAL_GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)v6 + 191), 0LL);
}
