/*
 * XREFs of ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800FE760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_Sd @ 0x1800BF494 (WPP_SF_Sd.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceStateChanged(PVOID pv, const unsigned __int16 *a2, unsigned int a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x18u, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, a3, a2);
}
