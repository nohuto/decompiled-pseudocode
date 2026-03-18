/*
 * XREFs of ?CleanTreeAndLockForRead@CDesktopTree@@QEAAJXZ @ 0x18005B970
 * Callers:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001D4A8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x18005AF50 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180029FC8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180051D10 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$integr.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z @ 0x1800DA88C (-EnqueueOffThreadPreComputeRequest@CComposition@@QEAAJPEAVCVisualTree@@PEAXPEAJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18014C964 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18014CE4C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CDesktopTree::CleanTreeAndLockForRead(CDesktopTree *this)
{
  int LastErrorFailHr; // edi
  HANDLE v4; // rbx
  wil::details *v5; // rcx
  wil::details *Event; // rdi
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  DWORD v10; // eax
  unsigned int v11; // ecx
  const char *v12; // r9
  void *v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v15; // [rsp+50h] [rbp+8h] BYREF
  HANDLE hHandle; // [rsp+58h] [rbp+10h] BYREF

  LastErrorFailHr = 0;
  AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 520LL));
  while ( *(_BYTE *)(*((_QWORD *)this + 7) + 88LL) )
  {
    v15 = 0;
    v4 = 0LL;
    hHandle = 0LL;
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)&hHandle,
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
      v8 = CComposition::EnqueueOffThreadPreComputeRequest(*((CComposition **)this + 2), this, v4, &v15);
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
        LastErrorFailHr = v15;
        if ( v15 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v15, 0x95u, 0LL);
        AcquireSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 520LL));
      }
    }
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>(
      (wil::details **)&hHandle,
      v13);
    if ( LastErrorFailHr < 0 )
    {
      ReleaseSRWLockShared((PSRWLOCK)(*((_QWORD *)this + 2) + 520LL));
      return (unsigned int)LastErrorFailHr;
    }
  }
  return (unsigned int)LastErrorFailHr;
}
