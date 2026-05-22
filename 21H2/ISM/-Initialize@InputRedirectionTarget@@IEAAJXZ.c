/*
 * XREFs of ?Initialize@InputRedirectionTarget@@IEAAJXZ @ 0x18017FBDC
 * Callers:
 *     ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x18017F994 (-Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180017654 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800953D4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall InputRedirectionTarget::Initialize(InputRedirectionTarget *this)
{
  __int128 v1; // xmm2
  __int64 v2; // rax
  _QWORD *v3; // r14
  __int128 v4; // xmm3
  __int64 v6; // xmm1_8
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int CompositionInputSink; // eax
  unsigned int v11[4]; // [rsp+20h] [rbp-E0h]
  _DWORD v12[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+78h] [rbp-88h]
  __int128 v15; // [rsp+88h] [rbp-78h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  __int128 v17; // [rsp+A0h] [rbp-60h]
  __int128 v18; // [rsp+B0h] [rbp-50h]
  __int128 v19; // [rsp+C0h] [rbp-40h]
  __int64 v20; // [rsp+D0h] [rbp-30h]
  __int128 v21; // [rsp+D8h] [rbp-28h]
  __int128 v22; // [rsp+E8h] [rbp-18h]
  __int128 v23; // [rsp+F8h] [rbp-8h]
  __int64 v24; // [rsp+108h] [rbp+8h]
  __int128 v25; // [rsp+110h] [rbp+10h]
  __int128 v26; // [rsp+120h] [rbp+20h]
  __int128 v27; // [rsp+130h] [rbp+30h]
  __int64 v28; // [rsp+140h] [rbp+40h]
  wil::details::in1diag3 *retaddr; // [rsp+178h] [rbp+78h]

  v1 = *(_OWORD *)((char *)this + 72);
  v2 = *((_QWORD *)this + 7);
  v3 = (_QWORD *)((char *)this + 32);
  v4 = *(_OWORD *)((char *)this + 88);
  v12[1] = 0;
  v6 = *((_QWORD *)this + 13);
  *(_QWORD *)&v11[2] = v2;
  v11[0] = 3;
  v12[0] = 232;
  v18 = v1;
  v17 = *(_OWORD *)v11;
  v25 = *(_OWORD *)v11;
  v21 = *(_OWORD *)v11;
  v13 = *(_OWORD *)v11;
  v19 = v4;
  v20 = v6;
  v26 = v1;
  v27 = v4;
  v28 = v6;
  v22 = v1;
  v23 = v4;
  v24 = v6;
  v14 = v1;
  v15 = v4;
  v16 = v6;
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 4);
  v7 = CoreUICreate(v3);
  if ( v7 < 0 )
  {
    v8 = 56LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib"
               "\\inputredirectiontarget.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(*(_QWORD *)*v3 + 112LL))(
         *v3,
         (char *)this + 72,
         (char *)this + 40);
  if ( v7 < 0 )
  {
    v8 = 59LL;
    goto LABEL_3;
  }
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
    (__int64 *)this + 14,
    0LL);
  CompositionInputSink = NtCreateCompositionInputSink(v12, (char *)this + 112);
  if ( CompositionInputSink )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             61LL,
             (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\syst"
                      "em\\lib\\inputredirectiontarget.cpp",
             (const char *)CompositionInputSink);
  else
    return 0LL;
}
