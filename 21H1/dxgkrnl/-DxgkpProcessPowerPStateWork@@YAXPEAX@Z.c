/*
 * XREFs of ?DxgkpProcessPowerPStateWork@@YAXPEAX@Z @ 0x1C021D8D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000E2A4 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ @ 0x1C0036D98 (-ProcessPStateTransitionRequest@DXGADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkpProcessPowerPStateWork(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rdx
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v5, this, 0LL);
  if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v5, 0LL) >= 0 )
    DXGADAPTER::ProcessPStateTransitionRequest(this, v2, v3);
  DXGADAPTER::ReleaseReferenceNoTracking(this);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v5, v4);
}
