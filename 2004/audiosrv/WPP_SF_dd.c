/*
 * XREFs of WPP_SF_dD @ 0x180100BA8
 * Callers:
 *     ?Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ @ 0x1800FD420 (-Initialize@CaptureMonitor@CMonitorManager@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, 89LL, &v5);
}
