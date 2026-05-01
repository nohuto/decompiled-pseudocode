/*
 * XREFs of ?add_ref@?$com_ptr@UIUnknown@@@winrt@@AEBAXXZ @ 0x180465780
 * Callers:
 *     ??$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@?$vector@Uservice_description@immersive_shell_component@winrt@@V?$allocator@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uservice_description@immersive_shell_component@winrt@@@std@@@std@@@1@PEBUservice_description@immersive_shell_component@winrt@@1Uforward_iterator_tag@1@@Z @ 0x180460AC4 (--$_Insert_range@PEBUservice_description@immersive_shell_component@winrt@@@-$vector@Uservice_des.c)
 *     ?QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1804648A0 (-QueryService@immersive_shell_component@winrt@@EEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::com_ptr<IUnknown>::add_ref(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  return result;
}
