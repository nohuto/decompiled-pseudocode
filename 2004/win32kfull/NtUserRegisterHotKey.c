/*
 * XREFs of NtUserRegisterHotKey @ 0x1C003D250
 * Callers:
 *     <none>
 * Callees:
 *     _RegisterHotKey @ 0x1C003D584 (_RegisterHotKey.c)
 *     IAMThreadAccessGranted @ 0x1C0066514 (IAMThreadAccessGranted.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserRegisterHotKey(__int64 a1, __int64 a2, int a3, int a4)
{
  int v7; // ebx
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // rcx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-28h]
  _BYTE v15[24]; // [rsp+30h] [rbp-18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  v7 = 0;
  if ( (unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
    goto LABEL_12;
  if ( (a3 & 0xFFFF95F0) != 0 )
  {
    v13 = 1004LL;
    goto LABEL_13;
  }
  if ( (a3 & 0x800) == 0 )
    goto LABEL_4;
  if ( !(unsigned int)IAMThreadAccessGranted(gptiCurrent) )
  {
LABEL_12:
    v13 = 5LL;
    goto LABEL_13;
  }
  if ( !a4 )
  {
    v13 = 87LL;
LABEL_13:
    UserSetLastError(v13);
    goto LABEL_7;
  }
LABEL_4:
  if ( !a1 )
  {
    v8 = 0LL;
    goto LABEL_6;
  }
  v8 = (struct tagWND *)ValidateHwnd(a1);
  if ( v8 )
  {
LABEL_6:
    LODWORD(BugCheckParameter2) = a4;
    v7 = RegisterHotKey(v8, BugCheckParameter2);
  }
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v7;
}
