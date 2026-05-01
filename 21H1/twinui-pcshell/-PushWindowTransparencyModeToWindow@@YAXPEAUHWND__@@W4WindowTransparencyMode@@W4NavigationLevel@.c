/*
 * XREFs of ?PushWindowTransparencyModeToWindow@@YAXPEAUHWND__@@W4WindowTransparencyMode@@W4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18007EF50
 * Callers:
 *     ?v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ @ 0x18006A370 (-v_PushBoundsToAppView@WindowWrapper@@EEAAXXZ.c)
 *     ?v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x18007EEF0 (-v_OnWindowCreated@WindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_OnWindowCreated@UAPViewWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1802A91B0 (-v_OnWindowCreated@UAPViewWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@UAPViewWrapper@@EEAAX_N0@Z @ 0x1802A9400 (-v_SetDesiredPosition_OnBeforePositionWindow@UAPViewWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___ @ 0x1802BA6A0 (Windows--Internal--ComTaskPool--QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___.c)
 */

void __fastcall PushWindowTransparencyModeToWindow(HWND a1, int a2, int a3)
{
  void *v3; // rdi
  __int64 v6; // rcx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HWND v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = (void *)a2;
  if ( a2 != (unsigned int)GetPropW(a1, L"MaterialProperties.WindowTransparencyMode") )
  {
    SetPropW(a1, L"MaterialProperties.WindowTransparencyMode", v3);
    if ( (unsigned int)(a3 - 4) <= 1
      && (int)CoreIsWindowServiceSupported(a1, &GUID_592e523e_f578_42d3_9b29_307fc423ae43) >= 0 )
    {
      v9 = a1;
      v7 = Windows::Internal::ComTaskPool::QueueTask__lambda_8cb864d560eabf2ff9644d5f66b5c768___(v6, &v9);
      if ( v7 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x20,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\common.cpp",
          (const char *)(unsigned int)v7);
    }
  }
}
