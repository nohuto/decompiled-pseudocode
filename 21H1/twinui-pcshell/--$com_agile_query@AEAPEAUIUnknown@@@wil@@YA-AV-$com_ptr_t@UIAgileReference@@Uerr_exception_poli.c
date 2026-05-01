/*
 * XREFs of ??$com_agile_query@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@W4AgileReferenceOptions@@@Z @ 0x180121868
 * Callers:
 *     ?Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x18012AE3C (-Register@AgileRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::com_agile_query<IUnknown * &>(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // r8
  int AgileReference; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, v3, a1);
  if ( AgileReference < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1659LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)AgileReference);
    __debugbreak();
  }
  return a1;
}
