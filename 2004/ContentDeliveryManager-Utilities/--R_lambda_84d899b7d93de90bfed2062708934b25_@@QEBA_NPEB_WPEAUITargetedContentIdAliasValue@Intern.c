/*
 * XREFs of ??R_lambda_84d899b7d93de90bfed2062708934b25_@@QEBA_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x1800888E4
 * Callers:
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180088200 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_84d899b7d93de90bfed2062708934b25_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@std@@U67@U67@U67@U67@@std@@@2@_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@U_Nil@2@U92@U92@U92@U92@@std@@UEAA_N$$QEAPEB_W$$QEAPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z @ 0x18008CB10 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_84d899b7d93de90bfed2062708934b25_@@$0A@@std@@V-.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B30C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180088C60 (-CreateTargetedContentTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$co.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall _lambda_84d899b7d93de90bfed2062708934b25_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rbx
  int v9; // eax
  char *StringRawBuffer; // rax
  unsigned __int64 v11; // r8
  char v12; // bl
  char v13; // r14
  _QWORD *v14; // rax
  void **v15; // rdx
  unsigned __int64 v16; // r11
  unsigned __int64 v17; // rcx
  bool i; // zf
  __int64 v19; // rcx
  int v20; // eax
  char *v21; // rax
  unsigned __int64 v22; // r8
  _QWORD *v23; // rax
  void **v24; // rdx
  void *v25; // rsi
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // rcx
  bool j; // zf
  int v30; // eax
  char v31; // di
  _QWORD *v32; // r8
  __int64 *TargetedContentTileIdentifier; // rax
  __int64 *v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  HSTRING string; // [rsp+28h] [rbp-49h] BYREF
  HSTRING v39; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v40[2]; // [rsp+38h] [rbp-39h] BYREF
  void *v41[2]; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int64 v42; // [rsp+58h] [rbp-19h]
  unsigned __int64 v43; // [rsp+60h] [rbp-11h]
  void *v44[2]; // [rsp+68h] [rbp-9h] BYREF
  unsigned __int64 v45; // [rsp+78h] [rbp+7h]
  unsigned __int64 v46; // [rsp+80h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v40[1] = -2LL;
  LODWORD(v40[0]) = 0;
  v39 = 0LL;
  string = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 56LL);
  WindowsDeleteString(0LL);
  v39 = 0LL;
  v7 = v6(a3, &v39);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x141,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7);
    JUMPOUT(0x180088C56LL);
  }
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a3 + 64LL);
  WindowsDeleteString(string);
  string = 0LL;
  v9 = v8(a3, &string);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(v39, 0LL);
  v46 = 7LL;
  v45 = 0LL;
  LOWORD(v44[0]) = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)&StringRawBuffer[2 * v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign(v44, StringRawBuffer, v11);
  v12 = 1;
  v13 = 1;
  LODWORD(v40[0]) = 1;
  v14 = (_QWORD *)(*a1 + 232LL);
  v15 = v44;
  if ( v46 >= 8 )
    v15 = (void **)v44[0];
  v16 = *(_QWORD *)(*a1 + 248LL);
  if ( *(_QWORD *)(*a1 + 256LL) >= 8uLL )
    v14 = (_QWORD *)*v14;
  v17 = v45;
  if ( v16 < v45 )
    v17 = *(_QWORD *)(*a1 + 248LL);
  for ( i = v17 == 0; ; i = v17 == 0 )
  {
    if ( i )
    {
      v19 = 0LL;
      goto LABEL_18;
    }
    if ( *(_WORD *)v14 != *(_WORD *)v15 )
      break;
    v14 = (_QWORD *)((char *)v14 + 2);
    v15 = (void **)((char *)v15 + 2);
    --v17;
  }
  v19 = *(_WORD *)v14 < *(_WORD *)v15 ? -1 : 1;
LABEL_18:
  v20 = v16 != v45;
  if ( v16 < v45 )
    v20 = -1;
  if ( (_DWORD)v19 )
    v20 = v19;
  if ( v20 )
  {
    v26 = v43;
    v25 = v41[0];
  }
  else
  {
    v21 = (char *)WindowsGetStringRawBuffer(string, 0LL);
    v43 = 7LL;
    v42 = 0LL;
    LOWORD(v41[0]) = 0;
    if ( *(_WORD *)v21 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_WORD *)&v21[2 * v22] );
    }
    else
    {
      v22 = 0LL;
    }
    std::wstring::assign(v41, v21, v22);
    v13 = 3;
    v23 = (_QWORD *)(*a1 + 200LL);
    v24 = v41;
    v25 = v41[0];
    v26 = v43;
    if ( v43 >= 8 )
      v24 = (void **)v41[0];
    v27 = *(_QWORD *)(*a1 + 216LL);
    if ( *(_QWORD *)(*a1 + 224LL) >= 8uLL )
      v23 = (_QWORD *)*v23;
    v28 = v42;
    if ( v27 < v42 )
      v28 = *(_QWORD *)(*a1 + 216LL);
    for ( j = v28 == 0; ; j = v28 == 0 )
    {
      if ( j )
      {
        v19 = 0LL;
        goto LABEL_39;
      }
      if ( *(_WORD *)v23 != *(_WORD *)v24 )
        break;
      v23 = (_QWORD *)((char *)v23 + 2);
      v24 = (void **)((char *)v24 + 2);
      --v28;
    }
    v19 = *(_WORD *)v23 < *(_WORD *)v24 ? -1 : 1;
LABEL_39:
    v30 = v27 != v42;
    if ( v27 < v42 )
      v30 = -1;
    if ( (_DWORD)v19 )
      v30 = v19;
    if ( !v30 )
    {
      v31 = 1;
      goto LABEL_48;
    }
  }
  v31 = 0;
LABEL_48:
  if ( (v13 & 2) != 0 )
  {
    if ( v26 >= 8 )
      operator delete(v25);
    v43 = 7LL;
    v42 = 0LL;
    LOWORD(v41[0]) = 0;
  }
  if ( v46 >= 8 )
    operator delete(v44[0]);
  if ( v31 )
  {
    v32 = (_QWORD *)(*a1 + 168LL);
    if ( *(_QWORD *)(*a1 + 192LL) >= 8uLL )
      v32 = (_QWORD *)*v32;
    TargetedContentTileIdentifier = (__int64 *)CreativeFramework::Actions::SwapStartTileService::CreateTargetedContentTileIdentifier(
                                                 v19,
                                                 v40,
                                                 v32,
                                                 a2);
    v34 = (__int64 *)a1[1];
    v35 = *TargetedContentTileIdentifier;
    *TargetedContentTileIdentifier = 0LL;
    v36 = *v34;
    *v34 = v35;
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    if ( v40[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v40[0] + 16LL))(v40[0]);
    v12 = 0;
  }
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v39);
  return v12;
}
