/*
 * XREFs of ?OnGazeUpdate@MPCMouseProcessor@@MEAAXPEAUInputInfo@@@Z @ 0x180196230
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180011C98 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180075FAC (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z @ 0x180078DEC (-TransformRayToHeadFromWorld@MPCHolographicInputManager@@QEAAXAEAUTargetingRay@@@Z.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800839A0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 */

void __fastcall MPCMouseProcessor::OnGazeUpdate(MPCMouseProcessor *this, struct InputInfo *a2)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  int v6; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  MPCHolographicInputManager *Instance; // rax
  MPCHolographicInputManager *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  const char *v14; // r9
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v16; // eax
  _OWORD v17[2]; // [rsp+20h] [rbp-60h] BYREF
  __m256i v18; // [rsp+40h] [rbp-40h] BYREF
  int v19; // [rsp+60h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  *((_BYTE *)this + 6320) = 0;
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this) )
  {
    v4 = *((_OWORD *)this + 403);
    v5 = *((_OWORD *)this + 404);
    *((_QWORD *)this + 798) = *((_QWORD *)a2 + 2);
    v6 = *((_DWORD *)this + 1628);
    v17[0] = v4;
    v7 = *((_OWORD *)this + 405);
    v19 = v6;
    v17[1] = v5;
    v8 = *((_OWORD *)this + 406);
    *(_OWORD *)v18.m256i_i8 = v7;
    v9 = *(_OWORD *)((char *)this + 6488);
    *(_OWORD *)&v18.m256i_u64[2] = v8;
    LODWORD(v8) = *((_DWORD *)this + 1627);
    *(_OWORD *)&v18.m256i_u64[1] = v9;
    v18.m256i_i32[6] = *((_DWORD *)this + 1626);
    v18.m256i_i32[7] = v8;
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::TransformRayToHeadFromWorld(Instance, (struct TargetingRay *)&v18.m256i_u64[1]);
    v11 = MPCHolographicInputManager::GetInstance();
    PostProcessor = MPCHolographicInputManager::GetPostProcessor(v11, v12, v13, v14);
    v16 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _OWORD *, char *))(*(_QWORD *)PostProcessor + 40LL))(
            PostProcessor,
            v17,
            (char *)this + 6520);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        900LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
  }
}
