/*
 * XREFs of ?OnInputReport@DockProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180188150
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18012691C (-OnKeyboardDockInput@KeyboardDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 */

__int64 __fastcall DockProcessor::OnInputReport(__int64 ***this, struct InputInfo *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_WORD *)a2 + 28) != 1 )
    return 0LL;
  if ( *((_WORD *)a2 + 29) != 6 )
    return 0LL;
  v2 = KeyboardDockServer::OnKeyboardDockInput(this[9], a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\dock\\lib\\dockprocessor.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
