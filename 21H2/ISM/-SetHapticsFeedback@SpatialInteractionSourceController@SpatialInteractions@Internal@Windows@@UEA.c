/*
 * XREFs of ?SetHapticsFeedback@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJGEG@Z @ 0x18016EF40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_&___int64_unsigned_int_&_unsigned_char_&_bool_&_bool_&__lambda_a8bf174a58f89e727d2f8f2640ee39aa___ @ 0x1801686B8 (Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--SpatialInteractions--HapticsEngine.c)
 *     wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator() @ 0x18016A76C (wil--details--ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___--operator().c)
 *     ?ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAXPEA_N0@Z @ 0x18016E6B4 (-ReadHapticsEngineParameters@SpatialInteractionSourceController@SpatialInteractions@Internal@Win.c)
 *     ?StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z @ 0x18016F518 (-StartFeedback@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJNK@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetHapticsFeedback(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *this,
        __int16 a2,
        unsigned __int8 a3,
        unsigned __int16 a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // rsi
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  Windows::Internal::SpatialInteractions::HapticsEngine **v9; // rdi
  Windows::Internal::SpatialInteractions::HapticsEngine *v10; // rcx
  int v11; // eax
  unsigned int v12; // edx
  int started; // eax
  bool v15; // [rsp+48h] [rbp-29h] BYREF
  bool v16[3]; // [rsp+49h] [rbp-28h] BYREF
  int v17; // [rsp+4Ch] [rbp-25h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *v18; // [rsp+50h] [rbp-21h] BYREF
  __int64 v19; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v20[5]; // [rsp+60h] [rbp-11h] BYREF
  char v21; // [rsp+88h] [rbp+17h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+90h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  bool v24; // [rsp+D8h] [rbp+67h] BYREF
  __int16 v25; // [rsp+E0h] [rbp+6Fh] BYREF
  unsigned __int8 v26; // [rsp+E8h] [rbp+77h] BYREF
  unsigned __int16 v27; // [rsp+F0h] [rbp+7Fh] BYREF

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v17 = 0;
  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 752);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 752));
  v22 = v5;
  v20[0] = &v17;
  v20[1] = this;
  v20[2] = &v25;
  v20[3] = &v26;
  v20[4] = &v27;
  v21 = 1;
  if ( v25 != 4100 )
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 1421LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ctrllib\\spatialinteractionsourcecontroller.cpp",
      (const char *)v7);
    goto LABEL_22;
  }
  if ( !*((_BYTE *)this + 106) )
  {
    v6 = -2147020579;
    v7 = 2147946717LL;
    v8 = 1422LL;
    goto LABEL_20;
  }
  if ( !*((_BYTE *)this + 748) )
  {
    v6 = -2147020579;
    v7 = 2147946717LL;
    v8 = 1423LL;
    goto LABEL_20;
  }
  if ( v27 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 203);
    _InterlockedExchangeAdd((volatile signed __int32 *)this + 204, v27);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 202);
  }
  v9 = (Windows::Internal::SpatialInteractions::HapticsEngine **)((char *)this + 792);
  v10 = (Windows::Internal::SpatialInteractions::HapticsEngine *)*((_QWORD *)this + 99);
  if ( !v10 )
  {
    v15 = 0;
    v24 = 0;
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::ReadHapticsEngineParameters(
      this,
      &v15,
      &v24);
    v16[0] = *((_DWORD *)this + 200) == 0;
    v11 = *((unsigned __int16 *)this + 373);
    if ( (_WORD)v11 )
      v12 = 9 * v11 / 10;
    else
      v12 = 4900;
    v19 = 1000LL * v12;
    v18 = this;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 99);
    started = Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::SpatialInteractions::HapticsEngine_Windows::Internal::SpatialInteractions::HapticsEngine_bool_const_____int64_unsigned_int___unsigned_char___bool___bool____lambda_a8bf174a58f89e727d2f8f2640ee39aa___(
                (__int64 *)this + 99,
                v16,
                &v19,
                (_DWORD *)this + 200,
                (char *)this + 804,
                (char *)&v15,
                (char *)&v24,
                (__int64 *)&v18);
    v6 = started;
    if ( started < 0 )
    {
      v8 = 1465LL;
LABEL_19:
      v7 = (unsigned int)started;
      goto LABEL_20;
    }
    v10 = *v9;
  }
  started = Windows::Internal::SpatialInteractions::HapticsEngine::StartFeedback(v10, (double)v26 / 100.0, v27);
  v6 = started;
  if ( started < 0 )
  {
    v8 = 1468LL;
    goto LABEL_19;
  }
  v6 = 0;
LABEL_22:
  wil::details::ScopeExitFn__lambda_f890c18201f590f7cdc6ef396e9cd839___::operator()((__int64)v20);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}
