/*
 * XREFs of NtUserSetWindowGroup @ 0x1C0202BD0
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C007F1B0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C02404AC (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetWindowGroup(int a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int128 v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23; // [rsp+30h] [rbp-18h]
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v24 = a1;
  v23 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  v7 = 0LL;
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a2);
  v10 = v8;
  if ( v8 )
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( (((*(_WORD *)(v9 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v22 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v22;
      *((_QWORD *)&v22 + 1) = v8;
      HMLockObject(v8);
      if ( IAMThreadAccessGranted(gptiCurrent) )
      {
        if ( !(unsigned int)IsTopLevelWindow(v10) || *(_QWORD *)(v10 + 120) )
          goto LABEL_7;
        v18 = *(_QWORD *)(v17 + 456);
        if ( v18 )
          v19 = ***(_QWORD ***)(v18 + 8);
        else
          v19 = -1LL;
        if ( !anonymous_namespace_::GroupManagementEnabledForDesktop(v19) )
        {
          v13 = 5023LL;
          goto LABEL_5;
        }
        if ( a4 > 2 || (a3 & 0xFFFFFFFC) != 0 )
        {
LABEL_7:
          v13 = 87LL;
        }
        else
        {
          v20 = WindowGroupingWindowManagement::SetWindowGroup(&v24, v10, a3);
          if ( v20 >= 0 )
          {
            v7 = 1LL;
            goto LABEL_19;
          }
          v13 = RtlNtStatusToDosError(v20);
        }
      }
      else
      {
        v13 = 5LL;
      }
LABEL_5:
      UserSetLastError(v13, v11, v12);
LABEL_19:
      ThreadUnlock1(v15, v14, v16);
    }
  }
  UserSessionSwitchLeaveCrit(v9);
  return v7;
}
