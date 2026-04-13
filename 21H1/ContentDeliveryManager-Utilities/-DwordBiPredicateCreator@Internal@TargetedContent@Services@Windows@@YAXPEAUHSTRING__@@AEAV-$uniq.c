/*
 * XREFs of ?DwordBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x18006F9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180068CAC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18006ED10 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?stoi@std@@YAHAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@1@PEA_KH@Z @ 0x18006ED4C (-stoi@std@@YAHAEBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@1@PEA_KH@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Services::TargetedContent::Internal::DwordBiPredicateCreator(
        HSTRING a1,
        void **a2,
        _DWORD *a3)
{
  char *StringRawBuffer; // rax
  unsigned __int64 v6; // r8
  wchar_t *v7; // rdx
  int v8; // ebx
  _DWORD *v9; // rax
  __int64 v10; // r8
  const char *v11; // r9
  _DWORD *v12; // rdi
  void *v13; // rsi
  DWORD LastError; // ebx
  wchar_t String[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+40h] [rbp-48h]
  unsigned __int64 v17; // [rsp+48h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  *a3 = 0;
  StringRawBuffer = (char *)WindowsGetStringRawBuffer(a1, 0LL);
  v17 = 7LL;
  v16 = 0LL;
  String[0] = 0;
  if ( *(_WORD *)StringRawBuffer )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)&StringRawBuffer[2 * v6] );
  }
  else
  {
    v6 = 0LL;
  }
  std::wstring::assign((void **)String, StringRawBuffer, v6);
  v8 = std::stoi(String, v7);
  if ( v17 >= 8 )
    operator delete(*(void **)String);
  v9 = CoTaskMemAlloc(4uLL);
  v12 = v9;
  if ( !v9 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x102, v10, v11);
    JUMPOUT(0x18006FAF6LL);
  }
  *v9 = v8;
  *a3 = 4;
  v13 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v13);
    SetLastError(LastError);
  }
  *a2 = v12;
}
