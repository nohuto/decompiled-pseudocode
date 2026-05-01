/*
 * XREFs of ?attach@?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x180226120
 * Callers:
 *     ?GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1802257A0 (-GetLastActiveItem@HolographicViewHostItemLedger@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@In.c)
 *     ?erase@?$vector@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x18022614C (-erase@-$vector@V-$com_ptr_t@UIViewHostItem@Holographic@Shell@Internal@Windows@@Uerr_returncode_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_ptr_t<Windows::Internal::Shell::Holographic::IViewHostItem,wil::err_returncode_policy>::attach(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
