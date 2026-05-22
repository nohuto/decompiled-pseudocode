/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x180031AA0
 * Callers:
 *     ??$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVInputSystemServerConnection@@@Z @ 0x1800316C0 (--$CreateServer@VInputSystemServerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ??$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVAnimationDataProviderConnection@@@Z @ 0x180031888 (--$CreateClient@VAnimationDataProviderConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVMPCManagerConnection@@@Z @ 0x180032318 (--$CreateServer@VMPCManagerConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSessio.c)
 *     ??$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@UMsgScopeID@@PEBGPEAPEAVMPCManagerClientConnection@@@Z @ 0x180105DE4 (--$CreateClient@VMPCManagerClientConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000DA10 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180031DFC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800321F0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x18003A130 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x18003C7B8 (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        _WORD *a5,
        char a6)
{
  wil::details *v8; // r13
  Microsoft::BamoImpl::BamoImplObject *v9; // rdi
  __int64 v10; // rcx
  _WORD *v11; // rdx
  int v12; // esi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  wil::details *v15; // rbx
  int ConversationHost; // eax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *, wil::details *, _WORD *, __int64); // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  const char *v26; // r9
  __int64 v27; // rcx
  Microsoft::BamoImpl::BamoImplObject *v28; // rcx
  __int64 v29; // rsi
  void *v30; // rdx
  __int64 v31; // r8
  const char *v32; // r9
  __int64 (__fastcall *v34)(__int64 *, wil::details *, unsigned __int16 *, char *); // rsi
  __int64 v35; // r9
  __int64 v36; // rdx
  unsigned __int16 *v37; // [rsp+20h] [rbp-99h]
  int v38; // [rsp+68h] [rbp-51h] BYREF
  __int64 v39; // [rsp+70h] [rbp-49h] BYREF
  _OWORD *v40; // [rsp+78h] [rbp-41h]
  wil::details *v41; // [rsp+80h] [rbp-39h]
  wil::details *v42; // [rsp+88h] [rbp-31h] BYREF
  __int64 v43; // [rsp+90h] [rbp-29h]
  unsigned __int16 v44[8]; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  v40 = a4;
  v43 = a3;
  v8 = (wil::details *)operator new(0x28uLL);
  v42 = v8;
  *((_DWORD *)v8 + 2) = 1;
  *(_QWORD *)v8 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)v8 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  *((_QWORD *)v8 + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
  *((_QWORD *)v8 + 4) = 0LL;
  v9 = v8;
  v41 = v8;
  *(_QWORD *)v44 = *(_QWORD *)L"_BAMO";
  *(_DWORD *)&v44[4] = *(_DWORD *)L"O";
  if ( a5 )
  {
    v10 = 0x7FFFFFFFLL;
    v11 = a5;
    v12 = 0;
    do
    {
      if ( !*v11 )
        break;
      ++v11;
      --v10;
    }
    while ( v10 );
    if ( v10 )
    {
      v13 = 0x7FFFFFFF - v10;
      goto LABEL_7;
    }
    v13 = 0LL;
  }
  else
  {
    v13 = v43;
  }
  v12 = -2147024809;
LABEL_7:
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)(unsigned int)v12,
      (int)v37);
    goto LABEL_29;
  }
  v14 = v13 + 6;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v42,
    a5,
    v13 + 6);
  v15 = v42;
  if ( v42 )
  {
    ConversationHost = StringCchCatW((unsigned __int16 *)v42, v14, v44);
    v12 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v36 = 283LL;
    }
    else
    {
      v17 = *a2;
      if ( a6 )
      {
        v18 = *(__int64 (__fastcall **)(__int64 *, wil::details *, _WORD *, __int64))(v17 + 280);
        *(_OWORD *)v44 = *v40;
        v37 = v44;
        ConversationHost = v18(a2, v15, a5, v43);
        v12 = ConversationHost;
        if ( ConversationHost >= 0 )
        {
LABEL_12:
          v19 = *(_QWORD *)(a1 + 72);
          *(_QWORD *)(a1 + 72) = 0LL;
          if ( v19 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v20 = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 64) = 0LL;
          if ( v20 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
          ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 64, a1 + 72);
          v12 = ConversationHost;
          if ( ConversationHost >= 0 )
          {
            v21 = *a2;
            v39 = 0LL;
            v22 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v21 + 40))(a2, &v39);
            if ( v22 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x14C,
                (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
                (const char *)(unsigned int)v22,
                (int)v37);
              __debugbreak();
            }
            v23 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v39 + 80LL))(v39, a1 + 24);
            if ( v23 < 0 )
            {
              wil::details::in1diag3::FailFast_Hr(
                retaddr,
                (void *)0x14E,
                (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
                (const char *)(unsigned int)v23,
                (int)v37);
              __debugbreak();
            }
            *(_DWORD *)(a1 + 28) = v38;
            v27 = *(_QWORD *)(a1 + 56);
            *(_QWORD *)(a1 + 56) = 0LL;
            if ( v27 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
            v9 = 0LL;
            v41 = 0LL;
            v28 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 88);
            *(_QWORD *)(a1 + 88) = v8;
            if ( v28 )
              Microsoft::BamoImpl::BamoImplObject::Release(v28, v24, v25, v26);
            *(_QWORD *)(*(_QWORD *)(a1 + 88) + 32LL) = a1;
            v29 = *(_QWORD *)(a1 + 48);
            *(_QWORD *)(a1 + 48) = a2;
            (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
            if ( v29 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
            v12 = 0;
            if ( v39 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
            goto LABEL_27;
          }
          v36 = 323LL;
          goto LABEL_42;
        }
        v36 = 302LL;
      }
      else
      {
        v34 = *(__int64 (__fastcall **)(__int64 *, wil::details *, unsigned __int16 *, char *))(v17 + 296);
        *(_OWORD *)v44 = *v40;
        v37 = (unsigned __int16 *)&v38;
        ConversationHost = v34(a2, v15, v44, (char *)v8 + 16);
        v12 = ConversationHost;
        if ( ConversationHost >= 0 )
          goto LABEL_12;
        v36 = 311LL;
      }
    }
LABEL_42:
    v35 = (unsigned int)ConversationHost;
    goto LABEL_43;
  }
  v12 = -2147024882;
  v35 = 2147942414LL;
  v36 = 281LL;
LABEL_43:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v36,
    (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
    (const char *)v35,
    (int)v37);
LABEL_27:
  if ( v15 )
    wil::details::FreeProcessHeap(v15, v30);
LABEL_29:
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9, (__int64)v30, v31, v32);
  return (unsigned int)v12;
}
