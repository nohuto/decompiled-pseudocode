/*
 * XREFs of ?HandleSimpleVolumeChanged@CMonitor@@AEAAXMHPEBU_GUID@@@Z @ 0x180100900
 * Callers:
 *     ?DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1801006F0 (-DoHandleSimpleVolumeChanged@CMonitor@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180057894 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18010382C (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180104134 (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_gd @ 0x180104788 (WPP_SF_gd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CMonitor::HandleSimpleVolumeChanged(CMonitor *this, float a2, int a3, const struct _GUID *a4)
{
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v7; // [rsp+38h] [rbp-20h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 16);
  v7 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_gd(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL);
  }
  if ( a3 )
  {
    if ( *((_DWORD *)this + 14) == 3 )
      CMonitor::Stop(this);
  }
  else if ( *((_DWORD *)this + 14) == 4 )
  {
    CMonitor::Start(this);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
