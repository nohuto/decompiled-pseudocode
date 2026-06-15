/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x1800C1830
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180072424 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x1800C14C8 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(CVolumeSoftware *this)
{
  if ( *((_QWORD *)this + 8) )
  {
    if ( *((_BYTE *)this + 300) )
      CVolumeSoftware::PersistVolumeState((const wchar_t **)this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
    Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 248));
    if ( this != (CVolumeSoftware *)-256LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
  }
}
