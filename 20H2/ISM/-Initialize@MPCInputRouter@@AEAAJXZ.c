/*
 * XREFs of ?Initialize@MPCInputRouter@@AEAAJXZ @ 0x18002108C
 * Callers:
 *     ?Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z @ 0x18001F43C (-Create@MPCInputRouter@@SAJPEAXPEAUIInputFocusListener@@PEAPEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180020D28 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x1800214F0 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ @ 0x1800215B8 (-Is3DCompositorRunning@MPC3DStateHelper@@QEAA_NXZ.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x180027504 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800B8CA0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 */

__int64 __fastcall MPCInputRouter::Initialize(MPCInputRouter *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  RTL_SRWLOCK *Instance; // rax
  RTL_SRWLOCK *v5; // rax
  __int128 v7; // [rsp+20h] [rbp-60h]
  char v8; // [rsp+30h] [rbp-50h]
  void **v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 v10; // [rsp+48h] [rbp-38h]
  char v11; // [rsp+58h] [rbp-28h]
  MPCInputRouter *v12; // [rsp+60h] [rbp-20h]
  void ***v13; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v2 = DWMInputRouter::Initialize(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3D,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
      (const char *)(unsigned int)v2,
      v7);
    return v3;
  }
  else
  {
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    DWORD2(v7) = 0;
    *(_QWORD *)&v7 = MPCInputRouter::On3DCompositorRunningChanged;
    v12 = this;
    v9 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCInputRouter::*)(bool),MPCInputRouter *,std::_Ph<1> const &>,void,bool>::`vftable';
    v11 = v8;
    v13 = &v9;
    v10 = v7;
    MPC3DStateHelper::RegisterFor3DCompositorRunningChanged(Instance, (__int64)&v9, (_DWORD *)this + 217);
    v5 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    if ( MPC3DStateHelper::Is3DCompositorRunning(v5) )
      MPCInputRouter::On3DCompositorRunningChanged(this, 1);
    return 0LL;
  }
}
