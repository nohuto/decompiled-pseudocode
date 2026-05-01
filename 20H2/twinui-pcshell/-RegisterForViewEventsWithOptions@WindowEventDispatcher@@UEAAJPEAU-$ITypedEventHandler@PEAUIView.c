/*
 * XREFs of ?RegisterForViewEventsWithOptions@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1W4ViewEventRegistrationFlags@ViewManagerInterop@Desktop@Shell@Internal@4@PEAUEventRegistrationToken@@@Z @ 0x1802B7650
 * Callers:
 *     ?RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@2345@@Foundation@Windows@@PEAUHSTRING__@@1PEAUEventRegistrationToken@@@Z @ 0x1802B75C0 (-RegisterForViewEvents@WindowEventDispatcher@@UEAAJPEAU-$ITypedEventHandler@PEAUIViewWrapper@Vie.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18007460C (-Initialize@String@Internal@Windows@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180092228 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800938C0 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UViewEventRegistration@@@std@@@?$vector@V?$shared_ptr@UViewEventRegistration@@@std@@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UViewEventRegistration@@@1@QEAV21@AEBV21@@Z @ 0x18021DAAC (--$_Emplace_reallocate@AEBV-$shared_ptr@UViewEventRegistration@@@std@@@-$vector@V-$shared_ptr@UV.c)
 *     ??$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG0@Z @ 0x1802AF98C (--$WindowEventDispatcher_RegisterForViewEventsWithOptions@PEBGPEBG@ViewManagerInteropTraceLoggin.c)
 */

