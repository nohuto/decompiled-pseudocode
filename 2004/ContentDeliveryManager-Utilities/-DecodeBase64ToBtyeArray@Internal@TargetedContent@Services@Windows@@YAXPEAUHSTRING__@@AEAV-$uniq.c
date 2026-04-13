/*
 * XREFs of ?DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180072270
 * Callers:
 *     ?Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180072470 (-Base64BiPredicateCreator@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$uni.c)
 *     ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x180072590 (-DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microso.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180071370 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UICryptographicBufferStatics@Cryptography@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180073FD0 (--$GetActivationFactory@UICryptographicBufferStatics@Cryptography@Security@Windows@@@wil@@YA-AV-.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray(
        __int64 a1,
        void **a2,
        _DWORD *a3)
{
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  __int64 v9; // r8
  const char *v10; // r9
  void *v11; // r14
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64, SIZE_T *, LPVOID *); // rsi
  DWORD LastError; // edi
  int v16; // eax
  LPVOID v17; // rsi
  void *v18; // rcx
  void *v19; // rdi
  DWORD v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  SIZE_T cb; // [rsp+90h] [rbp+40h] BYREF
  LPVOID pv; // [rsp+98h] [rbp+48h] BYREF

  v23[1] = -2LL;
  *a3 = 0;
  wil::GetActivationFactory<Windows::Security::Cryptography::ICryptographicBufferStatics>(v23);
  v22 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(*(_QWORD *)v23[0] + 104LL))(v23[0], a1, &v22);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x11F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, SIZE_T *))(*(_QWORD *)v22 + 56LL))(v22, &cb);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x121,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v11 = CoTaskMemAlloc((unsigned int)cb);
  pv = v11;
  v12 = retaddr;
  if ( !v11 )
  {
LABEL_17:
    wil::details::in1diag3::_Throw_NullAlloc(v12, (void *)0x123, v9, v10);
    JUMPOUT(0x180072467LL);
  }
  v13 = v23[0];
  v14 = *(__int64 (__fastcall **)(__int64, __int64, SIZE_T *, LPVOID *))(*(_QWORD *)v23[0] + 80LL);
  LastError = GetLastError();
  CoTaskMemFree(v11);
  SetLastError(LastError);
  pv = 0LL;
  v16 = v14(v13, v22, &cb, &pv);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x124,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_15;
  }
  *a3 = cb;
  v17 = pv;
  v18 = 0LL;
  pv = 0LL;
  v19 = *a2;
  if ( *a2 )
  {
    v20 = GetLastError();
    CoTaskMemFree(v19);
    SetLastError(v20);
    v18 = pv;
  }
  *a2 = v17;
  if ( v18 )
    CoTaskMemFree(v18);
  v21 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
}
