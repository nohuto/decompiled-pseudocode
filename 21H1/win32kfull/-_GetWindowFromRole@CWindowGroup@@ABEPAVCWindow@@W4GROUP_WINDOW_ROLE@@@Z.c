/*
 * XREFs of ?_GetWindowFromRole@CWindowGroup@@ABEPAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F6D5
 * Callers:
 *     _lambda_1c3d49064923e57234eebd0c1aed86d1_::operator() @ 0x19E983 (_lambda_1c3d49064923e57234eebd0c1aed86d1_--operator().c)
 *     _lambda_6b132068d456328099b9be1436a530a1_::operator() @ 0x19EA98 (_lambda_6b132068d456328099b9be1436a530a1_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7 (-_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OP.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AAE?AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F8AF (-_UpdateWindowRole@CWindowGroup@@AAE-AW4UpdateRoleResult@1@PAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_unsigned_long_&__lambda_677c6ff647d78065f7a42f926ec355a9___ @ 0x19E64B (_anonymous_namespace_--FindObject_CWindow_unsigned_long_-__lambda_677c6ff647d78065f7a42f926ec355.c)
 */

int __thiscall CWindowGroup::_GetWindowFromRole(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx

  result = 0;
  if ( a2 )
  {
    v3 = this[a2 + 6];
    a2 = v3;
    if ( v3 )
      return anonymous_namespace_::FindObject_CWindow_unsigned_long____lambda_677c6ff647d78065f7a42f926ec355a9___(
               (int)(this + 4),
               v3,
               &a2,
               (int)this);
  }
  return result;
}
