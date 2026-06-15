/*
 * XREFs of ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x180010E60
 * Callers:
 *     ?ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMPTION@@IH@Z @ 0x180010BC0 (-ExecutePBMActions@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@0W4_PLM_EXEMP.c)
 *     ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800118E0 (-SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIME.c)
 * Callees:
 *     ?SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z @ 0x180010F18 (-SendSoundLevelNotification@CApplication@@IEAAXW4__MIDL___MIDL_itf_audiosrv_0000_0000_0004@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingSoundLevelNotification(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int LockSemaphore_high; // eax
  unsigned int DebugInfo_high; // esi

  v1 = this + 7;
  EnterCriticalSection(this + 7);
  if ( !LODWORD(this[8].DebugInfo) )
  {
    LockSemaphore_high = HIDWORD(this[15].LockSemaphore);
    LODWORD(this[8].DebugInfo) = 1;
    while ( 1 )
    {
      DebugInfo_high = HIDWORD(this[8].DebugInfo);
      if ( DebugInfo_high == this[8].LockCount && !LockSemaphore_high )
        break;
      this[8].LockCount = DebugInfo_high;
      LeaveCriticalSection(v1);
      CApplication::SendSoundLevelNotification(this, DebugInfo_high);
      EnterCriticalSection(v1);
      HIDWORD(this[15].LockSemaphore) = 0;
      LockSemaphore_high = 0;
    }
    LODWORD(this[8].DebugInfo) = 0;
  }
  LeaveCriticalSection(v1);
}
