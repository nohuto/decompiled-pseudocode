/*
 * XREFs of ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x180259230
 * Callers:
 *     ?Initialize@CHolographicClient@@AEAAJXZ @ 0x180259524 (-Initialize@CHolographicClient@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7C34 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     IsCreateHolographicCompositorPresent @ 0x1800E49C8 (IsCreateHolographicCompositorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CHolographicClient::EnsureHolographicCompositor(CHolographicClient *this)
{
  __int64 *v1; // rdi
  int HolographicCompositor; // eax
  __int64 (__fastcall ***v4)(_QWORD, GUID *, char *); // rdi
  __int64 (__fastcall *v5)(_QWORD, GUID *, char *); // rbx
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (__int64 *)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && IsCreateHolographicCompositorPresent() )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
    HolographicCompositor = CreateHolographicCompositor(&GUID_bfb8ced1_fafb_468b_993a_68cadeba50a2, v1);
    if ( HolographicCompositor < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x149,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)HolographicCompositor);
      __debugbreak();
    }
    v4 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v1;
    v5 = **v4;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
    v6 = v5(v4, &GUID_97234441_f8b8_4244_bbb3_f977d0eb60a5, (char *)this + 32);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14A,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    v7 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 32LL))(
           *((_QWORD *)this + 4),
           (char *)this + 16);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x14B,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\holographic\\holographicclient.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  return 0LL;
}
