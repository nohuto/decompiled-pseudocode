/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$0A@U?$ImplementsMarker@VViewEventArgsBase@@@Details@23@UIWeakReferenceSource@@UIViewPropertyChangedArgs@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1802A1CB4
 * Callers:
 *     ??$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@AEAPEBG@Z @ 0x18029DF10 (--$MakeAndInitialize@VViewEventArgsForPropertyChanged@@UIViewEventArgs@ViewManagerInterop@Shell@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180033DB0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180033F70 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,0,Microsoft::WRL::Details::ImplementsMarker<ViewEventArgsBase>,IWeakReferenceSource,Windows::Internal::Shell::ViewManagerInterop::IViewPropertyChangedArgs>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  void **v2; // r8
  const struct _GUID *v3; // r10
  __int64 v4; // r11
  __int64 result; // rax
  _DWORD *v6; // r10
  __int64 v7; // r11

  if ( InlineIsEqualGUID(a2, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57) )
    goto LABEL_9;
  result = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v4 + 8), v3, v2);
  if ( (_DWORD)result == -2147467262 )
    result = 2147500034LL;
  if ( (_DWORD)result == -2147467262 )
  {
    v4 = v7 + 64;
    if ( *v6 != 56
      || v6[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      || v6[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      || v6[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
    {
      v4 += 8LL;
      if ( *v6 != 905982127
        || v6[1] != *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data2
        || v6[2] != *(_DWORD *)GUID_360030af_7930_47a7_a1dd_184464be39de.Data4
        || v6[3] != *(_DWORD *)&GUID_360030af_7930_47a7_a1dd_184464be39de.Data4[4] )
      {
        return 2147500034LL;
      }
    }
LABEL_9:
    *v2 = (void *)v4;
    return 0LL;
  }
  return result;
}
