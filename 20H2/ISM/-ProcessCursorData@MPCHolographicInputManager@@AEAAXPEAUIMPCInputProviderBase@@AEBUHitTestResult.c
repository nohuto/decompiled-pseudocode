/*
 * XREFs of ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x180077E34
 * Callers:
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18007751C (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAUInputInfo@@PEAUIMPCInputProviderBase@@PEAPE.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x1800759FC (-GetPostProcessor@MPCHolographicInputManager@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x1800764B4 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800783F8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellCont.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180079A68 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@AEA_N@Z @ 0x18007C2FC (-ProcessProviderHitTest@MPCCursorManager@@QEAAJPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@A.c)
 */

__int64 __fastcall MPCHolographicInputManager::ProcessCursorData(
        __int64 a1,
        struct IMPCInputProviderBase *a2,
        __int64 a3,
        const char *a4,
        __int64 a5)
{
  int v5; // r12d
  char v9; // al
  int v10; // eax
  MPCHolographicInputManager *v11; // rcx
  char v12; // di
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rdx
  bool v16; // al
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  const char *v21; // r9
  int v22; // xmm8_4
  int v23; // xmm7_4
  int v24; // xmm6_4
  struct IMPCInputPostProcessor *PostProcessor; // rdi
  int (__fastcall *v26)(struct IMPCInputPostProcessor *, _QWORD, __int64 *); // rbx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int64 result; // rax
  bool v30; // [rsp+20h] [rbp-60h] BYREF
  _BYTE v31[12]; // [rsp+24h] [rbp-5Ch] BYREF
  __int64 v32; // [rsp+30h] [rbp-50h] BYREF
  int v33; // [rsp+38h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = (int)a4;
  if ( !*(_BYTE *)(a1 + 2364) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      874LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      a4);
    __debugbreak();
  }
  *(_OWORD *)(a5 + 24) = *(_OWORD *)(a3 + 168);
  *(_OWORD *)(a5 + 40) = *(_OWORD *)(a3 + 184);
  *(_OWORD *)(a5 + 56) = *(_OWORD *)(a3 + 200);
  *(_OWORD *)(a5 + 72) = *(_OWORD *)(a3 + 120);
  *(_OWORD *)(a5 + 88) = *(_OWORD *)(a3 + 136);
  *(_OWORD *)(a5 + 104) = *(_OWORD *)(a3 + 152);
  *(_OWORD *)a5 = *(_OWORD *)(a3 + 256);
  *(_QWORD *)(a5 + 16) = *(_QWORD *)(a3 + 272);
  v9 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 120LL))(a2);
  *(_DWORD *)(a5 + 152) = v5;
  *(_BYTE *)(a5 + 136) = v9;
  v10 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 112LL))(a2);
  *(_BYTE *)(a5 + 160) = 0;
  *(_DWORD *)(a5 + 132) = v10;
  *(_QWORD *)(a5 + 120) = *(_QWORD *)(a3 + 52);
  *(_DWORD *)(a5 + 128) = *(_DWORD *)(a3 + 60);
  *(_BYTE *)(a5 + 161) = *(_BYTE *)a3;
  v12 = 1;
  if ( MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v11, a2) )
    LODWORD(v13) = 1;
  else
    v13 = (__int64)(*(_QWORD *)(a1 + 2584) - *(_QWORD *)(a1 + 2576)) >> 3;
  *(_DWORD *)(a5 + 164) = v13;
  v14 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 304LL))(a2);
  LOBYTE(v15) = 1;
  v30 = 0;
  *(_DWORD *)(a5 + 168) = v14;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_OnlyShowCursorInOverlayIfHittingShellContent>::GetImpl'::`2'::impl,
    v15);
  if ( *(_BYTE *)(a3 + 306) )
  {
    v16 = *(_BYTE *)(a3 + 72) == 0;
    v30 = v16;
  }
  else
  {
    if ( v5 == 1 )
    {
      v17 = MPCCursorManager::ProcessProviderHitTest(
              *(MPCCursorManager **)(a1 + 2384),
              a2,
              (const struct HitTestResult3D *)a3,
              &v30);
      if ( v17 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          897LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v17);
        __debugbreak();
      }
    }
    v16 = v30;
  }
  if ( !v16 && (*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 2576) + 80LL))(**(_QWORD **)(a1 + 2576)) )
    v12 = 0;
  *(_BYTE *)(a5 + 160) = v12;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 2576) + 80LL))(**(_QWORD **)(a1 + 2576)) && v5 )
  {
    *(_BYTE *)(a5 + 24) = 0;
    *(_BYTE *)(a5 + 72) = 0;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 2336) + 112LL))(*(_QWORD *)(a1 + 2336), a5);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      910LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  v22 = *(_DWORD *)(a3 + 52);
  v23 = *(_DWORD *)(a3 + 56);
  v24 = *(_DWORD *)(a3 + 60);
  v32 = 0LL;
  v33 = 0;
  PostProcessor = MPCHolographicInputManager::GetPostProcessor((MPCHolographicInputManager *)a1, v19, v20, v21);
  v26 = *(int (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD, __int64 *))(*(_QWORD *)PostProcessor + 120LL);
  v27 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 320LL))(a2);
  if ( v26(PostProcessor, v27, &v32) >= 0 )
  {
    v24 = v33;
    v23 = HIDWORD(v32);
    v22 = v32;
  }
  *(_DWORD *)(a1 + 224) = v22;
  *(_DWORD *)(a1 + 228) = v23;
  *(_DWORD *)(a1 + 232) = v24;
  v28 = Windows::Foundation::Numerics::transform(v31, a1 + 224, a1);
  *(_QWORD *)(a1 + 236) = *(_QWORD *)v28;
  *(_DWORD *)(a1 + 244) = *(_DWORD *)(v28 + 8);
  *(_OWORD *)(a1 + 2400) = *(_OWORD *)a5;
  *(_OWORD *)(a1 + 2416) = *(_OWORD *)(a5 + 16);
  *(_OWORD *)(a1 + 2432) = *(_OWORD *)(a5 + 32);
  *(_OWORD *)(a1 + 2448) = *(_OWORD *)(a5 + 48);
  *(_OWORD *)(a1 + 2464) = *(_OWORD *)(a5 + 64);
  *(_OWORD *)(a1 + 2480) = *(_OWORD *)(a5 + 80);
  *(_OWORD *)(a1 + 2496) = *(_OWORD *)(a5 + 96);
  result = a1 + 2528;
  *(_OWORD *)(a1 + 2512) = *(_OWORD *)(a5 + 112);
  *(_OWORD *)(a1 + 2528) = *(_OWORD *)(a5 + 128);
  *(_OWORD *)(a1 + 2544) = *(_OWORD *)(a5 + 144);
  *(_OWORD *)(a1 + 2560) = *(_OWORD *)(a5 + 160);
  return result;
}
