/*
 * XREFs of ?InitializeNotificationTemplate@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009C4C0
 * Callers:
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180092ECC (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18004A000 (-Throw_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18006ACE4 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006AEBC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??$?8_WU?$char_traits@_W@std@@V?$allocator@_W@1@@std@@YA_NAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@0@PEB_W@Z @ 0x18008EA60 (--$-8_WU-$char_traits@_W@std@@V-$allocator@_W@1@@std@@YA_NAEBV-$basic_string@_WU-$char_traits@_W.c)
 *     ?find@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@2@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180093B14 (-find@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator_ea_180093B14.c)
 *     ??A?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@$$QEAV21@@Z @ 0x18009E374 (--A-$map@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@U-$less@V-$basic_s.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::InitializeNotificationTemplate(void **this)
{
  unsigned __int64 v2; // rbx
  void **v3; // rax
  wil::details::in1diag3 *v4; // r10
  void **v5; // rax
  __int64 v6; // rdi
  _WORD **v7; // r11
  int *v8; // r11
  const char *v9; // rdx
  int v10; // eax
  void **v11; // rax
  char *v12; // rdx
  _QWORD v13[2]; // [rsp+48h] [rbp-39h] BYREF
  void *v14[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v15; // [rsp+68h] [rbp-19h]
  unsigned __int64 v16; // [rsp+70h] [rbp-11h]
  void *v17[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v18; // [rsp+88h] [rbp+7h]
  unsigned __int64 v19; // [rsp+90h] [rbp+Fh]
  char *v20[3]; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int64 v21; // [rsp+B0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v13[1] = -2LL;
  v16 = 7LL;
  v2 = 0LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  std::wstring::assign(v14, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v3 = (void **)std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                  this + 4,
                  v13,
                  v14);
  v4 = retaddr;
  if ( *v3 == this[4] )
    goto LABEL_28;
  if ( v16 >= 8 )
    operator delete(v14[0]);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  std::wstring::assign(v14, (char *)L"templateType", aTemplatetype[0] != 0 ? 0xC : 0);
  v5 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v14);
  v21 = 7LL;
  v20[2] = 0LL;
  LOWORD(v20[0]) = 0;
  v6 = -1LL;
  std::wstring::assign((void **)v20, v5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  if ( v16 >= 8 )
    operator delete(v14[0]);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  v7 = (_WORD **)&unk_1801979B0;
  while ( !std::operator==<wchar_t>(v20, v7[1]) )
  {
    v7 = (_WORD **)(v8 + 6);
    if ( v7 == (_WORD **)&std::invalid_argument `RTTI Type Descriptor' )
    {
      v9 = (const char *)v20;
      if ( v21 >= 8 )
        v9 = v20[0];
      wil::details::in1diag3::Throw_HrIfMsg(
        retaddr,
        (void *)0xCE,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
        (const char *)0x80070057LL,
        this[2] == 0LL,
        (__int64)"%ls",
        v9);
      goto LABEL_24;
    }
  }
  v10 = *v8;
  *((_DWORD *)this + 12) = *v8;
  if ( v10 == 6 )
  {
    v19 = 7LL;
    v18 = 0LL;
    LOWORD(v17[0]) = 0;
    std::wstring::assign(v17, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
    if ( (void *)*std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::find(
                    this + 4,
                    v13,
                    v17) != this[4] )
    {
      if ( v19 >= 8 )
        operator delete(v17[0]);
      v19 = 7LL;
      v18 = 0LL;
      LOWORD(v17[0]) = 0;
      std::wstring::assign(v17, (char *)L"customSchema", aCustomschema[0] != 0 ? 0xC : 0);
      v11 = (void **)std::map<std::wstring,std::wstring>::operator[](this + 4, v17);
      if ( this != v11 )
        std::wstring::assign(this, v11, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( v19 >= 8 )
        operator delete(v17[0]);
      goto LABEL_24;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070057LL);
    JUMPOUT(0x18009C7D0LL);
  }
  v12 = (char *)*((_QWORD *)v8 + 2);
  if ( *(_WORD *)v12 )
  {
    do
      ++v6;
    while ( *(_WORD *)&v12[2 * v6] );
    v2 = v6;
  }
  std::wstring::assign(this, v12, v2);
LABEL_24:
  if ( v21 >= 8 )
    operator delete(v20[0]);
}
