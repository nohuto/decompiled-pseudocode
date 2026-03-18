/*
 * XREFs of NtUserSetBrokeredForeground @ 0x1C0128E40
 * Callers:
 *     <none>
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0012C50 (IsMessageOnlyWindow.c)
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     IsWindowBeingDestroyed @ 0x1C00C65B8 (IsWindowBeingDestroyed.c)
 *     InternalSetProp @ 0x1C00C7238 (InternalSetProp.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
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
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rcx
  __int64 v12; // rcx
  char v13; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 1LL);
  v2 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( !a1 )
    goto LABEL_17;
  v5 = ValidateHwnd(a1);
  v6 = (_QWORD *)v5;
  if ( !v5 )
    goto LABEL_17;
  if ( !(unsigned int)IsTopLevelWindow(v5) )
    goto LABEL_17;
  if ( v6[15] )
    goto LABEL_17;
  if ( (unsigned int)IsWindowBeingDestroyed((__int64)v6) )
    goto LABEL_17;
  if ( (*(_BYTE *)(v6[5] + 31LL) & 0x10) != 0 )
    goto LABEL_17;
  LOBYTE(v8) = IsMessageOnlyWindow(v7);
  if ( v8 || GetProp((__int64)v6, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.1 + 2), 1LL) )
    goto LABEL_17;
  v9 = *(_DWORD *)(v6[5] + 236LL);
  if ( v9 != 14 && v9 != 4 )
  {
    UserSetLastError(5LL, v3, v4);
LABEL_17:
    v12 = 87LL;
    goto LABEL_18;
  }
  if ( !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) || gptiCurrent != v6[2] )
  {
    v12 = 5LL;
LABEL_18:
    UserSetLastError(v12, v3, v4);
    goto LABEL_13;
  }
  v2 = InternalSetProp((__int64)v6, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.1 + 2), gptiCurrent, 5u);
LABEL_13:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v10);
  return v2;
}
