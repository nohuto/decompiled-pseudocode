/*
 * XREFs of ??$com_query@UIViewGroupInternal@@AEAPEAUIViewGroup@@@wil@@YA?AV?$com_ptr_t@UIViewGroupInternal@@Uerr_exception_policy@wil@@@0@AEAPEAUIViewGroup@@@Z @ 0x1800AB5FC
 * Callers:
 *     ?DestroyViewGroup@ViewGroupManager@@UEAAJPEAUIViewGroup@@@Z @ 0x18028BD60 (-DestroyViewGroup@ViewGroupManager@@UEAAJPEAUIViewGroup@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::com_query<IViewGroupInternal,IViewGroup * &>(__int64 a1, _QWORD *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64))*a2)(*a2, &GUID_f7adf705_a915_45dd_87de_662eaf26c510, a1);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      5495LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  return a1;
}
