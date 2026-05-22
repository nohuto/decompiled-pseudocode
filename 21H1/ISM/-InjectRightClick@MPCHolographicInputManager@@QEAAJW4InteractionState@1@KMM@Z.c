/*
 * XREFs of ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x180076780
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18018E390 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x18019416C (-SendMPCInput@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C660 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA?AV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@0@XZ @ 0x1800756FC (--$make_unique@ULegacyDeviceInfo@@$$V$0A@@std@@YA-AV-$unique_ptr@ULegacyDeviceInfo@@U-$default_d.c)
 *     ??4?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180075920 (--4-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@QEAAAEAV01@$.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180079738 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z @ 0x1801361B0 (-SynthesizeMouseInput@MouseProcessor@@SAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall MPCHolographicInputManager::InjectRightClick(__int64 a1, int a2, int a3, const char *a4, float a5)
{
  float v5; // xmm3_4
  void **v9; // rbx
  void **v10; // rax
  const char *v11; // r9
  int v12; // eax
  _DWORD *v13; // rax
  int v14; // ebx
  __int64 v15; // rdx
  __int16 v17; // ax
  void *v18; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v19[22]; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+92h] [rbp-76h]
  int v21; // [rsp+9Ch] [rbp-6Ch]
  int v22; // [rsp+A0h] [rbp-68h]
  char v23; // [rsp+B0h] [rbp-58h]
  char v24; // [rsp+B2h] [rbp-56h]
  wil::details::in1diag3 *retaddr; // [rsp+230h] [rbp+128h]

  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      822LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  v9 = (void **)(a1 + 2392);
  if ( !*(_QWORD *)(a1 + 2392) )
  {
    v10 = (void **)std::make_unique<LegacyDeviceInfo,,0>(&v18);
    std::unique_ptr<LegacyDeviceInfo>::operator=(v9, v10);
    if ( v18 )
      operator delete(v18, (const struct std::nothrow_t *)0x60C);
    if ( !*v9 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x33C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v11);
      __debugbreak();
    }
    *(_DWORD *)*v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 2304) + 32LL))(*(_QWORD *)(a1 + 2304));
    *((_DWORD *)*v9 + 1) = 2;
    v12 = (*(__int64 (__fastcall **)(_QWORD, void *, _QWORD))(**(_QWORD **)(a1 + 2304) + 40LL))(
            *(_QWORD *)(a1 + 2304),
            *v9,
            0LL);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        833LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
  }
  memset_0(v19, 0, 0x1B0uLL);
  v13 = *v9;
  v19[6] = 432;
  v19[0] = 4096;
  v19[10] = a3;
  v19[1] = *v13;
  v20 = 1;
  v23 = 1;
  v24 = 1;
  v21 = (int)v5;
  v22 = (int)a5;
  if ( a2 == 1 )
  {
    v14 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
    if ( v14 < 0 )
    {
      v15 = 852LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v15,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        (const char *)(unsigned int)v14);
      return (unsigned int)v14;
    }
    v17 = 4;
  }
  else
  {
    v14 = MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
    if ( v14 < 0 )
    {
      v15 = 860LL;
      goto LABEL_13;
    }
    v17 = 8;
  }
  HIWORD(v20) = v17;
  return MouseProcessor::SynthesizeMouseInput((struct InputInfo *)v19);
}
