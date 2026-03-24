/*
 * XREFs of ?Join@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBG_N@Z @ 0x1800B32EC
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800B386C (--$CreateServer@VDataProviderRegistrarConnection@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMe.c)
 *     ??$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDiagnosticCallbacksManager@@@Z @ 0x1800B43FC (--$CreateServer@VDiagnosticCallbacksManager@@@BaseBamoConnection@Bamo@Microsoft@@SAJPEAUIMessage.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1800B2658 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1800B35D8 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800D7510 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800DE3A0 (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014E78C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016479C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::Join(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        _OWORD *a4,
        _WORD *a5)
{
  Microsoft::BamoImpl::BamoImplObject *v7; // rax
  Microsoft::BamoImpl::BamoImplObject *v8; // r15
  Microsoft::BamoImpl::BamoImplObject *v9; // rdi
  _WORD *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rsi
  wil::details *v15; // rbx
  int ConversationHost; // eax
  __int64 (__fastcall *v17)(__int64 *, wil::details *, _WORD *, __int64); // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  Microsoft::BamoImpl::BamoImplObject *v24; // rcx
  __int64 v25; // rsi
  void *v26; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // r9
  unsigned __int16 *v31; // [rsp+20h] [rbp-89h]
  int v32; // [rsp+68h] [rbp-41h]
  __int64 v33; // [rsp+70h] [rbp-39h] BYREF
  __int64 v34; // [rsp+78h] [rbp-31h]
  wil::details *v35; // [rsp+80h] [rbp-29h] BYREF
  _OWORD *v36; // [rsp+88h] [rbp-21h]
  unsigned __int16 v37[8]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v36 = a4;
  v34 = a3;
  v7 = (Microsoft::BamoImpl::BamoImplObject *)operator new(0x28uLL);
  v8 = v7;
  if ( v7 )
  {
    *((_DWORD *)v7 + 2) = 1;
    *(_QWORD *)v7 = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
    *((_QWORD *)v7 + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
    *((_QWORD *)v7 + 3) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationBouncer'};
    *((_QWORD *)v7 + 4) = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v9 = v8;
  if ( !v8 )
  {
    v12 = -2147024882;
    v28 = 259LL;
LABEL_39:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v28,
      (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
      (const char *)v12,
      (int)v31);
    goto LABEL_31;
  }
  *(_QWORD *)v37 = *(_QWORD *)L"_BAMO";
  *(_DWORD *)&v37[4] = *(_DWORD *)L"O";
  if ( a5 )
  {
    v10 = a5;
    v11 = 0x7FFFFFFFLL;
    do
    {
      if ( !*v10 )
        break;
      ++v10;
      --v11;
    }
    while ( v11 );
    v12 = v11 == 0 ? 0x80070057 : 0;
    if ( v11 )
      v13 = 0x7FFFFFFF - v11;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = v34;
    v12 = -2147024809;
  }
  if ( (v12 & 0x80000000) != 0 )
  {
    v28 = 277LL;
    goto LABEL_39;
  }
  v14 = v13 + 6;
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void wil::details::FreeProcessHeap(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &v35,
    a5,
    v13 + 6);
  v15 = v35;
  if ( v35 )
  {
    ConversationHost = StringCchCatW((unsigned __int16 *)v35, v14, (size_t *)v37);
    v12 = ConversationHost;
    if ( ConversationHost < 0 )
    {
      v29 = 283LL;
    }
    else
    {
      v17 = *(__int64 (__fastcall **)(__int64 *, wil::details *, _WORD *, __int64))(*a2 + 280);
      v31 = v37;
      *(_OWORD *)v37 = *v36;
      ConversationHost = v17(a2, v15, a5, v34);
      v12 = ConversationHost;
      if ( ConversationHost < 0 )
      {
        v29 = 302LL;
      }
      else
      {
        v18 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 72) = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = *(_QWORD *)(a1 + 64);
        *(_QWORD *)(a1 + 64) = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        ConversationHost = CoreUICallCreateConversationHost(a2, 0LL, a1 + 64, a1 + 72);
        v12 = ConversationHost;
        if ( ConversationHost >= 0 )
        {
          v20 = *a2;
          v33 = 0LL;
          v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v20 + 40))(a2, &v33);
          if ( v21 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x14C,
              (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
              (const char *)(unsigned int)v21,
              (int)v37);
            __debugbreak();
          }
          v22 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 80LL))(v33, a1 + 24);
          if ( v22 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x14E,
              (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
              (const char *)(unsigned int)v22,
              (int)v37);
            __debugbreak();
          }
          *(_DWORD *)(a1 + 28) = v32;
          v23 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 56) = 0LL;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
          v24 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 88);
          v9 = 0LL;
          *(_QWORD *)(a1 + 88) = v8;
          if ( v24 )
          {
            Microsoft::BamoImpl::BamoImplObject::Release(v24);
            v8 = *(Microsoft::BamoImpl::BamoImplObject **)(a1 + 88);
          }
          *((_QWORD *)v8 + 4) = a1;
          v25 = *(_QWORD *)(a1 + 48);
          *(_QWORD *)(a1 + 48) = a2;
          (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
          if ( v25 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          v12 = 0;
          if ( v33 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
          goto LABEL_29;
        }
        v29 = 323LL;
      }
    }
    v30 = (unsigned int)ConversationHost;
  }
  else
  {
    v12 = -2147024882;
    v29 = 281LL;
    v30 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoConnection.inl",
    (const char *)v30,
    (int)v31);
LABEL_29:
  if ( v15 )
    wil::details::FreeProcessHeap(v15, v26);
LABEL_31:
  if ( v9 )
    Microsoft::BamoImpl::BamoImplObject::Release(v9);
  return v12;
}
