/*
 * XREFs of ??1CVisualSurface@@UEAA@XZ @ 0x1801F3590
 * Callers:
 *     ??_GCVisualSurface@@UEAAPEAXI@Z @ 0x18016FA80 (--_GCVisualSurface@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801757B8 (-clear@-$vector_facade@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 */

void __fastcall CVisualSurface::~CVisualSurface(struct CResource **this)
{
  CVisualSurface *v2; // rcx

  *this = (struct CResource *)&CVisualSurface::`vftable';
  CResource::UnRegisterNotifierInternal((CResource *)this, this[7]);
  this[7] = 0LL;
  detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear(this + 12);
  v2 = this[12];
  this[12] = 0LL;
  if ( v2 == (CVisualSurface *)(this + 15) )
    v2 = 0LL;
  operator delete(v2);
  CResource::~CResource((CResource *)this);
}
