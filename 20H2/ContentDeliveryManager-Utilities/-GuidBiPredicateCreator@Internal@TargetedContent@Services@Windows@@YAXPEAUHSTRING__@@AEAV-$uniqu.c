/*
 * XREFs of ?GuidBiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180071D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180070F20 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Services::TargetedContent::Internal::GuidBiPredicateCreator(HSTRING a1, void **a2, _DWORD *a3)
{
  const OLECHAR *StringRawBuffer; // rax
  HRESULT v6; // eax
  wil::details::in1diag3 *v7; // rcx
  GUID *v8; // rax
  __int64 v9; // r8
  const char *v10; // r9
  GUID *v11; // rdi
  void *v12; // rsi
  DWORD LastError; // ebx
  GUID pclsid; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *a3 = 0;
  StringRawBuffer = WindowsGetStringRawBuffer(a1, 0LL);
  v6 = CLSIDFromString(StringRawBuffer, &pclsid);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_7:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x10F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    JUMPOUT(0x180071E19LL);
  }
  v8 = (GUID *)CoTaskMemAlloc(0x10uLL);
  v11 = v8;
  if ( !v8 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(retaddr, (void *)0x111, v9, v10);
    goto LABEL_7;
  }
  *v8 = pclsid;
  *a3 = 16;
  v12 = *a2;
  if ( *a2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v12);
    SetLastError(LastError);
  }
  *a2 = v11;
}
