/*
 * XREFs of ?OnDpiScaleChanged@DWMCursor@@AEAAJXZ @ 0x18019CA34
 * Callers:
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x1800228CC (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z @ 0x18019BD3C (-SendAndVerifyEndpoints@DWMCursorBroker@@AEAAJPEAUCursorMessage@@@Z.c)
 */

__int64 __fastcall DWMCursor::OnDpiScaleChanged(DWMCursor *this)
{
  DWMCursorBroker *v1; // rdi
  __int64 v2; // rax
  int v3; // ebx
  int v4; // eax
  int v5; // ebx
  int v7; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+24h] [rbp-44h]
  int v9; // [rsp+30h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v11; // [rsp+70h] [rbp+8h] BYREF

  v1 = (DWMCursorBroker *)*((_QWORD *)this + 4);
  if ( !v1 )
    return 0LL;
  v2 = *(_QWORD *)this;
  v3 = *((_DWORD *)this + 22);
  LOBYTE(v7) = 9;
  v8 = *(_QWORD *)(*(__int64 (__fastcall **)(DWMCursor *, char *))(v2 + 40))(this, &v11);
  v9 = v3;
  v4 = DWMCursorBroker::SendAndVerifyEndpoints(v1, (struct CursorMessage *)&v7);
  v5 = v4;
  if ( v4 >= 0 )
    v5 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C9,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v4);
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1B0,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
