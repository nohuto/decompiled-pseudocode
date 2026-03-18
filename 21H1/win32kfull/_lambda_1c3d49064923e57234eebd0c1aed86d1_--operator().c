/*
 * XREFs of _lambda_1c3d49064923e57234eebd0c1aed86d1_::operator() @ 0x19E983
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___ @ 0x19E86C (CWindowGroupManager--_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___.c)
 * Callees:
 *     ?_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F6D5 (-_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AAEXPAVCWindow@@@Z @ 0x19F6FF (-_RemoveWindowAction@CWindowGroup@@AAEXPAVCWindow@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x19F7A9 (-_TemplateWindow@CWindowGroup@@AAE_NPAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AAE?AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F8AF (-_UpdateWindowRole@CWindowGroup@@AAE-AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

int __thiscall lambda_1c3d49064923e57234eebd0c1aed86d1_::operator()(CWindowGroup **this, struct CWindow *a2)
{
  int WindowFromRole; // eax
  int v4; // ebx

  if ( *((_DWORD *)a2 + 3) == 1 )
  {
    WindowFromRole = CWindowGroup::_GetWindowFromRole(*this, 2);
    v4 = WindowFromRole;
    if ( WindowFromRole )
    {
      if ( (unsigned __int8)CWindowGroup::_TemplateWindow(WindowFromRole, a2, 1) )
        CWindowGroup::_UpdateWindowRole(*this, v4, 1);
    }
  }
  CWindowGroup::_RemoveWindowAction(*this, a2);
  return 0;
}
