/*
 * XREFs of ?ProcessSetFlatteningToLocalSpace@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE@@@Z @ 0x180223B10
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z @ 0x180047320 (-GetVisualTree@CVisual@@QEAAJPEAPEAVCVisualTree@@_N@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetFlatteningToLocalSpace(
        CLayerVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LAYERVISUAL_SETFLATTENINGTOLOCALSPACE *a3)
{
  int v3; // r9d
  struct CVisualTree **v4; // rbx
  int VisualTree; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((_DWORD *)a3 + 2);
  v4 = (struct CVisualTree **)((char *)this + 744);
  *((_BYTE *)this + 753) = v3 != 0;
  if ( v3 )
  {
    if ( !*v4 )
    {
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 93);
      VisualTree = CVisual::GetVisualTree(this, v4);
      v7 = VisualTree;
      if ( VisualTree < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x8E,
          (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\layervisual.cpp",
          (const char *)(unsigned int)VisualTree);
        return v7;
      }
    }
  }
  else
  {
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)this + 93);
  }
  return 0LL;
}