// Hidden C++ exception states: #wind=2
__int64 WindowEventDispatcher::RegisterForViewEventsWithOptions(__int64 a1, __int64 a2, ...)
{
  const char *v4; // r9
  std::_Ref_count_base *v5; // r15
  char *v6; // r12
  int v7; // eax
  int v8; // eax
  __int64 v9; // rax
  int AgileReference; // ebx
  RTL_SRWLOCK *v11; // rbx
  HSTRING **v12; // r13
  PCWSTR v13; // rax
  UINT32 StringLen; // r14d
  const WCHAR *StringRawBuffer; // rsi
  UINT32 v16; // edi
  const WCHAR *v17; // rax
  HSTRING *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rdx
  HSTRING v21; // r14
  HSTRING v22; // rdi
  const char *v23; // r9
  __int64 v24; // rax
  INT32 result; // [rsp+30h] [rbp-88h] BYREF
  __int64 v26; // [rsp+38h] [rbp-80h] BYREF
  HSTRING v27; // [rsp+40h] [rbp-78h] BYREF
  PCWSTR v28; // [rsp+48h] [rbp-70h] BYREF
  char *v29; // [rsp+50h] [rbp-68h] BYREF
  std::_Ref_count_base *v30; // [rsp+58h] [rbp-60h]
  HSTRING v31; // [rsp+60h] [rbp-58h]
  __int64 v32; // [rsp+68h] [rbp-50h]
  __int64 v33; // [rsp+70h] [rbp-48h] BYREF
  PSRWLOCK SRWLock; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  HSTRING v37; // [rsp+D0h] [rbp+18h] BYREF
  va_list va; // [rsp+D0h] [rbp+18h]
  HSTRING string; // [rsp+D8h] [rbp+20h] BYREF
  va_list stringa; // [rsp+D8h] [rbp+20h]
  __int64 v41; // [rsp+E0h] [rbp+28h]
  _QWORD *v42; // [rsp+E8h] [rbp+30h]
  va_list va2; // [rsp+F0h] [rbp+38h] BYREF

  va_start(va2, a2);
  va_start(stringa, a2);
  va_start(va, a2);
  v37 = va_arg(stringa, HSTRING);
  va_copy(va2, stringa);
  string = va_arg(va2, HSTRING);
  v41 = va_arg(va2, _QWORD);
  v42 = va_arg(va2, _QWORD *);
  v31 = string;
  v27 = v37;
  try
  {
    v5 = (std::_Ref_count_base *)operator new(0x38uLL);
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<ViewEventRegistration>::`vftable';
    v6 = (char *)v5 + 16;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    *((_QWORD *)v5 + 6) = 0LL;
    *((_QWORD *)v5 + 2) = 0LL;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 5) = 0LL;
    v29 = (char *)v5 + 16;
    v30 = v5;
    if ( v5 == (std::_Ref_count_base *)-16LL )
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        1846LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        v4);
    v7 = Windows::Internal::String::Initialize((HSTRING *)v5 + 2, (HSTRING *)va);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1847LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v7);
    v8 = Windows::Internal::String::Initialize((HSTRING *)v5 + 3, (HSTRING *)stringa);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1848LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8);
    *((_DWORD *)v5 + 8) = v41;
    v9 = 0LL;
    v26 = 0LL;
    AgileReference = 0;
    if ( a2 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
      AgileReference = RoGetAgileReference(0LL, &GUID_d599c413_e76f_5f6a_9087_21e6cb563ed9, a2, &v26);
      v9 = v26;
    }
    v26 = 0LL;
    v33 = *((_QWORD *)v5 + 5);
    *((_QWORD *)v5 + 5) = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
    if ( AgileReference < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1850LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)AgileReference);
    v32 = a1 + 448;
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 448));
    v11 = (RTL_SRWLOCK *)(a1 + 448);
    SRWLock = (PSRWLOCK)(a1 + 448);
    v12 = *(HSTRING ***)(a1 + 400);
    v13 = *(PCWSTR *)(a1 + 408);
    v28 = v13;
    while ( v12 != (HSTRING **)v13 )
    {
      StringLen = WindowsGetStringLen(*(HSTRING *)v6);
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)v6, 0LL);
      v16 = WindowsGetStringLen(**v12);
      v17 = WindowsGetStringRawBuffer(**v12, 0LL);
      if ( CompareStringOrdinal(v17, v16, StringRawBuffer, StringLen, 1) == 2 )
      {
        if ( WindowsIsStringEmpty((*v12)[1])
          || WindowsIsStringEmpty(*((HSTRING *)v5 + 3))
          || (v18 = *v12, result = 0, WindowsCompareStringOrdinal(v18[1], *((HSTRING *)v5 + 3), &result), !result) )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            1879LL,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
            (const char *)0x80070057LL);
        }
      }
      v12 += 2;
      v13 = v28;
    }
    v19 = *(_QWORD *)(a1 + 392);
    *(_QWORD *)(a1 + 392) = v19 + 1;
    *((_QWORD *)v5 + 6) = v19;
    v20 = *(_QWORD **)(a1 + 408);
    if ( *(_QWORD **)(a1 + 416) == v20 )
    {
      std::vector<std::shared_ptr<ViewEventRegistration>>::_Emplace_reallocate<std::shared_ptr<ViewEventRegistration> const &>(
        (__int64 *)(a1 + 400),
        (__int64)v20,
        &v29);
      v5 = v30;
      v6 = v29;
      v21 = v31;
      v22 = v27;
    }
    else
    {
      *v20 = 0LL;
      v20[1] = 0LL;
      if ( v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
        v21 = string;
        v22 = v37;
        v5 = v30;
        v6 = v29;
        v11 = SRWLock;
      }
      else
      {
        v21 = v31;
        v22 = v27;
      }
      *v20 = v6;
      v20[1] = v5;
      *(_QWORD *)(a1 + 408) += 16LL;
    }
    *v42 = *((_QWORD *)v6 + 4);
    v28 = WindowsGetStringRawBuffer(v21, 0LL);
    v27 = (HSTRING)WindowsGetStringRawBuffer(v22, 0LL);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_RegisterForViewEventsWithOptions<unsigned short const *,unsigned short const *>(
      (__int64 *)&v27,
      (__int64 *)&v28);
    if ( v32 )
      ReleaseSRWLockExclusive(v11);
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    v24 = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x765,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v23);
  }
  return v24;
}
