/*
 * XREFs of ?find_and_remove_if@ActivationWatcherBamoPrincipal@@AEAAJV?$function@$$A6A_NPEAVActivatableEntityBamoPrincipal@@@Z@std@@@Z @ 0x180002954
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001A5B0 (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@VBamoConnection@2@V?$com_ptr_t@VBamoActivatableEntityPrincipal@@Uerr_returncode_policy@wil@@@wil@@@Bamo@Microsoft@@QEAAJI@Z @ 0x180002AC4 (-RemoveAt@-$ListPrincipalCommon@VBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamo.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800107DC (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivationWatcherBamoPrincipal::find_and_remove_if(__int64 a1, __int64 *a2)
{
  _QWORD *v3; // rbp
  __int64 v4; // r14
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  const char *v12; // r9
  __int64 v14; // rbx
  wil::details::in1diag3 *v15; // r9
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rdx
  __int64 *v20; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v26; // [rsp+50h] [rbp+8h] BYREF
  __int64 *v27; // [rsp+58h] [rbp+10h]
  __int64 v28; // [rsp+60h] [rbp+18h] BYREF

  v27 = a2;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 24LL))(a1 + 8);
  v4 = (__int64)(v3[8] - v3[7]) >> 3;
  v5 = 0LL;
  if ( (_DWORD)v4 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(v3[4] + 32LL);
      if ( *(int *)(v6 + 8) <= 0 )
        v7 = 0LL;
      else
        v7 = *(_QWORD *)(v6 + 16);
      v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
      CurrentThreadId = GetCurrentThreadId();
      if ( *(_DWORD *)(v8 + 168) != CurrentThreadId && *(_DWORD *)(v8 + 24) != CurrentThreadId )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x63D,
          (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
          v12);
        __debugbreak();
      }
      v14 = v3[7];
      v15 = retaddr;
      if ( (unsigned int)v5 >= (unsigned __int64)((v3[8] - v14) >> 3) )
        goto LABEL_25;
      v16 = *(_QWORD *)(v14 + 8 * v5);
      v28 = v16;
      if ( v16 )
        (**(void (__fastcall ***)(__int64, __int64, __int64, wil::details::in1diag3 *))v16)(v16, v10, v11, retaddr);
      v26 = v16;
      v17 = a2[7];
      if ( !v17 )
      {
        std::_Xbad_function_call();
LABEL_25:
        wil::details::in1diag3::_FailFast_Unexpected(
          v15,
          (void *)0x49,
          (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoList.inl",
          (const char *)v15);
        __debugbreak();
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *, __int64, wil::details::in1diag3 *))(*(_QWORD *)v17 + 16LL))(
             v17,
             &v26,
             v11,
             v15) )
      {
        break;
      }
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= (unsigned int)v4 )
        goto LABEL_27;
    }
    v18 = Microsoft::Bamo::ListPrincipalCommon<Microsoft::Bamo::Lib::ISMBamos_AutoBamos::BamoList_ActivatableEntityPrincipal_Principal,ISMBamos_AutoBamos::BamoConnection,wil::com_ptr_t<BamoActivatableEntityPrincipal,wil::err_returncode_policy>>::RemoveAt(
            v3,
            (unsigned int)v5);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x9C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
        (const char *)(unsigned int)v18,
        v24);
      __debugbreak();
    }
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v28);
    v20 = (__int64 *)a2[7];
    if ( v20 )
    {
      LOBYTE(v19) = v20 != a2;
      (*(void (__fastcall **)(__int64 *, __int64))(*v20 + 32))(v20, v19);
      a2[7] = 0LL;
    }
    return 0LL;
  }
  else
  {
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA0,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\foregroundmanager\\server\\activationwatcherbamoprincipal.cpp",
      (const char *)0x8000FFFFLL,
      v24);
    v22 = (__int64 *)a2[7];
    if ( v22 )
    {
      v23 = *v22;
      LOBYTE(v23) = v22 != a2;
      (*(void (__fastcall **)(__int64 *, __int64))(*v22 + 32))(v22, v23);
      a2[7] = 0LL;
    }
    return 2147549183LL;
  }
}
