/*
 * XREFs of _lambda_35d4e52d6eb70072a5ca8f90532e9d29_::operator() @ 0x1801BF13C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_35d4e52d6eb70072a5ca8f90532e9d29___::Run @ 0x1801C1650 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_35d4e52d6eb70072a5ca8f90532e9d29___--Run.c)
 * Callees:
 *     ?InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18003F84C (-InternalResolve@WeakRef@WRL@Microsoft@@IEBAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_35d4e52d6eb70072a5ca8f90532e9d29_::operator()(Microsoft::WRL::WeakRef *this)
{
  int v2; // ebx
  struct IInspectable *v3; // rcx
  unsigned __int64 v4; // r9
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IInspectable *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  if ( *(_QWORD *)this )
  {
    v2 = Microsoft::WRL::WeakRef::InternalResolve(this, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, &v8);
    v3 = v8;
  }
  else
  {
    v3 = 0LL;
    v8 = 0LL;
    v2 = -2147024809;
  }
  if ( v2 >= 0 )
  {
    v5 = ((__int64 (__fastcall *)(struct IInspectable *))v3->lpVtbl[1].AddRef)(v3);
    v2 = v5;
    if ( v5 >= 0 )
    {
      v2 = 0;
      goto LABEL_10;
    }
    v4 = (unsigned int)v5;
  }
  else
  {
    v4 = (unsigned int)v2;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xDD,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
    (const char *)v4);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v2;
}
