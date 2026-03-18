/*
 * XREFs of ?InitializeGlobalCache@EDIDCACHE@DxgMonitor@@SAJXZ @ 0x1C020D904
 * Callers:
 *     MonitorInitializeGlobal @ 0x1C020D64C (MonitorInitializeGlobal.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0EDIDCACHE@DxgMonitor@@QEAA@XZ @ 0x1C020D94C (--0EDIDCACHE@DxgMonitor@@QEAA@XZ.c)
 */

__int64 __fastcall DxgMonitor::EDIDCACHE::InitializeGlobalCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DxgMonitor::EDIDCACHE *v4; // rax

  v4 = (DxgMonitor::EDIDCACHE *)operator new[](0x2A8uLL, 0x4D677844u, 256LL, a4);
  if ( v4 )
  {
    DxgMonitor::EDIDCACHE::s_pEdidCache = (PVOID)DxgMonitor::EDIDCACHE::EDIDCACHE(v4);
    if ( DxgMonitor::EDIDCACHE::s_pEdidCache )
      return 0LL;
  }
  else
  {
    DxgMonitor::EDIDCACHE::s_pEdidCache = 0LL;
  }
  WdLogSingleEntry0(6LL);
  return 3221225495LL;
}
