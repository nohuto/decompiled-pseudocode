/*
 * XREFs of ?OnComboButtonRegistryComplete@ButtonRecognizer@@AEAAJIPEAUtagMsgRoutingInfo@@@Z @ 0x18017393C
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x180173B7C (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ButtonRecognizer::OnComboButtonRegistryComplete(
        ButtonRecognizer *this,
        int a2,
        struct tagMsgRoutingInfo *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v8; // rcx
  __int16 v9; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v11 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct tagMsgRoutingInfo *, __int64 *))(**((_QWORD **)this + 20) + 112LL))(
         *((_QWORD *)this + 20),
         a3,
         &v11);
  if ( v5 < 0 )
  {
    v6 = 342LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\but"
               "tonrecognizer.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v8 = *((_QWORD *)this + 24);
  v12 = v11;
  v9 = 1;
  v5 = CoreUICallSend(v8, &v12, 1LL, 1LL, v9, &unk_1801C62DF, a2);
  if ( v5 < 0 )
  {
    v6 = 347LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 160LL))(*((_QWORD *)this + 20), v11);
  return 0LL;
}
