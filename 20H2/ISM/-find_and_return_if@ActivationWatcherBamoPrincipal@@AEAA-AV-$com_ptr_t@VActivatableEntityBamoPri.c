/*
 * XREFs of ?find_and_return_if@ActivationWatcherBamoPrincipal@@AEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@V?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x1800462A0
 * Callers:
 *     ?UpdateAutoForwardPolicy@ForegroundManager@@UEAAX_K0@Z @ 0x1800141B0 (-UpdateAutoForwardPolicy@ForegroundManager@@UEAAX_K0@Z.c)
 *     ?RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z @ 0x180014500 (-RegisterActivationController@ForegroundManager@@UEAAXPEAVActivationControllerBamoProxy@@@Z.c)
 *     ?GetForegroundThreadId@ForegroundManager@@UEAAIXZ @ 0x1801045F0 (-GetForegroundThreadId@ForegroundManager@@UEAAIXZ.c)
 *     ?TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA?AV?$com_ptr_t@VActivatableEntityBamoPrincipal@@Uerr_exception_policy@wil@@@wil@@_K@Z @ 0x180105058 (-TryFindActivatableEntity@ActivationWatcherBamoPrincipal@@QEAA-AV-$com_ptr_t@VActivatableEntityB.c)
 *     ?UpdateActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJU_LUID@@AEBW4ACTIVATIONOBJECTNOTIFICATION_ACTION@@@Z @ 0x180105108 (-UpdateActivatableEntity@ActivationWatcherBamoPrincipal@@QEAAJU_LUID@@AEBW4ACTIVATIONOBJECTNOTIF.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??R?$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrincipal@@@Z @ 0x1800146EC (--R-$_Func_class@_NPEAVActivatableEntityBamoPrincipal@@@std@@QEBA_NPEAVActivatableEntityBamoPrin.c)
 *     ??0?$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsClientCustomProxy@@@Z @ 0x180014720 (--0-$com_ptr_t@VPenEventsClientCustomProxy@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVPenEventsC.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall ActivationWatcherBamoPrincipal::find_and_return_if(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rbx
  DWORD CurrentThreadId; // eax
  const char *v13; // r9
  __int64 v15; // rdx
  wil::details::in1diag3 *v16; // r9
  const char *v17; // r9
  void (__fastcall ***v18)(_QWORD); // rbx
  __int64 v19; // rcx
  __int64 v21; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void (__fastcall ***v23)(_QWORD); // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v24; // [rsp+68h] [rbp+10h]
  __int64 v25; // [rsp+70h] [rbp+18h]

  v25 = a3;
  v24 = a2;
  *a2 = 0LL;
  v6 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8);
  v7 = (__int64)(v6[8] - v6[7]) >> 3;
  v8 = 0LL;
  if ( (_DWORD)v7 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v6[4] + 32LL);
      if ( *(int *)(v9 + 8) <= 0 )
        v10 = 0LL;
      else
        v10 = *(_QWORD *)(v9 + 16);
      v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
      CurrentThreadId = GetCurrentThreadId();
      if ( *(_DWORD *)(v11 + 168) != CurrentThreadId && *(_DWORD *)(v11 + 24) != CurrentThreadId )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          1597LL,
          (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
          v13);
        __debugbreak();
      }
      v15 = v6[7];
      v16 = retaddr;
      if ( (unsigned int)v8 >= (unsigned __int64)((v6[8] - v15) >> 3) )
        goto LABEL_23;
      wil::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>::com_ptr_t<PenEventsClientCustomProxy,wil::err_exception_policy>(
        &v23,
        *(void (__fastcall ****)(_QWORD))(v15 + 8 * v8));
      v18 = v23;
      if ( !v23 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          134LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
          v17);
LABEL_23:
        wil::details::in1diag3::_FailFast_Unexpected(
          v16,
          73LL,
          (__int64)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
          (const char *)v16);
        __debugbreak();
      }
      if ( (unsigned __int8)std::_Func_class<bool,ActivatableEntityBamoPrincipal *>::operator()(a3, (__int64)v23) )
        break;
      wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v23);
      v8 = (unsigned int)(v8 + 1);
      if ( (unsigned int)v8 >= (unsigned int)v7 )
        goto LABEL_14;
    }
    v21 = *a2;
    *a2 = v18;
    if ( v18 )
      (**v18)(v18);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>((__int64 *)&v23);
  }
LABEL_14:
  v19 = *(_QWORD *)(a3 + 56);
  if ( v19 )
  {
    LOBYTE(v5) = v19 != a3;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 32LL))(v19, v5);
    *(_QWORD *)(a3 + 56) = 0LL;
  }
  return a2;
}
