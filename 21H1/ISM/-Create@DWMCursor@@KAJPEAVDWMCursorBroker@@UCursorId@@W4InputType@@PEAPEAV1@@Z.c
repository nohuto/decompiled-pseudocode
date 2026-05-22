/*
 * XREFs of ?Create@DWMCursor@@KAJPEAVDWMCursorBroker@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180021FA0
 * Callers:
 *     ?CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z @ 0x180025C20 (-CreateCursor@DWMCursorBroker@@UEAAJPEAUDeviceInfo@@KPEAPEAUICursor@@@Z.c)
 * Callees:
 *     ??0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z @ 0x180021EB8 (--0DWMCursor@@IEAA@PEAVDWMCursorBroker@@W4InputType@@UCursorId@@@Z.c)
 *     ?RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestCommandMessageDataHeader@@@ZAEAVCommandRegistrationToken@1@@Z @ 0x1800227CC (-RegisterForTestCommandMessage@TestCommandHost@@SAXW4TestCommandMessageType@@PEAXQ6A_N1PEAUTestC.c)
 *     ?CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z @ 0x18002283C (-CheckAndUpdateDpiScale@DWMCursor@@AEAAJ_N@Z.c)
 *     ?RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z @ 0x18002346C (-RegisterCursor@DWMCursorBroker@@QEAAJPEAVDWMCursor@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002836C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003FAC8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall DWMCursor::Create(__int64 a1, __int64 a2, int a3, __int64 *a4)
{
  void *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v16; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a4 )
  {
    v14 = -2147024809;
    v15 = 81LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)v14,
      v16);
    return v14;
  }
  *a4 = 0LL;
  v8 = RefCountedObject::operator new(0x150uLL);
  if ( v8 )
    v10 = DWMCursor::DWMCursor((__int64)v8, a1, a3, a2);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v14 = -2147024882;
    v15 = 94LL;
    goto LABEL_13;
  }
  TestCommandHost::RegisterForTestCommandMessage(
    v9,
    v10,
    lambda_c739a78b7ff0a2fdc5f9b94b3ac1dde9_::_lambda_invoker_cdecl_,
    v10 + 128);
  v11 = DWMCursor::CheckAndUpdateDpiScale((DWMCursor *)v10, 0);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x30,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v11,
      v16);
  v12 = DWMCursorBroker::RegisterCursor(*(DWMCursorBroker **)(v10 + 32), (struct DWMCursor *)v10);
  *(_BYTE *)(v10 + 49) = v12 >= 0;
  if ( v12 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x32,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
      (const char *)(unsigned int)v12,
      v16);
  *a4 = v10;
  return 0LL;
}
