/*
 * XREFs of CWindowGroupManager::_ExecuteGroupAction__lambda_fe5adaad091bae322a0ae467cfe968c7___ @ 0x19E91D
 * Callers:
 *     ?GetGroupActiveWindow@CWindowGroupManager@@QAEPAUtagWND@@PAU2@W4GetWindowForActivationOption@WindowGroupingWindowManagement@@@Z @ 0x19F0FC (-GetGroupActiveWindow@CWindowGroupManager@@QAEPAUtagWND@@PAU2@W4GetWindowForActivationOption@Win.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 *     ?GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z @ 0x19F137 (-GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z.c)
 */

int __thiscall CWindowGroupManager::_ExecuteGroupAction__lambda_fe5adaad091bae322a0ae467cfe968c7___(
        void *this,
        int *a2,
        int a3)
{
  CWindowGroup *Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // eax

  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = (CWindowGroup *)anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___((int)this + 8, *a2, a2, (int)this);
  if ( !Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 )
    return -1073741275;
  **(_DWORD **)(a3 + 4) = CWindowGroup::GetWindowForActivationWithFallbackLogic(
                            Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084,
                            *(const struct tagWND **)a3);
  return 0;
}
