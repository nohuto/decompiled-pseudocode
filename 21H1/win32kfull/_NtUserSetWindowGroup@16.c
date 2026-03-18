/*
 * XREFs of _NtUserSetWindowGroup@16 @ 0x16A0E5
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F490 (-SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_G.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetWindowGroup(char a1, int a2, int a3, unsigned int a4)
{
  int v4; // ebx
  _DWORD *v5; // eax
  _DWORD *v6; // esi
  int v7; // ecx
  ULONG v8; // ecx
  int v9; // eax
  int v10; // ecx
  NTSTATUS v11; // eax
  int v13; // [esp-4h] [ebp-1Ch]
  int v14; // [esp+Ch] [ebp-Ch] BYREF
  _DWORD *v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  v4 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v5 = (_DWORD *)ValidateHwnd(a2);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(_WORD *)(v5[5] + 30) & 0x3FFF;
    if ( v7 != 669 && v7 != 671 )
    {
      v14 = *(_DWORD *)(_gptiCurrent + 228);
      *(_DWORD *)(_gptiCurrent + 228) = &v14;
      v15 = v5;
      HMLockObject(v5);
      if ( IAMThreadAccessGranted(_gptiCurrent) )
      {
        if ( _IsTopLevelWindow(v6) && !v6[16] )
        {
          v9 = *(_DWORD *)(_gptiCurrent + 248);
          if ( v9 )
            v10 = ***(_DWORD ***)(v9 + 4);
          else
            v10 = -1;
          if ( !anonymous_namespace_::GroupManagementEnabledForDesktop((void *)v10) )
          {
            v8 = 5023;
            goto LABEL_7;
          }
          if ( a4 <= 2 && (a3 & 0xFFFFFFFC) == 0 )
          {
            v11 = WindowGroupingWindowManagement::SetWindowGroup(&a1, v6, a3, a4);
            if ( v11 >= 0 )
            {
              v4 = 1;
              goto LABEL_21;
            }
            v8 = RtlNtStatusToDosError(v11);
LABEL_7:
            UserSetLastError((struct _NT_TIB *)v8);
LABEL_21:
            ThreadUnlock1();
            goto LABEL_22;
          }
        }
        v13 = 87;
      }
      else
      {
        v13 = 5;
      }
      v8 = v13;
      goto LABEL_7;
    }
  }
LABEL_22:
  UserSessionSwitchLeaveCrit();
  return v4;
}
