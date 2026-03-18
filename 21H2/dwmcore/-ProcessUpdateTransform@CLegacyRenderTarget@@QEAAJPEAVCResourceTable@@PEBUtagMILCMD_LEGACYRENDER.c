/*
 * XREFs of ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x18001DE54
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18001DFB0 (-UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E0D4 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ @ 0x18001E704 (-EnsureDXGIOutput@CLegacyRenderTarget@@IEAAJXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1801E16EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 */

__int64 __fastcall CLegacyRenderTarget::ProcessUpdateTransform(
        CLegacyRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM *a3)
{
  int v3; // edx
  __int128 v6; // xmm0
  int v7; // r9d
  CDDARenderTarget *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rcx
  int v13; // [rsp+20h] [rbp-E0h]
  _DWORD v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v16[192]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 4608) != v3 )
  {
    *((_DWORD *)this + 4608) = v3;
    v12 = *((_QWORD *)this + 22);
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 208LL))(v12);
  }
  CLegacyRenderTarget::EnsureDXGIOutput(this);
  v6 = *((_OWORD *)a3 + 1);
  v14[0] = *((_DWORD *)a3 + 9);
  v14[1] = *((_DWORD *)a3 + 10);
  v14[2] = *((_DWORD *)a3 + 11);
  v14[3] = *((_DWORD *)a3 + 12);
  v13 = *((_DWORD *)a3 + 13);
  v15 = v6;
  CMonitorTransform::Initialize((_DWORD)this + 18160, (_DWORD)this + 104, (unsigned int)&v15, v7, v13, (__int64)v14);
  *((_BYTE *)this + 141) = 1;
  CLegacyRenderTarget::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 144));
  v8 = (CDDARenderTarget *)*((_QWORD *)this + 23);
  if ( v8 )
    CDDARenderTarget::UpdateTransform(v8, (CLegacyRenderTarget *)((char *)this + 18160));
  v9 = *((_QWORD *)this + 21);
  if ( v9 && (*(int (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v9 + 32LL))(v9, v16) >= 0 )
    *((_BYTE *)this + 18609) = (v16[108] & 8) != 0;
  v10 = *((_QWORD *)this + 20);
  if ( v10 )
    *(_BYTE *)(v10 + 4712) = 1;
  result = 0LL;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 216LL) + 579LL) = 1;
  return result;
}
