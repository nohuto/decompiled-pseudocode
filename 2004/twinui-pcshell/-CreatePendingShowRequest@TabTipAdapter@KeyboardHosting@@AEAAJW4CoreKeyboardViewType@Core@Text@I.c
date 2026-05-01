/*
 * XREFs of ?CreatePendingShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x18035CBA0
 * Callers:
 *     ?OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z @ 0x1803611E0 (-OnShellRequestedShow@TabTipAdapter@KeyboardHosting@@UEAAJII@Z.c)
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180361460 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803472D0 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ??1?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180347D68 (--1-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?Destroy@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18034927C (-Destroy@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_T.c)
 *     ?Stop@?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180351844 (-Stop@-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgR.c)
 *     ??$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAY0L@$$CBD@Z @ 0x1803584D0 (--$PreviousPendingRequestCanceled@IIAEAY0L@$$CBD@TouchKeyboardExperienceTelemetryLogger@@SAX$$QE.c)
 *     ?StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@_N@Z @ 0x180363EB8 (-StartActivity@PendingRequestCreated@TouchKeyboardExperienceTelemetryLogger@@QEAAXW4CoreKeyboard.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::CreatePendingShowRequest(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        char a4)
{
  __int64 v8; // r9
  __int64 v9; // r8
  int v11; // [rsp+20h] [rbp-198h] BYREF
  _DWORD v12[3]; // [rsp+24h] [rbp-194h] BYREF
  _QWORD v13[40]; // [rsp+30h] [rbp-188h] BYREF

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v13,
    (__int64)"PendingRequestCreated");
  LOBYTE(v8) = a4;
  v13[0] = &TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::`vftable';
  TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::StartActivity(v13, a2, a3, v8);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 384));
  if ( *(_BYTE *)(a1 + 356) )
  {
    v11 = *(_DWORD *)(a1 + 360);
    v12[0] = *(_DWORD *)(a1 + 364);
    TouchKeyboardExperienceTelemetryLogger::PreviousPendingRequestCanceled<unsigned int,unsigned int,char const (&)[11]>(
      v12,
      &v11,
      v9);
    *(_DWORD *)(a1 + 360) = 0;
    *(_BYTE *)(a1 + 357) = 0;
    *(_DWORD *)(a1 + 364) = 11;
  }
  *(_BYTE *)(a1 + 356) = 1;
  *(_BYTE *)(a1 + 357) = a4;
  *(_DWORD *)(a1 + 360) = a3;
  *(_DWORD *)(a1 + 364) = a2;
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
    (__int64)v13,
    0);
  if ( a1 != -384 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 384));
  v13[0] = &TouchKeyboardExperienceTelemetryLogger::PendingRequestCreated::`vftable';
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Destroy(v13);
  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>((__int64)v13);
  return 0LL;
}
