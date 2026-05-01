/*
 * XREFs of ?GetCurrentTextSelectionRect@TouchKeyboardExperienceManager@@UEAAJPEAUtagRECT@@@Z @ 0x180329210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18033C3E4 (-GetCurrentTextSelectionRect@TabTipAdapter@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::GetCurrentTextSelectionRect(
        TouchKeyboardExperienceManager *this,
        struct tagRECT *a2)
{
  KeyboardHosting::TabTipAdapter *v2; // rcx
  int CurrentTextSelectionRect; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 61);
  if ( !v2 )
  {
    CurrentTextSelectionRect = -2147467259;
    v4 = 3474LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)CurrentTextSelectionRect);
    return (unsigned int)CurrentTextSelectionRect;
  }
  CurrentTextSelectionRect = KeyboardHosting::TabTipAdapter::GetCurrentTextSelectionRect(v2, a2);
  if ( CurrentTextSelectionRect < 0 )
  {
    v4 = 3475LL;
    goto LABEL_3;
  }
  return 0LL;
}
