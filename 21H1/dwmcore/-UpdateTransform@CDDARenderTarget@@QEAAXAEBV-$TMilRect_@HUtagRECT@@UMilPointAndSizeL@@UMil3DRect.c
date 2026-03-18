/*
 * XREFs of ?UpdateTransform@CDDARenderTarget@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18019D294
 * Callers:
 *     ?UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x1800D5C30 (-UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DR.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800E00C4 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@AEBVRenderTargetInfo@@PEAPEAV1@@Z @ 0x1800E8730 (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBV-$TMilRect_@HUtagRECT@@UM.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18002C8EC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800BC434 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800C9380 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E261C (memset_0.c)
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x1800E4014 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ??$query_to@UIDXGIOutput@@@?$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAUIDXGIOutput@@@Z @ 0x180188824 (--$query_to@UIDXGIOutput@@@-$com_ptr_t@UIDXGIOutputDWM@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ??I?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ @ 0x180188844 (--I-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIUnknown@@XZ.c)
 *     ?Rotate270@CMILMatrix@@QEAAXXZ @ 0x1802130D0 (-Rotate270@CMILMatrix@@QEAAXXZ.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180213108 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CDDARenderTarget::UpdateTransform(__int64 a1, _DWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 *v7; // rax
  int *v8; // r14
  __int128 v9; // xmm0
  int v10; // ecx
  unsigned __int64 v11; // rbx
  CMILMatrix *v12; // rcx
  int v13; // esi
  int v14; // esi
  CMILMatrix *v15; // rcx
  float v16; // xmm2_4
  float v17; // xmm1_4
  __m128i v18; // xmm2
  unsigned __int64 v19; // [rsp+20h] [rbp-49h]
  __int64 v20; // [rsp+28h] [rbp-41h] BYREF
  _BYTE v21[84]; // [rsp+30h] [rbp-39h] BYREF
  int v22; // [rsp+84h] [rbp+1Bh]

  v3 = (_QWORD *)(a1 + 144);
  v20 = 0LL;
  if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)(a1 + 144)) )
  {
    v7 = wil::com_ptr_t<IUnknown,wil::err_returncode_policy>::operator&(&v20);
    if ( (int)wil::com_ptr_t<IDXGIOutputDWM,wil::err_returncode_policy>::query_to<IDXGIOutput>(v3, (__int64)v7) >= 0 )
    {
      memset_0(v21, 0, 0x60uLL);
      if ( (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v20 + 56LL))(v20, v21) >= 0 )
        a3 = v22;
    }
  }
  v8 = (int *)(a1 + 168);
  if ( operator==((_DWORD *)(a1 + 168), a2) && *(_DWORD *)(a1 + 184) == a3 )
    goto LABEL_20;
  v9 = *(_OWORD *)a2;
  *(_DWORD *)(a1 + 184) = a3;
  *(_OWORD *)v8 = v9;
  v10 = *(_DWORD *)(a1 + 176) - *(_DWORD *)(a1 + 168);
  if ( ((a3 - 2) & 0xFFFFFFFD) != 0 )
  {
    HIDWORD(v19) = *(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 172);
    LODWORD(v19) = *(_DWORD *)(a1 + 176) - *(_DWORD *)(a1 + 168);
    v11 = v19;
  }
  else
  {
    v11 = __PAIR64__(v10, *(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 172));
    v10 = *(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 172);
  }
  if ( __PAIR64__(HIDWORD(v11), v10) != *(_QWORD *)(a1 + 80) )
  {
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset((__int64 *)(a1 + 152));
    *(_QWORD *)(a1 + 80) = v11;
  }
  *(_BYTE *)(a1 + 129) = 1;
  *(_DWORD *)(a1 + 200) = 1065353216;
  *(_QWORD *)(a1 + 204) = 0LL;
  *(_QWORD *)(a1 + 212) = 0LL;
  *(_QWORD *)(a1 + 220) = 1065353216LL;
  *(_QWORD *)(a1 + 228) = 0LL;
  *(_DWORD *)(a1 + 236) = 0;
  *(_QWORD *)(a1 + 240) = 1065353216LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 260) = 1065353216;
  *(_WORD *)(a1 + 264) = 32085;
  CMILMatrix::Translate(
    (CMILMatrix *)(a1 + 200),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v8) ^ _xmm),
    COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(int *)(a1 + 172)) ^ _xmm));
  v13 = a3 - 2;
  if ( !v13 )
  {
    CMILMatrix::Rotate270(v12);
    v17 = 0.0;
    v18 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 176) - *v8);
    goto LABEL_18;
  }
  v14 = v13 - 1;
  if ( !v14 )
  {
    CMILMatrix::Scale(v12, -1.0, -1.0, 1.0);
    v18 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 172));
    v17 = (float)(*(_DWORD *)(a1 + 176) - *v8);
LABEL_18:
    LODWORD(v16) = _mm_cvtepi32_ps(v18).m128_u32[0];
    goto LABEL_19;
  }
  if ( v14 == 1 )
  {
    CMILMatrix::Rotate90(v12);
    v16 = 0.0;
    v17 = (float)(*(_DWORD *)(a1 + 180) - *(_DWORD *)(a1 + 172));
LABEL_19:
    CMILMatrix::Translate(v15, v17, v16);
  }
LABEL_20:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
}
