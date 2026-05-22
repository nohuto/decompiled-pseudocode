/*
 * XREFs of _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x18019F98C
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_31ada6ebdd22db73722d2ce1394329de___ @ 0x18019EF44 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shar_ea_18019EF44.c)
 *     _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x18019F6F8 (_lambda_139f71076f5ab0ecef881a1ffc08c112_--operator().c)
 * Callees:
 *     ?reset@?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ @ 0x1800DDA24 (-reset@-$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@QEAAXXZ.c)
 */

char __fastcall lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8

  v2 = *a2;
  if ( (*(_WORD *)(*a2 + 24LL) & 0x100) == 0 )
  {
    v3 = **a1;
    if ( *(_QWORD *)(v3 + 24) != *(_QWORD *)v2 || *(_DWORD *)(v3 + 32) != *(_DWORD *)(v2 + 8) )
      return 0;
  }
  ++*(_DWORD *)a1[1];
  std::shared_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>::reset(a2);
  return 1;
}
