/*
 * XREFs of ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18008BEEC
 * Callers:
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x18008A3C8 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x18008ADC0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x18008BAE0 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveDevice@MPCRawInputProvider@@QEAAJK@Z @ 0x18008B16C (-RemoveDevice@MPCRawInputProvider@@QEAAJK@Z.c)
 *     ?GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ @ 0x18008D894 (-GetInstance@MPCHeadUpdateListener@@SAPEAV1@XZ.c)
 *     ?RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z @ 0x18008DD70 (-RemoveHeadEventOccurred@MPCHeadUpdateListener@@QEAAX_K@Z.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x18008E670 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

void __fastcall SpectrumListener::Unregister(SpectrumListener *this)
{
  __int64 v2; // rcx
  SpeechRuntimeListener *v3; // rdi
  unsigned int v4; // edx
  MPCHeadUpdateListener *Instance; // rax

  if ( *((_BYTE *)this + 72) )
  {
    v2 = *((_QWORD *)this + 3);
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, *((_QWORD *)this + 6));
    v3 = (SpeechRuntimeListener *)*((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    if ( v3 )
    {
      SpeechRuntimeListener::~SpeechRuntimeListener(v3);
      operator delete(v3, (const struct std::nothrow_t *)0x58);
    }
    v4 = *((_DWORD *)this + 19);
    if ( v4 )
      MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), v4);
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 20));
    MPCRawInputProvider::RemoveDevice(*((MPCRawInputProvider **)this + 2), *((_DWORD *)this + 21));
    AcquireSRWLockExclusive((PSRWLOCK)this + 8);
    *((_QWORD *)this + 2) = 0LL;
    if ( this != (SpectrumListener *)-64LL )
      ReleaseSRWLockExclusive((PSRWLOCK)this + 8);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
    if ( *((_QWORD *)this + 5) )
    {
      Instance = MPCHeadUpdateListener::GetInstance();
      MPCHeadUpdateListener::RemoveHeadEventOccurred(Instance, *((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
    *((_BYTE *)this + 72) = 0;
  }
}
