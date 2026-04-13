/*
 * XREFs of ??1?$basic_istream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x180035540
 * Callers:
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$4 @ 0x1800D04D4 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned.c)
 *     _ToastNotification::ActivityToastNotificationCallback::GetNotificationParameters_::_1_::dtor$21 @ 0x1800D1CD6 (_ToastNotification--ActivityToastNotificationCallback--GetNotificationParameters_--_1_--dtor$21.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$1 @ 0x1800D61AC (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_1800D61AC.c)
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$4 @ 0x1800D6972 (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___ea_1800D6972.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_istream<unsigned short>::~basic_istream<unsigned short,std::char_traits<unsigned short>>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 24) + 4LL) + a1 - 24) = &std::basic_istream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 24);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 28) = *(_DWORD *)(result + 4) - 24;
  return result;
}
