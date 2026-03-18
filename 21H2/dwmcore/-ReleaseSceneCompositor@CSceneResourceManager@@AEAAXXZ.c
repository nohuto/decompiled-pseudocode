/*
 * XREFs of ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18007D900
 * Callers:
 *     ?PreRender@CComposition@@IEAAJXZ @ 0x18007D2F8 (-PreRender@CComposition@@IEAAJXZ.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x1801993B4 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z @ 0x180199DF0 (-NotifyInvalidResource@CSceneResourceManager@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032CF0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ?GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ @ 0x1800799E8 (-GetSpectreRenderer@CSceneResourceManager@@QEBAPEAUISpectreRenderer@@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180199FD0 (-reset@-$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CSceneResourceManager::ReleaseSceneCompositor(CSceneResourceManager *this)
{
  CD3DResource *v2; // rcx
  CD3DDevice *v3; // rcx
  struct ISpectreRenderer *SpectreRenderer; // r14
  _QWORD *v5; // rbp
  _QWORD *i; // rdi

  v2 = (CD3DResource *)*((_QWORD *)this + 3);
  if ( v2 )
  {
    CD3DResource::RemoveResourceNotifier(v2, this);
    SpectreRenderer = CSceneResourceManager::GetSpectreRenderer(this);
    if ( SpectreRenderer )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 6);
      for ( i = (_QWORD *)*((_QWORD *)this + 5); i != v5; ++i )
        (*(void (__fastcall **)(_QWORD, struct ISpectreRenderer *))(*(_QWORD *)*i + 8LL))(*i, SpectreRenderer);
    }
    wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::reset((char *)this + 24);
  }
  v3 = (CD3DDevice *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v3 )
    CD3DDevice::Release(v3);
}
