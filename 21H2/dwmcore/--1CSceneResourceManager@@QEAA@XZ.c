/*
 * XREFs of ??1CSceneResourceManager@@QEAA@XZ @ 0x1801993B4
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18007D900 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ @ 0x1800EC208 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@@@IEAAKXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAVCResource@@V?$com_ptr_t@UISpectreTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@PEAX@1@@Z @ 0x180199214 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@QEAVCResource@@V-$com_ptr_t@UISpectreTexture@@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x180199FF4 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

void __fastcall CSceneResourceManager::~CSceneResourceManager(CSceneResourceManager *this)
{
  void *v2; // rcx
  CD3DDevice *v3; // rcx
  volatile signed __int32 *v4; // rcx

  *(_QWORD *)this = &CSceneResourceManager::`vftable';
  CSceneResourceManager::ReleaseSceneCompositor(this);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (char *)this + 16,
    0LL);
  std::_Tree_val<std::_Tree_simple_types<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<CResource * const,wil::com_ptr_t<ISpectreTexture,wil::err_returncode_policy>>,void *>>>(
    (__int64)this + 64,
    (__int64)this + 64,
    *(_QWORD *)(*((_QWORD *)this + 8) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 8), 0x30uLL);
  v2 = (void *)*((_QWORD *)this + 5);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 7) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  v3 = (CD3DDevice *)*((_QWORD *)this + 4);
  if ( v3 )
    CD3DDevice::Release(v3);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 3);
  if ( v4 )
    CMILRefCountBaseT<IDeviceResource>::InternalRelease(v4);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>((HMODULE *)this + 2);
}
