/*
 * XREFs of ??1CCompositionTextLine@@MEAA@XZ @ 0x1801BE280
 * Callers:
 *     ??_GCCompositionTextLine@@MEAAPEAXI@Z @ 0x18016E780 (--_GCCompositionTextLine@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

void __fastcall CCompositionTextLine::~CCompositionTextLine(CCompositionTextLine *this)
{
  __int64 *v2; // rbx
  __int64 v3; // rdx

  *(_QWORD *)this = &CCompositionTextLine::`vftable';
  v2 = (__int64 *)((char *)this + 104);
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 4LL) + 56) = &CHwndBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 56) = &CCompositionTextLine::`vftable'{for `IContent'};
  v3 = *(int *)(*((_QWORD *)this + 7) + 4LL);
  *(_DWORD *)((char *)this + v3 + 52) = v3 - 64;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 7) + 8LL) + 52) = *(_DWORD *)(*((_QWORD *)this + 7) + 8LL) - 80;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 13));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(v2);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(v2);
  CTextObjectGeneratedT<CTextObject,CContent>::~CTextObjectGeneratedT<CTextObject,CContent>((struct CResource **)this);
}
