/*
 * XREFs of ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18032C1D8
 * Callers:
 *     ?InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x1800A3EB4 (-InitializeTabTipAdapter@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x18032CF00 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x180331F10 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x18002B288 (-RequestPositionAndSizeUpdate@TabTipAdapter@KeyboardHosting@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180347170 (-HandleConvertibleSlateModeChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJEPEAW4ShellRequestT.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged(TouchKeyboardExperienceManager *this)
{
  int SystemMetrics; // eax
  __int64 v3; // rdi
  KeyboardHosting::TabTipAdapterPolicy *v4; // rcx
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 86) )
    return 0LL;
  SystemMetrics = GetSystemMetrics(8195);
  v3 = *((_QWORD *)this + 86);
  v4 = *(KeyboardHosting::TabTipAdapterPolicy **)(v3 + 104);
  *(_BYTE *)(v3 + 318) = SystemMetrics != 0;
  v5 = KeyboardHosting::TabTipAdapterPolicy::HandleConvertibleSlateModeChanged(
         v4,
         SystemMetrics != 0,
         (enum Windows::Internal::Shell::Text::ShellRequestType *)&v10);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 2276LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_9;
  }
  if ( v10 == 3 )
  {
    v5 = KeyboardHosting::TabTipAdapter::RequestPositionAndSizeUpdate((KeyboardHosting::TabTipAdapter *)v3);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 2279LL;
      goto LABEL_4;
    }
  }
  v6 = 0;
LABEL_9:
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6B,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  return 0LL;
}
