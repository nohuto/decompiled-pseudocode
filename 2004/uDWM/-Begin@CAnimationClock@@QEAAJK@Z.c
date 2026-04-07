/*
 * XREFs of ?Begin@CAnimationClock@@QEAAJK@Z @ 0x180031ACC
 * Callers:
 *     ?OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z @ 0x180032DEC (-OnBeginAnimationClock@CAnimationClockCoordinator@@QEAAJU_GUID@@K@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011FE8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18002EB38 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?Destroy@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18002EBB8 (-Destroy@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?Stop@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18002EEEC (-Stop@-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18002F1CC (--0-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z @ 0x180031948 (-StartActivity@BeginAnimationClock@AnimationClockLoggingTelemetry@@QEAAXU_GUID@@J@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     McTemplateU0jqi_EtwEventWriteTransfer @ 0x1800BA850 (McTemplateU0jqi_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CAnimationClock::Begin(CAnimationClock *this, unsigned int a2)
{
  struct _GUID v4; // xmm0
  int v5; // r8d
  int v6; // edx
  unsigned int v7; // ebx
  unsigned int v8; // eax
  char v9; // al
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+30h] [rbp-188h] BYREF
  struct _GUID v12; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v13[40]; // [rsp+50h] [rbp-168h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v13,
    (__int64)"BeginAnimationClock");
  v4 = *(struct _GUID *)((char *)this + 120);
  v5 = *((_DWORD *)this + 36);
  v13[0] = &AnimationClockLoggingTelemetry::BeginAnimationClock::`vftable';
  v12 = v4;
  AnimationClockLoggingTelemetry::BeginAnimationClock::StartActivity(
    (AnimationClockLoggingTelemetry::BeginAnimationClock *)v13,
    &v12,
    v5);
  v7 = -2147019873;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    if ( a2 > 0x2710 )
    {
      v7 = -2147024809;
    }
    else
    {
      v8 = *((_DWORD *)this + 35);
      if ( v8 <= a2 )
        v8 = a2;
      v7 = 0;
      *((_DWORD *)this + 35) = v8;
      v9 = _InterlockedIncrement((volatile signed __int32 *)this + 36);
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0jqi_EtwEventWriteTransfer(1, v6, (_DWORD)this + 120, a2, v9);
    }
  }
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v13, v7);
  v13[0] = &AnimationClockLoggingTelemetry::BeginAnimationClock::`vftable';
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v7;
}
