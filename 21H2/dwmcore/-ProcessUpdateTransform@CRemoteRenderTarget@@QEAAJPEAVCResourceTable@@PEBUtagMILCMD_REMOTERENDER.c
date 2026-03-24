/*
 * XREFs of ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800E5BE4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180041F4C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ??8@YA_NAEBUtagRECT@@0@Z @ 0x1800D4490 (--8@YA_NAEBUtagRECT@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1801852FC (-reset@-$com_ptr_t@VCDDisplaySwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x180199484 (-UpdateTransform@CDDARenderTarget@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRect.c)
 */

__int64 __fastcall CRemoteRenderTarget::ProcessUpdateTransform(
        CRemoteRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM *a3)
{
  char *v3; // rdi
  _OWORD *v6; // rdx
  __int64 v7; // rcx
  int *v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx

  v3 = (char *)this + 184;
  if ( !operator==((_DWORD *)this + 46, (_DWORD *)a3 + 4) )
  {
    v7 = *((_QWORD *)this + 21);
    *(_OWORD *)v3 = *v6;
    if ( v7 )
      CDDARenderTarget::UpdateTransform(v7, v3, 1LL);
    v8 = (int *)((char *)this + 188);
    v9 = *((_DWORD *)v3 + 2) - *(_DWORD *)v3;
    if ( v9 != *((_DWORD *)this + 20) || *((_DWORD *)this + 49) - *v8 != *((_DWORD *)this + 21) )
    {
      *((_DWORD *)this + 20) = v9;
      *((_DWORD *)this + 21) = *((_DWORD *)this + 49) - *v8;
      v10 = *((_QWORD *)this + 20);
      *((_QWORD *)this + 20) = 0LL;
      if ( v10 )
      {
        v13 = v10 + 8 + *(int *)(*(_QWORD *)(v10 + 8) + 4LL);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
        v8 = (int *)((char *)this + 188);
      }
    }
    *((_DWORD *)this + 58) = 1065353216;
    *(_QWORD *)((char *)this + 236) = 0LL;
    *(_QWORD *)((char *)this + 244) = 0LL;
    *(_QWORD *)((char *)this + 252) = 1065353216LL;
    *(_QWORD *)((char *)this + 260) = 0LL;
    *((_DWORD *)this + 67) = 0;
    *((_QWORD *)this + 34) = 1065353216LL;
    *((_QWORD *)this + 35) = 0LL;
    *((_DWORD *)this + 72) = 0;
    *((_DWORD *)this + 73) = 1065353216;
    *((_WORD *)this + 148) = 32085;
    CMILMatrix::Translate(
      (CRemoteRenderTarget *)((char *)this + 232),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*(int *)v3) ^ _xmm),
      COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*v8) ^ _xmm));
    *((_BYTE *)this + 129) = 1;
  }
  v11 = *((_QWORD *)a3 + 1);
  if ( *((_QWORD *)this + 25) != v11 )
  {
    *((_QWORD *)this + 25) = v11;
    v14 = *((_QWORD *)this + 19);
    *((_QWORD *)this + 19) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    v15 = *((_QWORD *)this + 20);
    *((_QWORD *)this + 20) = 0LL;
    if ( v15 )
    {
      v16 = v15 + 8 + *(int *)(*(_QWORD *)(v15 + 8) + 4LL);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    wil::com_ptr_t<CDDisplaySwapChain,wil::err_returncode_policy>::reset((char *)this + 168);
  }
  return 0LL;
}
