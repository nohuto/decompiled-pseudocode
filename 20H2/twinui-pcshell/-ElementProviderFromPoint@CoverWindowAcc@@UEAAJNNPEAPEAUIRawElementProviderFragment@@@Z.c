/*
 * XREFs of ?ElementProviderFromPoint@CoverWindowAcc@@UEAAJNNPEAPEAUIRawElementProviderFragment@@@Z @ 0x18041B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CoverWindowAcc::ElementProviderFromPoint(
        __int64 (__fastcall ***this)(char *, GUID *, struct IRawElementProviderFragment **),
        double a2,
        double a3,
        struct IRawElementProviderFragment **a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (**(this - 2))((char *)this - 16, &GUID_f7063da8_8359_439c_9297_bbc5299a7d87, a4);
  v5 = v4;
  if ( v4 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x102,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\coverwindowacc.cpp",
      (const char *)(unsigned int)v4);
  return v5;
}
