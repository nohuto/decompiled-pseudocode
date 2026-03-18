/*
 * XREFs of _lambda_6b132068d456328099b9be1436a530a1_::operator() @ 0x19EA98
 * Callers:
 *     ?GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z @ 0x19F137 (-GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z.c)
 * Callees:
 *     ?CanTransferForeground@CWindow@@QBE_NXZ @ 0x19ED3A (-CanTransferForeground@CWindow@@QBE_NXZ.c)
 *     ?_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F6D5 (-_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x19F7A9 (-_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AAE?AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F8AF (-_UpdateWindowRole@CWindowGroup@@AAE-AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

int __thiscall lambda_6b132068d456328099b9be1436a530a1_::operator()(_DWORD *this, CWindow *a2)
{
  int v3; // ebx
  bool CanTransferForeground; // al

  if ( *((_DWORD *)a2 + 3) != 1 )
    return -1073740759;
  v3 = 0;
  *(_DWORD *)this[2] = CWindowGroup::_GetWindowFromRole(*this, 2);
  if ( *(_DWORD *)this[2] )
  {
    CanTransferForeground = CWindow::CanTransferForeground(a2);
    if ( (unsigned __int8)CWindowGroup::_TemplateWindow(*(_DWORD *)this[2], a2, !CanTransferForeground) )
      CWindowGroup::_UpdateWindowRole(*this, *(_DWORD *)this[2], 1);
    else
      *(_BYTE *)this[1] = 0;
  }
  return v3;
}
