/*
 * XREFs of ?GetRootElement@CMultitaskingViewFrame@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180399C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMultitaskingViewFrame::GetRootElement(
        CMultitaskingViewFrame *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 (__fastcall ***v3)(_QWORD, const struct _GUID *); // rcx
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v3 = (__int64 (__fastcall ***)(_QWORD, const struct _GUID *))*((_QWORD *)this + 311);
  if ( !v3 )
  {
    v4 = -2147023728;
    v5 = 66LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
      (const char *)v4);
    return v4;
  }
  v4 = (**v3)(v3, a2);
  if ( (v4 & 0x80000000) != 0 )
  {
    v5 = 67LL;
    goto LABEL_5;
  }
  return v4;
}
