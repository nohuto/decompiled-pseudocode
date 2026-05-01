/*
 * XREFs of ?OnDpiChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18034DDFC
 * Callers:
 *     wistd::__function::__func__lambda_424c7a2ae6e84db4177d67b8ac1f856f__void___cdecl(void)_::operator() @ 0x1800B0340 (wistd--__function--__func__lambda_424c7a2ae6e84db4177d67b8ac1f856f__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002BAC8 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180368830 (-HandleDpiChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAW4ShellRequestType@Text@Shell@Int.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnDpiChanged(TouchKeyboardExperienceManager *this)
{
  KeyboardHosting::TabTipAdapter *v1; // rdi
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (KeyboardHosting::TabTipAdapter *)*((_QWORD *)this + 86);
  if ( !v1 )
    return 0LL;
  v2 = KeyboardHosting::TabTipAdapterPolicy::HandleDpiChanged(
         (KeyboardHosting::TabTipAdapterPolicy *)(*((_QWORD *)v1 + 13) + 16LL),
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v7);
  v3 = v2;
  if ( v2 < 0 )
  {
    v4 = 2221LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_9;
  }
  if ( v7 == 3 )
  {
    v2 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate(v1);
    v3 = v2;
    if ( v2 < 0 )
    {
      v4 = 2224LL;
      goto LABEL_4;
    }
  }
  v3 = 0;
LABEL_9:
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA29,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  return 0LL;
}
