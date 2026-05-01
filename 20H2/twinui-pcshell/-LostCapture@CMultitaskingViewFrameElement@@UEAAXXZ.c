/*
 * XREFs of ?LostCapture@CMultitaskingViewFrameElement@@UEAAXXZ @ 0x1803AA880
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18007256C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewFrameElement::LostCapture(CMultitaskingViewFrameElement *this)
{
  __int64 v1; // rbx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 70);
  if ( v1 )
  {
    v2 = *((_QWORD *)this + 70);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v2);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 72LL))(v1);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v2);
  }
  else
  {
    CMultitaskingViewElementBase::LostCapture(this);
  }
}
