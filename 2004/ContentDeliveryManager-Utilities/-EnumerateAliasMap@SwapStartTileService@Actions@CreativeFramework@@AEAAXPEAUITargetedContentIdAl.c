/*
 * XREFs of ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180088200
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180088628 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??R_lambda_84d899b7d93de90bfed2062708934b25_@@QEBA_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800888E4 (--R_lambda_84d899b7d93de90bfed2062708934b25_@@QEBA_NPEB_WPEAUITargetedContentIdAliasValue@Intern.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800B05D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
char __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD *); // rdi
  _QWORD *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, HSTRING *); // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  HSTRING string; // [rsp+20h] [rbp-88h] BYREF
  __int64 v31; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v33; // [rsp+40h] [rbp-68h] BYREF
  int v34; // [rsp+48h] [rbp-60h]
  _QWORD v35[2]; // [rsp+50h] [rbp-58h] BYREF
  int v36; // [rsp+60h] [rbp-48h]
  __int64 v37; // [rsp+68h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v39; // [rsp+B0h] [rbp+8h] BYREF
  char v40; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v41; // [rsp+C0h] [rbp+18h]
  __int64 v42; // [rsp+C8h] [rbp+20h] BYREF

  v41 = a3;
  v39 = a1;
  v32[1] = -2LL;
  v4 = *a2;
  v31 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 72))(a2, &v31);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v31)(
         v31,
         &GUID_c86cab97_c160_561a_9b32_542f9e2e4911,
         v32);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v33 = 0LL;
  v35[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v32[0] + 48LL))(v32[0], &v33);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_35;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 56LL))(v33, &v39);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x1577,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v15);
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v19);
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x114,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v22);
LABEL_40:
    std::_Xbad_function_call();
  }
  LOBYTE(v10) = -(char)v39;
  v11 = ((_BYTE)v39 != 0) - 1;
  v34 = v11;
  v35[1] = 0LL;
  v36 = -1;
  v37 = 0LL;
  while ( v11 != -1 )
  {
    v12 = v33;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v33 + 48LL);
    v14 = (_QWORD *)v35[0];
    if ( v35[0] )
    {
      v35[0] = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 16LL))(v14, *v14);
    }
    v15 = v13(v12, v35);
    v16 = retaddr;
    if ( v15 < 0 )
      goto LABEL_37;
    string = 0LL;
    v17 = v35[0];
    v18 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35[0] + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v19 = v18(v17, &string);
    v20 = retaddr;
    if ( v19 < 0 )
      goto LABEL_38;
    v42 = 0LL;
    v21 = *(_QWORD *)v35[0];
    v42 = 0LL;
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(v21 + 56))(v35[0], &v42);
    v23 = retaddr;
    if ( v22 < 0 )
      goto LABEL_39;
    v24 = v42;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v26 = *(_QWORD *)(a3 + 24);
    if ( !v26 )
      goto LABEL_40;
    if ( !(unsigned __int8)_lambda_84d899b7d93de90bfed2062708934b25_::operator()(v26 + 8, StringRawBuffer, v24) )
    {
      if ( v42 )
        (*(void (**)(void))(*(_QWORD *)v42 + 16LL))();
      LOBYTE(v10) = WindowsDeleteString(string);
      break;
    }
    if ( v42 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    WindowsDeleteString(string);
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 64LL))(v33, &v40);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1577,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x18008861ELL);
    }
    if ( v40 )
      v11 = v34 + 1;
    else
      v11 = -1;
    v34 = v11;
  }
  v27 = v35[0];
  if ( v35[0] )
  {
    v35[0] = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  v28 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v32[0] )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v32[0] + 16LL))(v32[0]);
  if ( v31 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return v10;
}
