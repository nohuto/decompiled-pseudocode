/*
 * XREFs of ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0241AC8
 * Callers:
 *     _lambda_a3dfffe89e22da34bf9580289d018c81_::operator() @ 0x1C0240A40 (_lambda_a3dfffe89e22da34bf9580289d018c81_--operator().c)
 *     _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C0240ADC (_lambda_e3bb960287ece658ac40c5b32ccf215b_--operator().c)
 *     ?_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x1C0241C9C (-_UpdateWindowInternal@CWindowGroup@@AEAA_NPEAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0241D98 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_unsigned___int64_&__lambda_2fb0f55aa2f359ee3c6857a28b7c01d0___ @ 0x1C0240400 (_anonymous_namespace_--FindObject_CWindow_unsigned___int64_-__lambda_2fb0f55aa2f359ee3c6857a28b7.c)
 */

__int64 __fastcall CWindowGroup::_GetWindowFromRole(__int64 a1, int a2)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 8LL * (unsigned int)(a2 - 1) + 40);
    v5 = v3;
    if ( v3 )
      return anonymous_namespace_::FindObject_CWindow_unsigned___int64____lambda_2fb0f55aa2f359ee3c6857a28b7c01d0___(
               a1 + 24,
               v3,
               &v5);
  }
  return v2;
}
