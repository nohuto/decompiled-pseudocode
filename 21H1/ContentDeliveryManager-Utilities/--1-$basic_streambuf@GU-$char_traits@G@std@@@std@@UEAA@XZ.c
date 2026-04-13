/*
 * XREFs of ??1?$basic_streambuf@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180033170
 * Callers:
 *     _std::basic_stringbuf_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringbuf_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800CDE07 (_std--basic_stringbuf_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_sh.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$7 @ 0x1800CEA9D (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_1800CEA9D.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$24 @ 0x1800CF4C1 (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$24.c)
 *     _Windows::Services::TargetedContent::Internal::SetTriggerStateTransitions_::_1_::dtor$10 @ 0x1800D16DF (_Windows--Services--TargetedContent--Internal--SetTriggerStateTransitions_--_1_--dtor$10.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$4 @ 0x1800D39A9 (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_1800D39A9.c)
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$8 @ 0x1800D416F (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___ea_1800D416F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::basic_streambuf<unsigned short>::~basic_streambuf<unsigned short,std::char_traits<unsigned short>>(
        _QWORD *a1)
{
  _QWORD *v1; // rbx
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  v1 = (_QWORD *)a1[12];
  *a1 = &std::wstreambuf::`vftable';
  if ( v1 )
  {
    if ( *v1 )
    {
      v2 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 16LL))(*v1);
      if ( v2 )
        (**v2)(v2, 1LL);
    }
    operator delete(v1);
  }
}
