/*
 * XREFs of ?HideVisibleAppWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4PROCESS_HIDE_OPTION_HOW@2@@Z @ 0x18017E544
 * Callers:
 *     ?_HideApplication@CImmersiveApp@@AEAA?AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x18018329C (-_HideApplication@CImmersiveApp@@AEAA-AW4HIDE_WINDOW_RESULT@1@W4PROCESS_HIDE_OPTION_HOW@1@@Z.c)
 * Callees:
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18017E4D4 (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z @ 0x180181658 (-SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@@Z.c)
 *     ?_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z @ 0x18018392C (-_SetWindowVisibilityOptions@CImmersiveWindowCollection@CImmersiveApp@@AEAAXK@Z.c)
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::HideVisibleAppWindow(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  HWND v4; // rdx

  v2 = a2;
  if ( a2 )
  {
    a2 = 2;
    if ( v2 == 2 )
      a2 = 10;
  }
  CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
    (CImmersiveApp::CImmersiveWindowCollection *)a1,
    a2);
  *(_BYTE *)(a1 + 200) = 0;
  CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)a1);
  CImmersiveApp::CImmersiveWindowCollection::_SetWindowVisibilityOptions(
    (CImmersiveApp::CImmersiveWindowCollection *)a1,
    0);
  v4 = *(HWND *)(a1 + 136);
  if ( v4 )
    CImmersiveApp::CImmersiveWindowCollection::SetApplicationWindow((CImmersiveApp::CImmersiveWindowCollection *)a1, v4);
}
