/*
 * XREFs of ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x18002A880
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x18002B43C (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x18002BB04 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x1800F4DA0 (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CKst::UpdateMMCSSTask(CKst *this)
{
  char v2; // bl
  _DWORD *v3; // rcx
  CMmcssTask *v4; // rcx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  char v9; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-40h] BYREF
  char *v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+60h] [rbp-18h]
  int v13; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_BYTE *)(*((_QWORD *)this + 5) + 416LL);
  v3 = *(_DWORD **)(wil::details::static_lazy<InputTraceLogging>::get(
                      this,
                      _lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v3 > 4u )
  {
    if ( (unsigned __int8)tlgKeywordOn(v3, 2LL) )
    {
      v13 = 0;
      v11 = &v9;
      v9 = v2;
      v12 = 1;
      tlgWriteTransfer_EventWriteTransfer(v8, (unsigned __int8 *)dword_18037385A, 0LL, 0LL, 3u, &v10);
    }
  }
  v4 = (CMmcssTask *)*((_QWORD *)this + 6);
  if ( !v2 )
  {
    CMmcssTask::Revert(v4);
    return 0LL;
  }
  v6 = CMmcssTask::Apply(v4, 1);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
