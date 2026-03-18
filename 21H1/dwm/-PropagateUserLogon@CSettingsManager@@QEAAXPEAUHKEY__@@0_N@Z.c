/*
 * XREFs of ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x1400024E4
 * Callers:
 *     ?ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x140001130 (-ProcessLPCCommand@CDwmAppHost@@AEAAJPEAVCPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 * Callees:
 *     ?RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ @ 0x140002588 (-RefreshPreferencesAndPolicies@CSettingsManager@@QEAAXXZ.c)
 *     ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x1400028D4 (-Cleanup@CSettingsManager@@QEAAXXZ.c)
 */

void __fastcall CSettingsManager::PropagateUserLogon(RTL_SRWLOCK *this, HKEY a2, HKEY a3, char a4)
{
  CDwmAppHost *v8; // rcx
  void *v9; // r8

  CSettingsManager::Cleanup((CSettingsManager *)this);
  AcquireSRWLockExclusive(this + 5);
  GetCurrentThreadId();
  if ( a2 )
    this[1].Ptr = a2;
  if ( a3 )
    this[2].Ptr = a3;
  LODWORD(this[6].Ptr) = 0;
  LOBYTE(this[3].Ptr) = a4;
  ReleaseSRWLockExclusive(this + 5);
  CSettingsManager::RefreshPreferencesAndPolicies((CSettingsManager *)this);
  CDwmAppHost::LpcNotifySettingsChange(v8, 0x7C3u, v9);
}
