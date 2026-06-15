/*
 * XREFs of ??_GTelephonyControllerCallInstance@@MEAAPEAXI@Z @ 0x180142DF0
 * Callers:
 *     ??_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z @ 0x180075120 (--_ETelephonyControllerCallInstance@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseAudioResourceHandle@@YAX_K@Z @ 0x1800ECF7C (-ReleaseAudioResourceHandle@@YAX_K@Z.c)
 *     ?ResetState@TelephonyControllerCallInstance@@AEAAJXZ @ 0x18014340C (-ResetState@TelephonyControllerCallInstance@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
TelephonyControllerCallInstance *__fastcall TelephonyControllerCallInstance::`scalar deleting destructor'(
        TelephonyControllerCallInstance *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  *(_QWORD *)this = &TelephonyControllerCallInstance::`vftable'{for `ITelephonyControllerCallInstance'};
  *((_QWORD *)this + 1) = &TelephonyControllerCallInstance::`vftable'{for `CUnknown'};
  TelephonyControllerCallInstance::ResetState(this);
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
    ReleaseAudioResourceHandle(v5);
  *((_QWORD *)this + 1) = &CUnknown::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
