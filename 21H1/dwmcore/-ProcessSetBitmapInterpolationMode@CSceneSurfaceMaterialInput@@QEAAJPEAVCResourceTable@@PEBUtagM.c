/*
 * XREFs of ?ProcessSetBitmapInterpolationMode@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETBITMAPINTERPOLATIONMODE@@@Z @ 0x1801EFC3C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E04C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::ProcessSetBitmapInterpolationMode(
        CSceneSurfaceMaterialInput *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENESURFACEMATERIALINPUT_SETBITMAPINTERPOLATIONMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 24) != v3 )
  {
    *((_DWORD *)this + 24) = v3;
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 8);
  }
  return 0LL;
}
