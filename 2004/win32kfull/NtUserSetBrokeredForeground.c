/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C00BF7B0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     InternalSetProp @ 0x1C002481C (InternalSetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C0029300 (IsWindowBeingDestroyed.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     IsMessageOnlyWindow @ 0x1C00BF910 (IsMessageOnlyWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetBrokeredForeground(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( !a1 )
    goto LABEL_17;
  v5 = ValidateHwnd(a1);
  v6 = (_QWORD *)v5;
  if ( !v5
    || !(unsigned int)IsTopLevelWindow(v5)
    || v6[15]
    || (unsigned int)IsWindowBeingDestroyed((__int64)v6)
    || (*(_BYTE *)(v6[5] + 31LL) & 0x10) != 0
    || (unsigned int)IsMessageOnlyWindow(v7)
    || GetProp((__int64)v6, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, 1LL) )
  {
    goto LABEL_17;
  }
  v8 = *(_DWORD *)(v6[5] + 236LL);
  if ( v8 != 14 && v8 != 4 )
  {
    UserSetLastError(5LL, v3, v4);
LABEL_17:
    v13 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) || gptiCurrent != v6[2] )
  {
    v13 = 5LL;
LABEL_18:
    UserSetLastError(v13, v3, v4);
    goto LABEL_13;
  }
  v2 = InternalSetProp((__int64)v6, *(unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Busy, gptiCurrent, 5u);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v2;
}
