/*
 * XREFs of ?CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR@@QEAAJK@Z @ 0x1C03477A8
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0216DB4 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C02C2C38 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ @ 0x1C005AAD8 (-CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONMGR::CleanCachedIddDisplayConfigRequest(DXGSESSIONMGR *this, unsigned int a2)
{
  __int64 v2; // rdi
  ReferenceCounted **v4; // rcx
  unsigned int v5; // edi
  __int64 v6; // rbx
  _BYTE v8[24]; // [rsp+50h] [rbp-18h] BYREF

  v2 = a2;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONMGR *)((char *)this + 88), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  if ( (unsigned int)v2 < *((_DWORD *)this + 20)
    && (v4 = *(ReferenceCounted ***)(*((_QWORD *)this + 6) + 8 * v2)) != 0LL )
  {
    DXGSESSIONDATA::CleanCachedIddDisplayConfigRequest(v4);
    v5 = 0;
  }
  else
  {
    v6 = v2;
    v5 = -1073741275;
    WdLogSingleEntry2(2LL, v6, -1073741275LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get session data for session 0x%I64x, returning 0x%I64x.",
      v6,
      -1073741275LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  return v5;
}
