/*
 * XREFs of ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x1800FE7B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x1800BC0A0 (WPP_SF_S.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceRemoved(PVOID pv, const unsigned __int16 *a2)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_107eeefd23a13a1e42820564321ad14e_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, 8u, a2);
}
