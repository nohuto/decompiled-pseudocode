/*
 * XREFs of ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x18008BAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18008BEEC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ??1SpeechRuntimeListener@@QEAA@XZ @ 0x18008E670 (--1SpeechRuntimeListener@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
SpectrumListener *__fastcall SpectrumListener::`scalar deleting destructor'(SpectrumListener *this, char a2)
{
  void *v4; // rdi

  *(_QWORD *)this = &SpectrumListener::`vftable';
  SpectrumListener::Unregister(this);
  v4 = (void *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    SpeechRuntimeListener::~SpeechRuntimeListener(*((SpeechRuntimeListener **)this + 4));
    operator delete(v4, (const struct std::nothrow_t *)0x58);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
