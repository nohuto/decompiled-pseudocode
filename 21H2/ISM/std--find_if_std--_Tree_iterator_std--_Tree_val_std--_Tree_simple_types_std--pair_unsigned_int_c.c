/*
 * XREFs of std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___ @ 0x180172DB8
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x180173F9C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035628 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x18003B08C (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800694A8 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$?8W4_Button@@V?$allocator@W4_Button@@@std@@@std@@YA_NAEBV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@0@0@Z @ 0x180172204 (--$-8W4_Button@@V-$allocator@W4_Button@@@std@@@std@@YA_NAEBV-$vector@W4_Button@@V-$allocator@W4_.c)
 *     ??0?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z @ 0x180172F2C (--0-$vector@W4_Button@@V-$allocator@W4_Button@@@std@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::find_if_std::_Tree_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_unsigned_int_const__ComboButtonRegistration_________lambda_0421dcd582958194319e258fcb48fb26___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 i; // rbx
  __int128 v8; // xmm1
  bool v9; // r14
  __int64 v11; // [rsp+28h] [rbp-29h] BYREF
  int v12; // [rsp+38h] [rbp-19h]
  char v13; // [rsp+40h] [rbp-11h]
  _QWORD v14[3]; // [rsp+48h] [rbp-9h] BYREF
  _OWORD v15[2]; // [rsp+60h] [rbp+Fh] BYREF
  __int64 v16; // [rsp+80h] [rbp+2Fh]

  v11 = a2;
  for ( i = a2; i != a3; i = v11 )
  {
    v12 = *(_DWORD *)(i + 32);
    v13 = *(_BYTE *)(i + 40);
    std::vector<enum _Button>::vector<enum _Button>(v14, i + 48);
    v8 = *(_OWORD *)(i + 88);
    v15[0] = *(_OWORD *)(i + 72);
    v16 = *(_QWORD *)(i + 104);
    v15[1] = v8;
    v9 = *a4 == v13
      && std::operator==<enum _Button,std::allocator<enum _Button>>((__int64)(a4 + 8), v14)
      && operator==((__int64)(a4 + 32), (__int64)v15);
    std::vector<Windows::UI::Color>::_Tidy((__int64)v14);
    if ( v9 )
      break;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(&v11);
  }
  *a1 = i;
  return a1;
}
