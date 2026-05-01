/*
 * XREFs of _lambda_c06b2b4d2f925f0567d62027ef740978_::operator() @ 0x18034E338
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c06b2b4d2f925f0567d62027ef740978___::Run @ 0x18034F800 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c06b2b4d2f925f0567d62027ef740978___--Run.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_c06b2b4d2f925f0567d62027ef740978_::operator()(Microsoft::WRL::WeakRef *this)
{
  __int64 v2; // rdx
  int v3; // ebx
  struct IInspectable *v4; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  if ( *(_QWORD *)this )
  {
    v3 = Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_5e575f11_41b8_4e5f_a100_ceaab370f70c, &v7);
    v4 = v7;
  }
  else
  {
    v4 = 0LL;
    v7 = 0LL;
    v3 = -2147024809;
  }
  if ( v3 >= 0 )
  {
    LOBYTE(v2) = *((_DWORD *)this + 2) == 0;
    ((void (__fastcall *)(struct IInspectable *, __int64))v4->lpVtbl[1].Release)(v4, v2);
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v7);
  return (unsigned int)v3;
}
