/*
 * XREFs of ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C0283A9C
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0283C30 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0011608 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0011F0C (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ??0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z @ 0x1C0046E38 (--0DXGPROTECTEDSESSIONMUTEX@@QEAA@PEAVADAPTER_DISPLAY@@_N@Z.c)
 *     ??_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z @ 0x1C0046F9C (--_GDXGPROTECTEDSESSION@@QEAAPEAXI@Z.c)
 *     ?SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C028402C (-SignalFence@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C0284180 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::DestroyProtectedSession(DXGADAPTER **this, struct DXGPROTECTEDSESSION *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  struct _EX_RUNDOWN_REF v11; // rcx
  struct DXGPROTECTEDSESSION **v12; // rax
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  _BYTE v19[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v20[144]; // [rsp+30h] [rbp-A8h] BYREF

  if ( DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 916LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this[2]) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 917LL;
    WdLogEvent5_WdAssertion(v9);
  }
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)a2 + 16);
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v19, (struct ADAPTER_DISPLAY *)this);
  v11.Count = *(_QWORD *)a2;
  if ( *(struct DXGPROTECTEDSESSION **)(*(_QWORD *)a2 + 8LL) != a2
    || (v12 = (struct DXGPROTECTEDSESSION **)*((_QWORD *)a2 + 1), *v12 != a2) )
  {
    __fastfail(3u);
  }
  *v12 = (struct DXGPROTECTEDSESSION *)v11.Count;
  *(_QWORD *)(v11.Count + 8) = v12;
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19, v10);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, this[2], 0LL);
  if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v20, v13 + 1, v13) < 0 )
  {
    v17 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v17 + 24) = 952LL;
    WdLogEvent5_WdEvent(v17);
  }
  else
  {
    DXGPROTECTEDSESSION::Stop(a2);
    COREADAPTERACCESS::Release((COREADAPTERACCESS *)v20);
    if ( *((_BYTE *)a2 + 136) )
    {
      DXGPROTECTEDSESSION::SignalFence(a2);
      *((_BYTE *)a2 + 136) = 0;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20, v16);
  DXGADAPTER::ReleaseReferenceNoTracking(this[2]);
  DXGPROTECTEDSESSION::`scalar deleting destructor'((struct DXGSYNCOBJECT **)a2, v18);
}
