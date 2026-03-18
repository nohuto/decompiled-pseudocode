/*
 * XREFs of ?_UpdateWindowRole@CWindowGroup@@AAE?AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F8AF
 * Callers:
 *     _lambda_1c3d49064923e57234eebd0c1aed86d1_::operator() @ 0x19E983 (_lambda_1c3d49064923e57234eebd0c1aed86d1_--operator().c)
 *     _lambda_6b132068d456328099b9be1436a530a1_::operator() @ 0x19EA98 (_lambda_6b132068d456328099b9be1436a530a1_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7 (-_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OP.c)
 * Callees:
 *     ?_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F6D5 (-_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

int __thiscall CWindowGroup::_UpdateWindowRole(_DWORD *this, int a2, int a3)
{
  int v4; // eax
  int WindowFromRole; // eax

  v4 = *(_DWORD *)(a2 + 12);
  if ( v4 == a3 )
    return 1;
  if ( v4 )
  {
    this[v4 + 6] = 0;
    *(_DWORD *)(a2 + 12) = 0;
  }
  WindowFromRole = CWindowGroup::_GetWindowFromRole(this, a3);
  if ( WindowFromRole )
    *(_DWORD *)(WindowFromRole + 12) = 0;
  *(_DWORD *)(a2 + 12) = a3;
  if ( a3 )
    this[a3 + 6] = *(unsigned __int16 *)(a2 + 8);
  return 0;
}
