/*
 * XREFs of ?SetSite@CopyToViewValueSetBase@@UEAAJPEAUIUnknown@@@Z @ 0x1803AEDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18008887C (-reset@-$com_ptr_t@UIThreadPoolTimer@Threading@System@Windows@@Uerr_exception_policy@wil@@@wil@@.c)
 */

__int64 __fastcall CopyToViewValueSetBase::SetSite(CopyToViewValueSetBase *this, struct IUnknown *a2)
{
  _QWORD *v2; // rbx
  int AgileReference; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_QWORD *)((char *)this + 64);
  wil::com_ptr_t<Windows::System::Threading::IThreadPoolTimer,wil::err_exception_policy>::reset((__int64 *)this + 8);
  if ( a2 )
  {
    AgileReference = RoGetAgileReference(0LL, &GUID_00000000_0000_0000_c000_000000000046, a2, v2);
    v5 = AgileReference;
    if ( AgileReference < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B7,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)AgileReference);
  }
  else
  {
    *v2 = 0LL;
    return 0;
  }
  return v5;
}
