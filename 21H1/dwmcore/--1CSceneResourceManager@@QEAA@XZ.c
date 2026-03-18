/*
 * XREFs of ??1CSceneResourceManager@@QEAA@XZ @ 0x18016C8A0
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800ADF90 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x180158E84 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800323A0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800BE77C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800C9A60 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     ?ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ @ 0x18016D010 (-ReleaseSceneCompositor@CSceneResourceManager@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1?FreeLibrary@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHINSTANCE__@@@Z @ 0x18016D1E4 (-reset@-$unique_storage@U-$resource_policy@PEAUHINSTANCE__@@P6AHPEAU1@@Z$1-FreeLibrary@@YAH0@ZU-.c)
 */

void __fastcall CSceneResourceManager::~CSceneResourceManager(CSceneResourceManager *this)
{
  void *v2; // rcx
  CD3DDevice *v3; // rcx
  CMILPoolResource *v4; // rcx
  HMODULE v5; // rcx

  *(_QWORD *)this = &CSceneResourceManager::`vftable';
  CSceneResourceManager::ReleaseSceneCompositor(this);
  wil::details::unique_storage<wil::details::resource_policy<HINSTANCE__ *,int (*)(HINSTANCE__ *),&int FreeLibrary(HINSTANCE__ *),wistd::integral_constant<unsigned __int64,0>,HINSTANCE__ *,HINSTANCE__ *,0,std::nullptr_t>>::reset(
    (char *)this + 16,
    0LL);
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
  v4 = (CMILPoolResource *)*((_QWORD *)this + 3);
  if ( v4 )
    CMILPoolResource::Release(v4);
  v5 = (HMODULE)*((_QWORD *)this + 2);
  if ( v5 )
    FreeLibrary(v5);
}
