/*
 * XREFs of _lambda_e3bb960287ece658ac40c5b32ccf215b_::operator() @ 0x1C023F83C
 * Callers:
 *     ?HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z @ 0x1C0240140 (-HandleWindowDestruction@WindowGroupingWindowManagement@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ?_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0240828 (-_GetWindowFromRole@CWindowGroup@@AEBAPEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z @ 0x1C0240868 (-_RemoveWindowAction@CWindowGroup@@AEAAXPEAVCWindow@@@Z.c)
 *     ?_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z @ 0x1C024097C (-_TemplateWindow@CWindowGroup@@AEAA_NPEAVCWindow@@0W4TemplateWindowOptions@@@Z.c)
 *     ?_UpdateWindowRole@CWindowGroup@@AEAA?AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C0240AF8 (-_UpdateWindowRole@CWindowGroup@@AEAA-AW4UpdateRoleResult@1@PEAVCWindow@@W4GROUP_WINDOW_ROLE@@@Z.c)
 */

__int64 __fastcall lambda_e3bb960287ece658ac40c5b32ccf215b_::operator()(CWindowGroup **a1, struct CWindow *a2)
{
  __int64 WindowFromRole; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi

  if ( *((_DWORD *)a2 + 6) == 1 )
  {
    WindowFromRole = CWindowGroup::_GetWindowFromRole(*a1, 2LL);
    v6 = WindowFromRole;
    if ( WindowFromRole )
    {
      if ( (unsigned __int8)CWindowGroup::_TemplateWindow(v5, WindowFromRole, a2, 1LL) )
        CWindowGroup::_UpdateWindowRole(*a1, v6, 1LL);
    }
  }
  CWindowGroup::_RemoveWindowAction(*a1, a2);
  return 0LL;
}
