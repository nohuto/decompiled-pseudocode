/*
 * XREFs of SynthesizeTouchInputContainer @ 0x1C01B0880
 * Callers:
 *     ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x1C01A7340 (-OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C006DF18 (HMValidateHandleNoSecure.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z @ 0x1C0168D00 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@K@Z.c)
 *     ?ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z @ 0x1C0197988 (-ProcessInjectedInput@CTouchProcessor@@QEAAXPEAX0_NK1@Z.c)
 *     ?CreateInjectionDevice@@YAHXZ @ 0x1C01B0420 (-CreateInjectionDevice@@YAHXZ.c)
 */

char __fastcall SynthesizeTouchInputContainer(_QWORD *a1)
{
  int InjectionDevice; // eax
  __int64 v3; // rax
  CTouchProcessor *v4; // rcx
  void *v5; // rdx

  if ( TouchExtensibility::ghInjectionDevice )
  {
    if ( !HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19) )
      TouchExtensibility::ghInjectionDevice = 0LL;
    if ( TouchExtensibility::ghInjectionDevice )
      goto LABEL_6;
  }
  InjectionDevice = CreateInjectionDevice();
  if ( InjectionDevice )
  {
LABEL_6:
    v3 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
    InputTraceLogging::RIM::InjectInput(v3);
    v4 = TouchExtensibility::ghInjectionDevice;
    a1[4] = TouchExtensibility::ghInjectionDevice;
    *((_DWORD *)a1 + 20) = 1;
    CTouchProcessor::ProcessInjectedInput(v4, v5, (struct RIMCOMPLETEFRAME *)a1, 0, 0, 0);
    LOBYTE(InjectionDevice) = 1;
  }
  return InjectionDevice;
}
