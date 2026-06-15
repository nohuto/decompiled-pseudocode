/*
 * XREFs of ?GetUserSid@CWindowsPolicyManager@@UEAAJKPEAPEAG@Z @ 0x180008690
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18002880C (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18002B8A0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

__int64 __fastcall CWindowsPolicyManager::GetUserSid(
        CWindowsPolicyManager *this,
        unsigned int a2,
        struct TSSession **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct TSSession *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  *a3 = 0LL;
  EnterCriticalSection(&CriticalSection);
  if ( !(unsigned int)TsSessionFromSessionId(a2, 1, 0LL, &v9) )
  {
    v6 = *((_QWORD *)v9 + 42);
    if ( !v6 )
    {
      LeaveCriticalSection(&CriticalSection);
      return (unsigned int)-2147467259;
    }
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &v9,
      v6,
      -1LL);
    if ( v9 )
    {
      *a3 = v9;
    }
    else
    {
      v3 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3C2,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
        (const char *)0x8007000ELL);
    }
  }
  LeaveCriticalSection(&CriticalSection);
  return v3;
}
