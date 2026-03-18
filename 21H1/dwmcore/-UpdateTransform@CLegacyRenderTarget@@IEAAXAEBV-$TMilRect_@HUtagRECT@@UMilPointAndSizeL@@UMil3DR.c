/*
 * XREFs of ?UpdateTransform@CLegacyRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x1800D5C30
 * Callers:
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800D5B4C (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800D5CC0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ @ 0x1800D5CF4 (-CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18019D294 (-UpdateTransform@CDDARenderTarget@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRect.c)
 */

__int64 __fastcall CLegacyRenderTarget::UpdateTransform(
        CLegacyRenderTarget *this,
        _OWORD *a2,
        __int128 *a3,
        unsigned int a4)
{
  char *v4; // rax
  __int128 v6; // xmm1
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 result; // rax

  v4 = (char *)this + 184;
  *(_OWORD *)((char *)this + 184) = *a2;
  v6 = *a3;
  *((_DWORD *)this + 54) = a4;
  *(_OWORD *)((char *)this + 200) = v6;
  v7 = *((_QWORD *)this + 21);
  if ( v7 )
    CDDARenderTarget::UpdateTransform(v7, v4, a4);
  CLegacyRenderTarget::CalculateMonitorTransform(this);
  *((_BYTE *)this + 129) = 1;
  CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 136), 1);
  v8 = *((_QWORD *)this + 22);
  if ( v8 )
    *(_BYTE *)(v8 + 5893) = 1;
  result = *((_QWORD *)this + 2);
  *(_BYTE *)(*(_QWORD *)(result + 88) + 131LL) = 1;
  return result;
}
