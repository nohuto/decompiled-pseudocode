/*
 * XREFs of ?RuntimeClassInitialize@MPCRawInputProvider@@QEAAJPEAUIRawInputClient@@@Z @ 0x180021314
 * Callers:
 *     ??$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@WRL@Microsoft@@YAJPEAPEAUIRawInputProvider@@AEAPEAUIRawInputClient@@@Z @ 0x180020420 (--$MakeAndInitialize@VMPCRawInputProvider@@UIRawInputProvider@@AEAPEAUIRawInputClient@@@Details@.c)
 * Callees:
 *     ??4?$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z @ 0x180020634 (--4-$ComPtr@UIRawInputClient@@@WRL@Microsoft@@QEAAAEAV012@PEAUIRawInputClient@@@Z.c)
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180020C98 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180021460 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x180021528 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180021CF4 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180037590 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008A948 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z @ 0x18008ADC0 (-OnCompositorRunningStateChanged@MPCRawInputProvider@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCRawInputProvider::RuntimeClassInitialize(MPCRawInputProvider *this, struct IRawInputClient *a2)
{
  void *v3; // rdx
  HANDLE Event; // rdi
  unsigned int v5; // r8d
  const char *v6; // r9
  _QWORD *v7; // rdi
  int v8; // eax
  const char *v9; // r9
  int v10; // eax
  RTL_SRWLOCK *Instance; // rax
  RTL_SRWLOCK *v12; // rax
  int v14; // [rsp+28h] [rbp-19h]
  __int128 v15; // [rsp+38h] [rbp-9h]
  char v16; // [rsp+48h] [rbp+7h]
  void **v17; // [rsp+58h] [rbp+17h] BYREF
  __int128 v18; // [rsp+60h] [rbp+1Fh]
  char v19; // [rsp+70h] [rbp+2Fh]
  MPCRawInputProvider *v20; // [rsp+78h] [rbp+37h]
  void ***v21; // [rsp+90h] [rbp+4Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  Microsoft::WRL::ComPtr<IRawInputClient>::operator=((__int64 *)this + 2, (__int64)a2);
  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( !Event )
  {
    wil::details::in1diag3::FailFast_GetLastError(retaddr, v3, v5, v6);
    __debugbreak();
  }
  GetLastError();
  wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
    (char *)this + 72,
    Event);
  v7 = (_QWORD *)((char *)this + 64);
  *((_DWORD *)this + 22) = GetCurrentThreadId();
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((char *)this + 64);
  v8 = CoreUICreate((char *)this + 64);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v8,
      v14);
    __debugbreak();
  }
  if ( !*v7 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x23,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 (__fastcall *)(void *, unsigned int, void *), MPCRawInputProvider *))(*(_QWORD *)*v7 + 256LL))(
          *v7,
          *((_QWORD *)this + 9),
          MPCRawInputProvider::InputReceivedStatic,
          this);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x29,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcrawinputprovider.cpp",
      (const char *)(unsigned int)v10,
      v14);
    __debugbreak();
  }
  Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  DWORD2(v15) = 0;
  *(_QWORD *)&v15 = MPCRawInputProvider::OnCompositorRunningStateChanged;
  v20 = this;
  v17 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCRawInputProvider::*)(bool),MPCRawInputProvider *,std::_Ph<1> const &>,void,bool>::`vftable';
  v19 = v16;
  v21 = &v17;
  v18 = v15;
  MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance, (__int64)&v17, (_DWORD *)this + 21);
  v12 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
  if ( MPC3DStateHelper::Is3DCompositorRunning(v12) )
    MPCRawInputProvider::OnCompositorRunningStateChanged(this, 1);
  return 0LL;
}
