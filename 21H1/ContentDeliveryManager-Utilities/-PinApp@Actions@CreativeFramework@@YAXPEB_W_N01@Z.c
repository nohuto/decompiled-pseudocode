/*
 * XREFs of ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x18008FCE0
 * Callers:
 *     ?PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z @ 0x18008FE88 (-PinPackagedAppToTaskbar@Actions@CreativeFramework@@YAXPEB_W0_N@Z.c)
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008FFC0 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800180B8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CreativeFramework::Actions::PinApp(const WCHAR *this, const wchar_t *a2, __int64 a3, const wchar_t *a4)
{
  char v4; // r14
  HRESULT v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, __int64, PVOID, int); // rsi
  PVOID Reserved1; // rdi
  HSTRING_HEADER *v12; // rax
  __int64 v13; // r8
  int v14; // eax
  int ppv; // [rsp+28h] [rbp-49h]
  __int64 v16; // [rsp+38h] [rbp-39h] BYREF
  int v17; // [rsp+40h] [rbp-31h]
  LPVOID v18; // [rsp+48h] [rbp-29h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-21h] BYREF
  const WCHAR *v20[2]; // [rsp+58h] [rbp-19h] BYREF
  HSTRING_HEADER v21; // [rsp+68h] [rbp-9h] BYREF
  HSTRING_HEADER v22; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v20[1] = (const WCHAR *)-2LL;
  v4 = (char)a4;
  v20[0] = this;
  v17 = 0;
  v19 = &Src;
  v18 = 0LL;
  v5 = CoCreateInstance(
         &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
         0LL,
         0x404u,
         &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
         &v18);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_10:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x1F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v16 = 0LL;
  v17 = 1;
  v7 = *(_QWORD *)v18;
  v16 = 0LL;
  v8 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v7 + 96))(
         v18,
         &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
         &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
         &v16);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v8);
    JUMPOUT(0x18008FE7FLL);
  }
  if ( v18 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v18 + 16LL))(v18);
  v9 = v16;
  v10 = *(__int64 (__fastcall **)(__int64, PVOID, __int64, PVOID, int))(*(_QWORD *)v16 + 48LL);
  Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v21, &v19)[1].Reserved.Reserved1;
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v22, v20);
  LOBYTE(ppv) = v4;
  LOBYTE(v13) = 1;
  v14 = v10(v9, v12[1].Reserved.Reserved1, v13, Reserved1, ppv);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_10;
  }
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
}
