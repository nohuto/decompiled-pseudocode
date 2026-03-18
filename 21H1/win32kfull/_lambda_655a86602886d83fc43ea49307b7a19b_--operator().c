/*
 * XREFs of _lambda_655a86602886d83fc43ea49307b7a19b_::operator() @ 0x19EA6C
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___ @ 0x19E8BD (CWindowGroupManager--_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___.c)
 * Callees:
 *     ?_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OPTIONS@@@Z @ 0x19F7F7 (-_UpdateWindowInternal@CWindowGroup@@AAE_NPAVCWindow@@W4GROUP_WINDOW_ROLE@@W4SET_WINDOW_GROUP_OP.c)
 */

int __thiscall lambda_655a86602886d83fc43ea49307b7a19b_::operator()(_DWORD *this, int a2)
{
  return (unsigned __int8)CWindowGroup::_UpdateWindowInternal(*this, a2, this[2], this[1]) != 0 ? 0 : -1073741823;
}
