/*
 * XREFs of ??$com_weak_query_failfast@PEAVTabViewManager@@@wil@@YA?AV?$com_ptr_t@UIWeakReference@@Uerr_failfast_policy@wil@@@0@$$QEAPEAVTabViewManager@@@Z @ 0x180246B00
 * Callers:
 *     ?RuntimeClassInitialize@TabViewManager@@QEAAJXZ @ 0x180255724 (-RuntimeClassInitialize@TabViewManager@@QEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18011C428 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetWeakReference@VTabViewManager@@@details@wil@@YAJPEAVTabViewManager@@PEAPEAUIWeakReference@@@Z @ 0x180242030 (--$GetWeakReference@VTabViewManager@@@details@wil@@YAJPEAVTabViewManager@@PEAPEAUIWeakReference@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::com_weak_query_failfast<TabViewManager *>(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rbx
  int Weak; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = *a2;
  *a1 = 0LL;
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset(a1);
  Weak = wil::details::GetWeakReference<TabViewManager>(v3, a1);
  if ( Weak < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1785LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
      (const char *)(unsigned int)Weak);
    __debugbreak();
  }
  return a1;
}
