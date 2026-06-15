/*
 * XREFs of ??_GCVirtualAudioStream@@UEAAPEAXI@Z @ 0x1800F7C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800749E8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=1
CVirtualAudioStream *__fastcall CVirtualAudioStream::`scalar deleting destructor'(CVirtualAudioStream *this, char a2)
{
  void *v4; // rcx

  *(_QWORD *)this = &CVirtualAudioStream::`vftable';
  if ( *((_BYTE *)this + 44) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 4);
  v4 = (void *)*((_QWORD *)this + 3);
  if ( v4 )
    CoTaskMemFree(v4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
