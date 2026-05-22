/*
 * XREFs of ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x180101650
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x180045F30 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800894A0 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ @ 0x1800E63D0 (-GetType@BamoDragSourceClientProxy@@UEAAAEBU_GUID@@XZ.c)
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180101980 (-reset@-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEA.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnInputSinkDataChanged(ShellGesturesClientProxy *this)
{
  const struct _GUID *Type; // rax
  struct _GUID v3; // xmm2
  struct _GUID v4; // xmm0
  struct _GUID v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // eax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v11[48]; // [rsp+28h] [rbp-D8h]
  __int128 v12; // [rsp+58h] [rbp-A8h]
  __int64 v13; // [rsp+90h] [rbp-70h] BYREF
  __int128 v14; // [rsp+98h] [rbp-68h]
  __int128 v15; // [rsp+A8h] [rbp-58h]
  __int128 v16; // [rsp+B8h] [rbp-48h]
  __int64 v17; // [rsp+C8h] [rbp-38h]
  __int128 v18; // [rsp+D0h] [rbp-30h]
  __int128 v19; // [rsp+E0h] [rbp-20h]
  __int128 v20; // [rsp+F0h] [rbp-10h]
  __int64 v21; // [rsp+100h] [rbp+0h]
  __int128 v22; // [rsp+108h] [rbp+8h]
  __int128 v23; // [rsp+118h] [rbp+18h]
  __int128 v24; // [rsp+128h] [rbp+28h]
  __int64 v25; // [rsp+138h] [rbp+38h]
  __int128 v26; // [rsp+140h] [rbp+40h]
  __int128 v27; // [rsp+150h] [rbp+50h]
  __int128 v28; // [rsp+160h] [rbp+60h]
  __int64 v29; // [rsp+170h] [rbp+70h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  Type = BamoDragSourceClientProxy::GetType((ShellGesturesClientProxy *)((char *)this + 8));
  v3 = *Type;
  v4 = Type[1];
  v5 = Type[2];
  v6 = *(_QWORD *)&Type->Data1;
  *(struct _GUID *)v11 = v3;
  *(struct _GUID *)&v11[16] = v4;
  *(struct _GUID *)&v11[32] = v5;
  if ( v6 )
  {
    *((_QWORD *)&v12 + 1) = v6;
    *(_QWORD *)&v12 = 3LL;
    v13 = 232LL;
    v15 = *(_OWORD *)&v11[8];
    v14 = v12;
    v18 = v12;
    v22 = v12;
    v26 = v12;
    v16 = *(_OWORD *)&v11[24];
    v17 = *(_QWORD *)&v11[40];
    v19 = *(_OWORD *)&v11[8];
    v20 = *(_OWORD *)&v11[24];
    v21 = *(_QWORD *)&v11[40];
    v23 = *(_OWORD *)&v11[8];
    v24 = *(_OWORD *)&v11[24];
    v25 = *(_QWORD *)&v11[40];
    v27 = *(_OWORD *)&v11[8];
    v28 = *(_OWORD *)&v11[24];
    v29 = *(_QWORD *)&v11[40];
    v8 = NtCreateCompositionInputSink(&v13, &v10);
    if ( v8 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x3B,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\proce"
                        "ssor\\shellgesturesclientproxy.cpp",
               (const char *)(unsigned int)v8);
    v7 = v10;
  }
  else
  {
    v7 = 0LL;
  }
  wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
    (char *)this + 96,
    v7);
  return 0LL;
}
