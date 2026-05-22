/*
 * XREFs of ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180136580
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801212C0 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000B0D0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@InputContext@@SAJPEAPEAV1@@Z @ 0x180023DF4 (-Create@InputContext@@SAJPEAPEAV1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonPointerProcessor::OnInputReport(NonPointerProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD, char *); // rdi
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*((_BYTE *)this + 64) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
    if ( !v4 )
    {
      v5 = -2147418113;
      v6 = 112LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
    v8 = (_QWORD *)((char *)this + 56);
    v9 = *((_QWORD *)this + 7);
    if ( v9 )
    {
      *v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v5 = InputContext::Create((struct InputContext **)this + 7);
    if ( v5 < 0 )
    {
      v6 = 114LL;
      goto LABEL_4;
    }
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v4 + 64LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
    v5 = v10(v4, *((_QWORD *)this + 5), *v8, 0LL, (char *)this + 48);
    if ( v5 < 0 )
    {
      v6 = 119LL;
      goto LABEL_4;
    }
    *((_BYTE *)this + 64) = 1;
  }
  v11 = *((_QWORD *)this + 6);
  if ( v11 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v11 + 24LL))(v11, a2);
    if ( v5 < 0 )
    {
      v6 = 126LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
