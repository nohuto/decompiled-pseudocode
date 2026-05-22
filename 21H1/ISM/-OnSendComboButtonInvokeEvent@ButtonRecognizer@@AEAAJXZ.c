/*
 * XREFs of ?OnSendComboButtonInvokeEvent@ButtonRecognizer@@AEAAJXZ @ 0x180173EDC
 * Callers:
 *     _lambda_f1854fe2ac21130f928d03576a8a1bbe_::_lambda_invoker_cdecl_ @ 0x180172240 (_lambda_f1854fe2ac21130f928d03576a8a1bbe_--_lambda_invoker_cdecl_.c)
 *     ?DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z @ 0x180173448 (-DetectComboButton@ButtonRecognizer@@QEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::OnSendComboButtonInvokeEvent(ButtonRecognizer *this)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v6; // rcx
  __int16 v7; // [rsp+20h] [rbp-28h]
  int v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 20);
  v10 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, char *, __int64 *))(*(_QWORD *)v2 + 112LL))(v2, (char *)this + 112, &v10);
  if ( v3 < 0 )
  {
    v4 = 315LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v6 = *((_QWORD *)this + 24);
  v8 = *((_DWORD *)this + 18);
  v11 = v10;
  v7 = 0;
  v3 = CoreUICallSend(v6, &v11, 1LL, 1LL, v7, &unk_1801C72AF, v8);
  if ( v3 < 0 )
  {
    v4 = 320LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 160LL))(*((_QWORD *)this + 20), v10);
  return 0LL;
}
