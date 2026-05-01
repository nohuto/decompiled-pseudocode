/*
 * XREFs of wistd::function_void___cdecl(unsigned_char_const_&)_::function_void___cdecl(unsigned_char_const_&)___lambda_025d670431b0b6098eb2d1c47c9e9598__void_ @ 0x1802A6A1C
 * Callers:
 *     ?Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z @ 0x1802A72B4 (-Initialize@ConnectedStandbyHelper@@QEAAJPEAUIWindowDispatcherConnectedStandby@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

_QWORD *__fastcall wistd::function_void___cdecl_unsigned_char_const____::function_void___cdecl_unsigned_char_const______lambda_025d670431b0b6098eb2d1c47c9e9598__void_(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Ref_count_base *v3; // rcx

  a1[14] = 0LL;
  a1[1] = &off_18046F508;
  a1[2] = 0LL;
  a1[3] = 0LL;
  a1[2] = *a2;
  a1[3] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  a1[14] = a1 + 1;
  v3 = (std::_Ref_count_base *)a2[1];
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  return a1;
}
