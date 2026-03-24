/*
 * XREFs of ?Initialize@CDeviceTextureTarget@@MEAAJXZ @ 0x18003CBA0
 * Callers:
 *     ?Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@M_NPEAPEAVIDeviceTextureTarget@@@Z @ 0x18003CA9C (-Create@CDeviceTextureTarget@@SAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x180251D80 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 * Callees:
 *     ?CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@PEAPEAUID3D11RenderTargetView@@@Z @ 0x18003CC6C (-CreateRenderTargetView@CD3DDevice@@QEAAJPEAUID3D11Resource@@PEBUD3D11_RENDER_TARGET_VIEW_DESC@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D09C8 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x18023B18C (-AddHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 */

__int64 __fastcall CDeviceTextureTarget::Initialize(CDeviceTextureTarget *this)
{
  struct ID3D11RenderTargetView **v1; // rdi
  __int64 v3; // rbx
  int RenderTargetView; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  __int64 *v7; // rbx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // rcx

  v1 = (struct ID3D11RenderTargetView **)((char *)this + 264);
  v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 24LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((char *)this + 264);
  RenderTargetView = CD3DDevice::CreateRenderTargetView(
                       (CD3DDevice *)((v3 - 16) & -(__int64)(v3 != 0)),
                       *((struct ID3D11Resource **)this + 15),
                       0LL,
                       v1);
  v6 = RenderTargetView;
  if ( RenderTargetView < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, RenderTargetView, 0x3Cu, 0LL);
  }
  else
  {
    v7 = (__int64 *)*((_QWORD *)this + 3);
    v8 = (_QWORD *)((char *)this + 40);
    v9 = *v7;
    if ( *(__int64 **)(*v7 + 8) != v7 )
      __fastfail(3u);
    *v8 = v9;
    *((_QWORD *)this + 6) = v7;
    *(_QWORD *)(v9 + 8) = v8;
    *v7 = (__int64)v8;
    v10 = *((_QWORD *)this + 2);
    *((_BYTE *)this + 32) = 1;
    v11 = (char *)this + *(int *)(v10 + 8) + 16;
    if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v11 + 24LL))(v11) )
      *((_BYTE *)this + 34) = 1;
    if ( *((_BYTE *)this + 33) )
    {
      ++*((_DWORD *)v7 + 4);
      if ( *((_BYTE *)this + 34) )
        CD2DContext::AddHwProtectedResource((CD2DContext *)v7[3]);
    }
    return 0;
  }
  return v6;
}
