/*
 * XREFs of std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___ @ 0x18023BB58
 * Callers:
 *     ?FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18023D360 (-FindViewInfoByApplicationView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@AEAV-$shared_pt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_std::_Vector_const_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_PeoplePaneViewInfo_________lambda_8b7f561eeecd700a6a36bc0a9fbde639___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 i; // rsi
  __int64 v8; // rdi
  bool v9; // di
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  for ( i = a2; i != a3; i += 16LL )
  {
    if ( *(_QWORD *)(*(_QWORD *)i + 48LL) )
    {
      v11 = 0LL;
      v8 = *(_QWORD *)(a4[1] + 344LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      (*(void (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v8 + 48LL))(
        v8,
        *(_QWORD *)(*(_QWORD *)i + 48LL),
        &v11);
      v9 = v11 == *a4;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    }
    else
    {
      v9 = 0;
    }
    if ( v9 )
      break;
  }
  *a1 = i;
  return a1;
}
