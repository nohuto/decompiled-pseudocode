/*
 * XREFs of ??$FindEx@VCompareToItemData@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@VElementCompare@ElementHelpers@@@@QEBAJAEBVCompareToItemData@@AEBV?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1803A66B0
 * Callers:
 *     ?GetSwitchItemElementIndex@CSwitchItemGrid@@UEAAJPEAUISwitchItem@@PEA_K@Z @ 0x1803A73A0 (-GetSwitchItemElementIndex@CSwitchItemGrid@@UEAAJPEAUISwitchItem@@PEA_K@Z.c)
 *     ?ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1803A75D0 (-ItemRemoved@CSwitchItemGrid@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z.c)
 *     ?NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z @ 0x1803A7CA0 (-NavigateToItem@CSwitchItemGrid@@UEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewGridElement@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x1803A654C (--$As@UIMultitaskingViewGridElement@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV.c)
 */

__int64 __fastcall CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewElement>,ElementHelpers::ElementCompare>::FindEx<CompareToItemData>(
        __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v4; // rbx
  __int64 v8; // rax
  BOOL v9; // edi
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  *a4 = 0LL;
  v4 = 0LL;
  if ( !a1[1] )
    return 2147647531LL;
  while ( 1 )
  {
    v8 = *a1;
    v11 = 0LL;
    v9 = (int)Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewGridElement>(
                (_QWORD *)(v8 + 8 * v4),
                &v11) < 0
      || !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, *a2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    if ( !v9 )
      break;
    if ( ++v4 >= (unsigned __int64)a1[1] )
      return 2147647531LL;
  }
  *a4 = v4;
  return 0LL;
}
