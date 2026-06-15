/*
 * XREFs of ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x1800BEFC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072324 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x1800BEDA8 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 */

void __fastcall CMuteSoftware::ProviderFinalRelease(CMuteSoftware *this)
{
  if ( *((_QWORD *)this + 4) && *((_BYTE *)this + 104) )
    CMuteSoftware::PersistMuteState((const wchar_t **)this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 48));
  if ( this != (CMuteSoftware *)-56LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
}
