/*
 * XREFs of CWindowGroupManager::_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___ @ 0x19E8BD
 * Callers:
 *     ?UpdateWindowInGroup@CWindowGroupManager@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F66A (-UpdateWindowInGroup@CWindowGroupManager@@QAEJPAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WIN.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_d62072de4026e54394810d48c60d742e___ @ 0x19E6E7 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_d62072de4026e54394810d48c60d7.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 *     _lambda_655a86602886d83fc43ea49307b7a19b_::operator() @ 0x19EA6C (_lambda_655a86602886d83fc43ea49307b7a19b_--operator().c)
 */

int __thiscall CWindowGroupManager::_ExecuteGroupAction__lambda_951217d13ca0ee100fcd06e96d7215d9___(
        void *this,
        int *a2,
        int a3)
{
  int Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // eax
  int Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e; // eax
  int v6; // [esp+Ch] [ebp-4h]

  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___(
                                                                                           (int)this + 8,
                                                                                           *a2,
                                                                                           a2,
                                                                                           (int)this);
  if ( Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084
    && (v6 = *(_DWORD *)(a3 + 8),
        a2 = **(int ***)a3,
        (Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e = anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e___(
                                                                                      Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084
                                                                                    + 16,
                                                                                      (unsigned __int16)a2,
                                                                                      &a2,
                                                                                      v6)) != 0) )
  {
    return lambda_655a86602886d83fc43ea49307b7a19b_::operator()(Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e);
  }
  else
  {
    return -1073741275;
  }
}
