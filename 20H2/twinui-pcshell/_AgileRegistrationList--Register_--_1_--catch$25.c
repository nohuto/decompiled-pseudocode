/*
 * XREFs of _AgileRegistrationList::Register_::_1_::catch$25 @ 0x18014F46A
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801503F8 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AgileRegistrationList::Register_::_1_::catch_25(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0x1E,
                           (unsigned int)"internal\\shell\\private\\inc\\agileregistrationlist.h",
                           a4);
  return 0LL;
}
