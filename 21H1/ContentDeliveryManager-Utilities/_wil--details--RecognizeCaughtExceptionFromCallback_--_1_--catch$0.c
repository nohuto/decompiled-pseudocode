/*
 * XREFs of _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x1800CC4F3
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800041A0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch_0(__int64 a1, __int64 a2)
{
  wchar_t *v3; // rbx
  __int64 v4; // rax
  int v5; // eax

  v3 = *(wchar_t **)(a2 + 64);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 8LL))(*(_QWORD *)(a2 + 40));
    StringCchPrintfW(v3, *(_QWORD *)(a2 + 72), L"std::exception: %hs", v4);
  }
  v5 = *(_DWORD *)(a2 + 80);
  if ( v5 >= 0 )
    v5 = -2147024322;
  *(_DWORD *)(a2 + 80) = v5;
  return &loc_1800050AB;
}
