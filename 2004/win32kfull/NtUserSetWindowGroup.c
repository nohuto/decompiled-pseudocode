/*
 * XREFs of NtUserSetWindowGroup @ 0x1C0203A40
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C00BEDD0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C024174C (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowGroup(int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rcx
  NTSTATUS v22; // eax
  __int128 v24; // [rsp+20h] [rbp-28h] BYREF
  __int64 v25; // [rsp+30h] [rbp-18h]
  int v26; // [rsp+50h] [rbp+8h] BYREF

  v26 = a1;
  v25 = 0LL;
  v24 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = 0LL;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a2);
  v12 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)(v8 + 40);
    v9 = (*(_WORD *)(v10 + 42) & 0x3FFFu) - 669;
    if ( (v9 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v24;
      *((_QWORD *)&v24 + 1) = v8;
      HMLockObject(v8);
      if ( IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( !(unsigned int)IsTopLevelWindow(v12) || *(_QWORD *)(v12 + 120) )
          goto LABEL_7;
        v20 = *(_QWORD *)(v19 + 448);
        if ( v20 )
          v21 = ***(_QWORD ***)(v20 + 8);
        else
          v21 = -1LL;
        if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v21) )
        {
          v15 = 5023LL;
          goto LABEL_5;
        }
        if ( a4 > 2 || (a3 & 0xFFFFFFFC) != 0 )
        {
LABEL_7:
          v15 = 87LL;
        }
        else
        {
          v22 = WindowGroupingWindowManagement::SetWindowGroup(&v26, v12, a3);
          if ( v22 >= 0 )
          {
            v7 = 1LL;
            goto LABEL_19;
          }
          v15 = RtlNtStatusToDosError(v22);
        }
      }
      else
      {
        v15 = 5LL;
      }
LABEL_5:
      UserSetLastError(v15, v13, v14);
LABEL_19:
      ThreadUnlock1(v17, v16, v18);
    }
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v7;
}
