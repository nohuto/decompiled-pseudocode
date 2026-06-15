/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x1800408DD
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800025EC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_4(__int64 a1, __int64 a2)
{
  wchar_t *v3; // rbx
  __int64 v4; // rax

  v3 = *(wchar_t **)(a2 + 32);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 80) + 8LL))(*(_QWORD *)(a2 + 80));
    StringCchPrintfW(v3, *(_QWORD *)(a2 + 40), L"std::exception: %hs", v4);
  }
  return 0LL;
}
