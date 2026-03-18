/*
 * XREFs of ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801908D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?UpdateTransform@CDDisplayRenderTarget@@IEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x180191544 (-UpdateTransform@CDDisplayRenderTarget@@IEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateTransform(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM *a3)
{
  unsigned int v4; // edi
  __int64 v5; // rcx
  int v7; // edx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 8);
  if ( (int)v5 < 0 || *((int *)a3 + 9) < 0 )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2003303421, 0x72u, 0LL);
  }
  else
  {
    CDDisplayRenderTarget::UpdateTransform(this);
    v7 = *((_DWORD *)a3 + 2);
    if ( *((_DWORD *)this + 4649) != v7 )
    {
      *((_DWORD *)this + 4649) = v7;
      v8 = *((_QWORD *)this + 21);
      if ( v8 )
      {
        if ( *(_DWORD *)(v8 + 260) != v7 )
        {
          *(_DWORD *)(v8 + 260) = v7;
          v9 = *(_QWORD *)(v8 + 224);
          if ( v9 )
          {
            v10 = v9 + 8 + *(int *)(*(_QWORD *)(v9 + 8) + 24LL);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
          }
        }
      }
    }
  }
  return v4;
}
