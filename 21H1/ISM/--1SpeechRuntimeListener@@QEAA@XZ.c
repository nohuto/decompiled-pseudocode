/*
 * XREFs of ??1SpeechRuntimeListener@@QEAA@XZ @ 0x18008E670
 * Callers:
 *     ??0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z @ 0x18008B748 (--0SpectrumListener@@QEAA@PEAVMPCRawInputProvider@@@Z.c)
 *     ??1?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAA@XZ @ 0x18008BA78 (--1-$unique_ptr@VSpeechRuntimeListener@@U-$default_delete@VSpeechRuntimeListener@@@std@@@std@@QE.c)
 *     ??_GSpectrumListener@@UEAAPEAXI@Z @ 0x18008BAE0 (--_GSpectrumListener@@UEAAPEAXI@Z.c)
 *     ?Unregister@SpectrumListener@@QEAAXXZ @ 0x18008BEEC (-Unregister@SpectrumListener@@QEAAXXZ.c)
 *     ?reset@?$unique_ptr@VSpeechRuntimeListener@@U?$default_delete@VSpeechRuntimeListener@@@std@@@std@@QEAAXPEAVSpeechRuntimeListener@@@Z @ 0x18008BFDC (-reset@-$unique_ptr@VSpeechRuntimeListener@@U-$default_delete@VSpeechRuntimeListener@@@std@@@std.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall SpeechRuntimeListener::~SpeechRuntimeListener(SpeechRuntimeListener *this)
{
  __int64 *v2; // rsi

  v2 = (__int64 *)((char *)this + 8);
  if ( *((_QWORD *)this + 3) )
  {
    (*(void (__fastcall **)(__int64, const wchar_t *, __int64))(*(_QWORD *)*v2 + 48LL))(
      *v2,
      L"System\\SpeechRuntimeListener",
      1LL);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 160LL))(*(_QWORD *)this, *((_QWORD *)this + 3));
  }
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease(v2);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this);
}
