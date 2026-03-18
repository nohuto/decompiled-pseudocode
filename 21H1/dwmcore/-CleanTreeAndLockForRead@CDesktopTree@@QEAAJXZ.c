/*
 * XREFs of ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x180035590
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001E3A8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180034B70 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180088B50 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008C32C (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800D2D6C (-EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180150424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1801508CC (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CDesktopTree::CleanTreeAndLockForRead(CDesktopTree *this)
{
  int LastErrorFailHr; // edi
  HANDLE v4; // rbx
  wil::details *v5; // rcx
  HANDLE Event; // rdi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  DWORD v10; // eax
  __int64 v11; // rcx
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v14; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hHandle; // [rsp+58h] [rbp+10h] BYREF

  LastErrorFailHr = 0;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 520LL));
  while ( *(_BYTE *)(*((_QWORD *)this + 7) + 88LL) )
  {
    v14 = 0;
    v4 = 0LL;
    hHandle = 0LL;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        &hHandle,
        Event);
      v4 = hHandle;
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
    }
    if ( LastErrorFailHr < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, LastErrorFailHr, 0x87u, 0LL);
    }
    else
    {
      v8 = CComposition::EnqueueOffThreadPreComputeRequest(*((CComposition **)this + 2), this, v4, &v14);
      LastErrorFailHr = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x8Eu, 0LL);
      }
      else
      {
        ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 520LL));
        v10 = WaitForSingleObjectEx(v4, 0xFFFFFFFF, 0);
        if ( v10 != 258 && v10 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0xA09,
            (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
            v12);
          __debugbreak();
        }
        LastErrorFailHr = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v14, 0x95u, 0LL);
        AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 520LL));
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(&hHandle);
    if ( LastErrorFailHr < 0 )
    {
      ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 520LL));
      return (unsigned int)LastErrorFailHr;
    }
  }
  return (unsigned int)LastErrorFailHr;
}
