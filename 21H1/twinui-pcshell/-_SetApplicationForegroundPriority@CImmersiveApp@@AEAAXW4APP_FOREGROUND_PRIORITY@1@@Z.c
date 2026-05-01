/*
 * XREFs of ?_SetApplicationForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@@Z @ 0x180023B3C
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180023310 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 *     ?HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z @ 0x180159AD0 (-HandleDeactivation@CImmersiveApp@@UEAAJW4ZBID@@@Z.c)
 *     ?HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z @ 0x180159D80 (-HandleNewProcess@CImmersiveApp@@UEAAXPEAX@Z.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180159F80 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x18004D014 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 *     ?_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@@Z @ 0x1800867C8 (-_SetProcessForegroundPriority@CImmersiveApp@@AEAAXW4APP_FOREGROUND_PRIORITY@1@PEAXKPEAUHWND__@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18012BF14 (-ResultFromKnownLastError@@YAJXZ.c)
 *     WPP_SF_lDqd @ 0x180160784 (WPP_SF_lDqd.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveApp::_SetApplicationForegroundPriority(__int64 a1, unsigned int a2)
{
  unsigned int v4; // ebx
  CApplicationManagerUtility *v5; // rax
  HWND v6; // rdx
  HWND v7; // r15
  __int64 v8; // r8
  __int64 v9; // r8
  char *v10; // rbp
  int Error; // esi
  DWORD dwProcessId; // [rsp+70h] [rbp+8h] BYREF
  char *v13; // [rsp+80h] [rbp+18h]

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 808) || a2 == *(_DWORD *)(a1 + 812) )
    return;
  if ( !*(_QWORD *)(a1 + 472)
    || (v5 = (CApplicationManagerUtility *)(*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)(a1 + 464) + 32LL))(**(_QWORD **)(a1 + 464)),
        (v7 = (HWND)v5) == 0LL) )
  {
    v8 = *(_QWORD *)(a1 + 816);
    if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v8, 0LL, 0LL);
    return;
  }
  if ( !CApplicationManagerUtility::IsValidWindow(v5, v6) )
    return;
  if ( !GetWindowThreadProcessId(v7, &dwProcessId) )
  {
    Error = -2147024890;
LABEL_19:
    if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      LOBYTE(v4) = a2 == 0;
      WPP_SF_lDqd(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v9, v4, dwProcessId, v7, Error);
    }
    return;
  }
  v10 = (char *)OpenProcess(0x200u, 0, dwProcessId);
  v13 = v10;
  if ( v10 )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error >= 0 )
    CImmersiveApp::_SetProcessForegroundPriority(a1, a2, v10, dwProcessId, v7);
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v10);
  if ( Error < 0 )
    goto LABEL_19;
}
