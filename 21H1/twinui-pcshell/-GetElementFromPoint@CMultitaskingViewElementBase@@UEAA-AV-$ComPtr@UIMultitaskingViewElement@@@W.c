/*
 * XREFs of ?GetElementFromPoint@CMultitaskingViewElementBase@@UEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x180382020
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x18008459C (--4-$ComPtr@UIWeakReference@WeakReference@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?_HitTestChildren@CMultitaskingViewElementBase@@IEAA?AV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@AEBUCPoint@Geometry@@@Z @ 0x1803836B8 (-_HitTestChildren@CMultitaskingViewElementBase@@IEAA-AV-$ComPtr@UIMultitaskingViewElement@@@WRL@.c)
 */

__int64 *__fastcall CMultitaskingViewElementBase::GetElementFromPoint(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v6; // rbx
  _DWORD *v7; // rax
  int v8; // ecx
  __int64 *v9; // rax
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+58h] [rbp+38h] BYREF
  __int64 v13; // [rsp+68h] [rbp+48h] BYREF

  *a2 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 112LL))(a1, a3) )
  {
    CMultitaskingViewElementBase::_HitTestChildren(a1, &v12, a3);
    v6 = v12;
    if ( v12 )
    {
      v7 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 120LL))(a1, &v13);
      v11 = *a3;
      v8 = v7[1];
      LODWORD(v11) = *v7 + v11;
      HIDWORD(v11) += v8;
      v9 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *, __int64 *))(*(_QWORD *)v6 + 128LL))(v6, &v13, &v11);
      Microsoft::WRL::ComPtr<WeakReference::IWeakReference>::operator=(a2, v9);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    }
    if ( !*a2 )
    {
      v11 = a1;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v11);
      v11 = *a2;
      *a2 = a1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v12);
  }
  return a2;
}
