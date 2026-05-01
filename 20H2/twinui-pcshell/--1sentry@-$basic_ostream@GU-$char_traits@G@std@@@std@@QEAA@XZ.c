/*
 * XREFs of ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x18024CAA8
 * Callers:
 *     _std::operator___unsigned_short_std::char_traits_unsigned_short____::_1_::dtor$0 @ 0x180248E27 (_std--operator___unsigned_short_std--char_traits_unsigned_short____--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::basic_ostream<unsigned short>::sentry::~sentry(_QWORD *a1)
{
  __int64 result; // rax
  __int64 v3; // rax

  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(*a1);
  result = std::basic_ios<unsigned short>::rdbuf(*a1 + *(int *)(*(_QWORD *)*a1 + 4LL));
  if ( result )
  {
    v3 = std::basic_ios<unsigned short>::rdbuf(*a1 + *(int *)(*(_QWORD *)*a1 + 4LL));
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
