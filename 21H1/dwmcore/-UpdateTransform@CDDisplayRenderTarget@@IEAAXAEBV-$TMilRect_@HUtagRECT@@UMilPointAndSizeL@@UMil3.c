/*
 * XREFs of ?UpdateTransform@CDDisplayRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x180191544
 * Callers:
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801908D4 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 * Callees:
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180177E80 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18018930C (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018FFC4 (-CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::UpdateTransform(
        CDDisplayRenderTarget *this,
        _OWORD *a2,
        __int128 *a3,
        int a4)
{
  __int128 v5; // xmm1
  int v6; // ecx
  __int64 v7; // rax
  __int64 result; // rax

  *(_OWORD *)((char *)this + 18264) = *a2;
  v5 = *a3;
  *((_DWORD *)this + 4574) = a4;
  *(_OWORD *)((char *)this + 18280) = v5;
  v6 = *((_DWORD *)this + 4568) - *((_DWORD *)this + 4566);
  if ( v6 != *((_DWORD *)this + 20) || *((_DWORD *)this + 4569) - *((_DWORD *)this + 4567) != *((_DWORD *)this + 21) )
  {
    *((_DWORD *)this + 20) = v6;
    *((_DWORD *)this + 21) = *((_DWORD *)this + 4569) - *((_DWORD *)this + 4567);
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset((CRenderTargetBitmap **)this + 21);
  }
  CDDisplayRenderTarget::CalculateMonitorTransform(this);
  *((_BYTE *)this + 129) = 1;
  CDDisplayRenderTarget::UpdateMPOCaps((CDDisplayRenderTarget *)((char *)this + 136), 1);
  v7 = *((_QWORD *)this + 20);
  if ( v7 )
    *(_BYTE *)(v7 + 5893) = 1;
  result = *((_QWORD *)this + 2);
  *(_BYTE *)(*(_QWORD *)(result + 88) + 131LL) = 1;
  return result;
}
