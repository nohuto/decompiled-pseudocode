/*
 * XREFs of ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800E98D0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800E9260 (-GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_re.c)
 *     ?clear@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x1800E9CB0 (-clear@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$allocato.c)
 */

__int64 __fastcall CDeviceGraphStore::GetSubmixesForApplication(__int64 a1, __int64 a2, int a3, __int64 **a4)
{
  __int64 v6; // rdx
  unsigned int SubmixHelper; // ebx
  const char *v8; // r9
  __int64 result; // rax
  __int128 v10; // [rsp+30h] [rbp-78h]
  __int64 (__fastcall **v11)(); // [rsp+40h] [rbp-68h] BYREF
  __int128 v12; // [rsp+48h] [rbp-60h]
  __int64 (__fastcall ***v13)(); // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v15; // [rsp+B8h] [rbp+10h] BYREF
  int v16; // [rsp+C0h] [rbp+18h] BYREF

  v16 = a3;
  v15 = a2;
  std::vector<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::clear(a4);
  *(_QWORD *)&v10 = &v16;
  *((_QWORD *)&v10 + 1) = &v15;
  v11 = off_180156598;
  v12 = v10;
  v13 = &v11;
  SubmixHelper = CDeviceGraphStore::GetSubmixHelper(a1, a4, (__int64)&v11);
  if ( v13 )
  {
    LOBYTE(v6) = v13 != &v11;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64))(*v13)[4])(v13, v6);
  }
  result = SubmixHelper;
  while ( 2 )
  {
    try
    {
    }
    catch ( ... )
    {
      result = (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x2AD,
                               (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                               v8);
      continue;
    }
    break;
  }
  return result;
}
