/*
 * XREFs of ??1Hint@ActivationHints@@QEAA@XZ @ 0x1803A92A0
 * Callers:
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x180054E60 (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803A94B0 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 *     _ActivationHints::AddHint_::_1_::dtor$4 @ 0x1803A96C6 (_ActivationHints--AddHint_--_1_--dtor$4.c)
 *     ?Clear@ActivationHints@@UEAAJXZ @ 0x1803A9720 (-Clear@ActivationHints@@UEAAJXZ.c)
 *     ?_Change_array@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXQEAUHint@ActivationHints@@_K1@Z @ 0x1803A9C1C (-_Change_array@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@A.c)
 *     ?_Destroy@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXPEAUHint@ActivationHints@@0@Z @ 0x1803A9CD8 (-_Destroy@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXP.c)
 *     ?_Tidy@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXXZ @ 0x1803A9D10 (-_Tidy@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@AEAAXXZ.c)
 *     ?erase@?$vector@UHint@ActivationHints@@V?$allocator@UHint@ActivationHints@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@UHint@ActivationHints@@@std@@@std@@@2@@Z @ 0x1803A9DF0 (-erase@-$vector@UHint@ActivationHints@@V-$allocator@UHint@ActivationHints@@@std@@@std@@QEAA-AV-$.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800854C8 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall ActivationHints::Hint::~Hint(ActivationHints::Hint *this)
{
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 9);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
  std::wstring::_Tidy_deallocate(this);
}
