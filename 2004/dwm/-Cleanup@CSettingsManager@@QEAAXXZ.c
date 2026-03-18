/*
 * XREFs of ?Cleanup@CSettingsManager@@QEAAXXZ @ 0x1400028D4
 * Callers:
 *     ?Shutdown@CDwmAppHost@@QEAAXJ@Z @ 0x1400017F0 (-Shutdown@CDwmAppHost@@QEAAXJ@Z.c)
 *     ?PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z @ 0x1400024E4 (-PropagateUserLogon@CSettingsManager@@QEAAXPEAUHKEY__@@0_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CSettingsManager::Cleanup(RTL_SRWLOCK *this)
{
  HKEY Ptr; // rcx
  HKEY v3; // rcx
  HKEY v4; // rcx

  AcquireSRWLockExclusive(this + 5);
  LODWORD(this[6].Ptr) = GetCurrentThreadId();
  Ptr = (HKEY)this[1].Ptr;
  if ( Ptr )
  {
    RegCloseKey(Ptr);
    this[1].Ptr = 0LL;
  }
  v3 = (HKEY)this[2].Ptr;
  if ( v3 )
  {
    RegCloseKey(v3);
    this[2].Ptr = 0LL;
  }
  v4 = (HKEY)this[4].Ptr;
  if ( v4 )
  {
    RegCloseKey(v4);
    this[4].Ptr = 0LL;
  }
  LODWORD(this[6].Ptr) = 0;
  ReleaseSRWLockExclusive(this + 5);
}
