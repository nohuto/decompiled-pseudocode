/*
 * XREFs of ??$_Eqrange@U_GUID@@@?$_Tree@V?$_Tmap_traits@U_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@UGUIDComparer@PenDeviceManager@@V?$allocator@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@V?$com_ptr_t@VPenDevice@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@std@@V12@@1@AEBU_GUID@@@Z @ 0x18012DC9C
 * Callers:
 *     ?RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z @ 0x1801300C8 (-RepopulateActiveBamoForId@PenDeviceManager@@IEAAXAEBU_GUID@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x18004A67F (memcmp_0.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<_GUID,wil::com_ptr_t<PenDevice,wil::err_exception_policy>,PenDeviceManager::GUIDComparer,std::allocator<std::pair<_GUID const,wil::com_ptr_t<PenDevice,wil::err_exception_policy>>>,0>>::_Eqrange<_GUID>(
        _QWORD *a1,
        _QWORD *a2,
        const void *a3)
{
  __int64 *v3; // rbp
  __int64 *v6; // rdi
  __int64 **v7; // r14
  __int64 *v8; // rbx
  __int64 *v9; // rbx
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v6 = (__int64 *)*a1;
  v7 = (__int64 **)(*a1 + 8LL);
  v8 = *v7;
  while ( !*((_BYTE *)v8 + 25) )
  {
    if ( memcmp_0(v8 + 4, a3, 0x10uLL) >= 0 )
    {
      if ( *((_BYTE *)v6 + 25) && memcmp_0(a3, v8 + 4, 0x10uLL) < 0 )
        v6 = v8;
      v3 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 **)v6;
  v9 = *v7;
  while ( !*((_BYTE *)v9 + 25) )
  {
    if ( memcmp_0(a3, v9 + 4, 0x10uLL) >= 0 )
    {
      v9 = (__int64 *)v9[2];
    }
    else
    {
      v6 = v9;
      v9 = (__int64 *)*v9;
    }
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
