/*
 * XREFs of CWindowGroupManager::_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___ @ 0x19E86C
 * Callers:
 *     ?HandleWindowInGroupDestruction@CWindowGroupManager@@QAEXPAUtagWND@@@Z @ 0x19F245 (-HandleWindowInGroupDestruction@CWindowGroupManager@@QAEXPAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_d62072de4026e54394810d48c60d742e___ @ 0x19E6E7 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_d62072de4026e54394810d48c60d7.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 *     _lambda_1c3d49064923e57234eebd0c1aed86d1_::operator() @ 0x19E983 (_lambda_1c3d49064923e57234eebd0c1aed86d1_--operator().c)
 */

int __thiscall CWindowGroupManager::_ExecuteGroupAction__lambda_57cc7dbb9ba0774bf0b9dad19f24d5d8___(
        void *this,
        int *a2,
        int ***a3)
{
  int Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // eax
  struct CWindow *Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e; // eax

  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___(
                                                                                           (int)this + 8,
                                                                                           *a2,
                                                                                           a2,
                                                                                           (int)this);
  if ( !Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 )
    return -1073741275;
  a2 = **a3;
  Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e___(
                                                                                                 Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084
                                                                                               + 16,
                                                                                                 (unsigned __int16)a2,
                                                                                                 &a2,
                                                                                                 (int)a2);
  if ( Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e )
    lambda_1c3d49064923e57234eebd0c1aed86d1_::operator()(Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e);
  return 0;
}
