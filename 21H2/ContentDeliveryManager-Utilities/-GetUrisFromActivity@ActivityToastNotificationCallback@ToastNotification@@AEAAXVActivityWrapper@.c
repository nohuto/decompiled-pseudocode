/*
 * XREFs of ?GetUrisFromActivity@ActivityToastNotificationCallback@ToastNotification@@AEAAXVActivityWrapper@MobilityExperience@@PEAPEAUHSTRING__@@1@Z @ 0x18004DDAC
 * Callers:
 *     ??R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ @ 0x18004CE9C (--R_lambda_ff7cfae8cddf8b4979caf74bf72ddb07_@@QEBAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA?AV?$com_ptr_t@UIUserActivityPayload@UserActivities@Internal@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18004C504 (-GetUserActivityPayload@ActivityWrapper@MobilityExperience@@QEBA-AV-$com_ptr_t@UIUserActivityPay.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::GetUrisFromActivity(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rax
  __int64 result; // rax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, _QWORD *); // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v20[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+28h] BYREF
  __int64 v23; // [rsp+78h] [rbp+30h]
  __int64 v24; // [rsp+80h] [rbp+38h] BYREF
  __int64 *v25; // [rsp+88h] [rbp+40h] BYREF

  v23 = a2;
  v22 = a1;
  v20[1] = -2LL;
  *a3 = 0LL;
  *a4 = 0LL;
  MobilityExperience::ActivityWrapper::GetUserActivityPayload(a2, (const WCHAR *)&v25);
  v24 = 0LL;
  v7 = *v25;
  v24 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v7 + 192))(v25, &v24);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_23;
  v10 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v24)(
          v24,
          &GUID_758d9661_221c_480f_a339_50656673f46f,
          v20);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v10);
    goto LABEL_25;
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v20[0] + 48LL))(v20[0], a3);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_25:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0xE6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_26;
  }
  v22 = 0LL;
  v13 = *v25;
  v22 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v13 + 176))(
             v25,
             &v22);
  if ( (int)result >= 0 )
  {
    v15 = v22;
    if ( !v22 )
      goto LABEL_11;
    v16 = (**v22)(v22, &GUID_758d9661_221c_480f_a339_50656673f46f, &v19);
    v17 = retaddr;
    if ( v16 >= 0 )
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 48LL))(v19, a4);
      if ( (int)result >= 0 )
      {
        if ( v19 )
          result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        goto LABEL_10;
      }
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xEC,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)result);
LABEL_23:
      wil::details::in1diag3::Throw_Hr(
        v9,
        (void *)0xE4,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
LABEL_26:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v16);
    JUMPOUT(0x18004DFC8LL);
  }
LABEL_10:
  v15 = v22;
LABEL_11:
  if ( v15 )
    result = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v15)[2])(v15);
  if ( v20[0] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  if ( v24 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  if ( v25 )
    result = (*(__int64 (__fastcall **)(__int64 *))(*v25 + 16))(v25);
  v18 = *(_QWORD *)(a2 + 8);
  if ( v18 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return result;
}
