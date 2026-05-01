/*
 * XREFs of ?Execute@AllUpViewUriHandler@@UEAAJXZ @ 0x18035F600
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180015DD0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x18035F7B8 (-ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     ?ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z @ 0x18035FB5C (-ShowAllUpView@AllUpViewUriHandler@@AEAAJW4ALL_UP_VIEW_FLAGS@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AllUpViewUriHandler::Execute(AllUpViewUriHandler *this)
{
  __int64 v1; // rbx
  unsigned int v2; // ebx
  int v3; // eax
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  AllUpViewUriHandler *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+10h]
  unsigned int v12; // [rsp+50h] [rbp+18h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+20h] BYREF
  __int64 v14; // [rsp+60h] [rbp+28h] BYREF
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+30h] BYREF

  v1 = *((_QWORD *)this + 3);
  if ( v1 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v1 + 64LL))(v1, 0LL, &v15);
    v2 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v3);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      return v2;
    }
    v14 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v4 = (**v15)(v15, &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93, &v14);
    v2 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x33,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
        (const char *)(unsigned int)v4);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_18;
    }
    pv = 0LL;
    v5 = v14;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v6 = (*(__int64 (__fastcall **)(__int64, __int64, LPVOID *))(*(_QWORD *)v5 + 40LL))(v5, 2147909632LL, &pv);
    v2 = v6;
    if ( v6 >= 0 )
    {
      v6 = AllUpViewUriHandler::ParseFlagsFromUriPath(v7, (const unsigned __int16 *)pv, (enum ALL_UP_VIEW_FLAGS *)&v12);
      v2 = v6;
      if ( v6 >= 0 )
      {
        v6 = AllUpViewUriHandler::ShowAllUpView(v9, v12);
        v2 = v6;
        if ( v6 >= 0 )
        {
          v2 = 0;
LABEL_15:
          if ( pv )
            CoTaskMemFree(pv);
          goto LABEL_17;
        }
        v8 = 58LL;
      }
      else
      {
        v8 = 57LL;
      }
    }
    else
    {
      v8 = 54LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  v2 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\allupviewurihandler.cpp",
    (const char *)0x8000FFFFLL);
  return v2;
}
