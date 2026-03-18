/*
 * XREFs of CWindowGroupManager::_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___ @ 0x19E81D
 * Callers:
 *     ?RemoveWindowFromGroup@CWindowGroupManager@@QAEJPAUtagWND@@@Z @ 0x19F464 (-RemoveWindowFromGroup@CWindowGroupManager@@QAEJPAUtagWND@@@Z.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_d62072de4026e54394810d48c60d742e___ @ 0x19E6E7 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_d62072de4026e54394810d48c60d7.c)
 *     _anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const_&__lambda_f2dd16d494ad0eaf0573328fa7853084___ @ 0x19E782 (_anonymous_namespace_--FindObject_CWindowGroup_WINDOW_GROUP_ID_const_-__lambda_f2dd16d494ad0eaf0.c)
 *     ?_RemoveWindowAction@CWindowGroup@@AAEXPAVCWindow@@@Z @ 0x19F6FF (-_RemoveWindowAction@CWindowGroup@@AAEXPAVCWindow@@@Z.c)
 */

int __thiscall CWindowGroupManager::_ExecuteGroupAction__lambda_10653f091205cdfaef55327f2586c792___(
        void *this,
        int *a2,
        int ***a3)
{
  CWindowGroup *Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084; // esi
  struct CWindow *Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e; // eax

  Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 = (CWindowGroup *)anonymous_namespace_::FindObject_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084___((int)this + 8, *a2, a2, (int)this);
  if ( !Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084 )
    return -1073741275;
  a2 = **a3;
  Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e = (struct CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e___(
                                                                                                 (int)Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084
                                                                                               + 16,
                                                                                                 (unsigned __int16)a2,
                                                                                                 &a2,
                                                                                                 (int)a2);
  if ( !Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e )
    return -1073741275;
  CWindowGroup::_RemoveWindowAction(
    Object_CWindowGroup_WINDOW_GROUP_ID_const____lambda_f2dd16d494ad0eaf0573328fa7853084,
    Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e);
  return 0;
}
