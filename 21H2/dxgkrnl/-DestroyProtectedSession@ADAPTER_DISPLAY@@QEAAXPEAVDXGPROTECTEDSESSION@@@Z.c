/*
 * XREFs of ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C03398D8
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0339ABC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000964C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000A6A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C000A6FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000F480 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C000F7D4 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C0057EBC (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0058130 (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C033A008 (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C033A184 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DestroyProtectedSession(DXGADAPTER **this, struct DXGPROTECTEDSESSION *a2)
{
  struct _EX_RUNDOWN_REF v4; // rcx
  struct DXGPROTECTEDSESSION **v5; // rax
  _BYTE v6[16]; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v7[144]; // [rsp+60h] [rbp-A8h] BYREF

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 916LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!GetAdapter()->IsCoreResourceSharedOwner()",
      916LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    WdLogSingleEntry1(1LL, 917LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!GetAdapter()->IsCoreResourceExclusiveOwner()",
      917LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 17);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v6, (struct ADAPTER_DISPLAY *)this);
  v4.Count = *(_QWORD *)a2;
  if ( *(struct DXGPROTECTEDSESSION **)(*(_QWORD *)a2 + 8LL) != a2
    || (v5 = (struct DXGPROTECTEDSESSION **)*((_QWORD *)a2 + 1), *v5 != a2) )
  {
    __fastfail(3u);
  }
  *v5 = (struct DXGPROTECTEDSESSION *)v4.Count;
  *(_QWORD *)(v4.Count + 8) = v5;
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v7, this[2], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v7) < 0 )
  {
    WdLogSingleEntry1(4LL, 952LL);
  }
  else
  {
    DXGPROTECTEDSESSION::Stop(a2);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v7);
    if ( *((_BYTE *)a2 + 144) )
    {
      DXGPROTECTEDSESSION::SignalFence(a2);
      *((_BYTE *)a2 + 144) = 0;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v7);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROTECTEDSESSION::`scalar deleting destructor'(a2);
}
