/*
 * XREFs of ?GetFilteredSubmixes@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@KAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18006ED00
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1800380B8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800E8690 (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800E90E0 (-clear@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

__int64 __fastcall CDeviceGraphStore::GetFilteredSubmixes(__int64 a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-88h]
  __int64 (__fastcall **v11)(); // [rsp+50h] [rbp-68h] BYREF
  __int128 v12; // [rsp+58h] [rbp-60h]
  int *v13; // [rsp+68h] [rbp-50h]
  __int64 (__fastcall ***v14)(); // [rsp+88h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  int v16; // [rsp+C8h] [rbp+10h] BYREF
  int v17; // [rsp+D0h] [rbp+18h] BYREF
  int v18; // [rsp+D8h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v6 = a5;
  std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::clear(a5);
  *(_QWORD *)&v10 = &v18;
  *((_QWORD *)&v10 + 1) = &v17;
  v11 = off_18014A988;
  v12 = v10;
  v13 = &v16;
  v14 = &v11;
  LODWORD(v6) = CDeviceGraphStore::GetSubmixHelper(a1, v6, &v11);
  std::_Func_class<void,>::_Tidy((__int64)&v11, v7);
  result = (unsigned int)v6;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      result = (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x2C7,
                               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                               v8);
      continue;
    }
    break;
  }
  return result;
}
