/*
 * XREFs of ?DragEnding@CMultitaskingViewFrameElement@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1803AA3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z @ 0x1803A22A0 (-DragEnding@CMultitaskingViewElementBase@@UEAAXPEAUIUnknown@@W4DropEffect@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::DragEnding(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  CMultitaskingViewElementBase::DragEnding(a1, a2, a3);
  result = Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 560));
  if ( a3 != 2 )
  {
    v6 = *(_QWORD *)(a1 + 264);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL))(v6, &v8);
      if ( v8 )
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v8 + 32LL))(v8, v7, 3LL);
      return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
  }
  return result;
}
