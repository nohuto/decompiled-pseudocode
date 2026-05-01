/*
 * XREFs of ?EnableMarshalByValue@OS@@YAXPEAUIUnknown@@@Z @ 0x1803ACEE4
 * Callers:
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x1803A94B0 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091B88 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query@UIMarshalingBehaviorControl@Detail@Collections@Foundation@Windows@@AEAPEAUIUnknown@@@wil@@YA?AV?$com_ptr_t@UIMarshalingBehaviorControl@Detail@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@0@AEAPEAUIUnknown@@@Z @ 0x1800A6F98 (--$com_query@UIMarshalingBehaviorControl@Detail@Collections@Foundation@Windows@@AEAPEAUIUnknown@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall OS::EnableMarshalByValue(OS *this, struct IUnknown *a2)
{
  _QWORD *v2; // rax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  OS *v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v5 = this;
  v2 = (_QWORD *)wil::com_query<Windows::Foundation::Collections::Detail::IMarshalingBehaviorControl,IUnknown * &>(
                   (__int64)&v6,
                   &v5);
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v2 + 48LL))(*v2, 1LL);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      7LL,
      (__int64)"pcshell\\twinui\\apppositioner\\lib\\unittestoverride.cpp",
      (const char *)(unsigned int)v3);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
}
