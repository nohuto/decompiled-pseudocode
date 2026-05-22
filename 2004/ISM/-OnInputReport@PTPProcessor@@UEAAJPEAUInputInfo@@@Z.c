/*
 * XREFs of ?OnInputReport@PTPProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801997B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PTPProcessor::OnInputReport(PTPProcessor *this, struct InputInfo *a2, __int64 a3, const char *a4)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_DWORD *)a2 == 4 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 48LL))(*((_QWORD *)this + 3));
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        78LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
        (const char *)(unsigned int)v5);
      __debugbreak();
    }
  }
  else
  {
    if ( *(_DWORD *)a2 != 4096 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        83LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
        a4);
      __debugbreak();
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2));
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        73LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\ptp\\lib\\ptpprocessor.cpp",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
  }
  return 0LL;
}
