/*
 * XREFs of NtUserSetDisplayMapping @ 0x1C0202800
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _SetDisplayMapping @ 0x1C01EFC14 (_SetDisplayMapping.c)
 */

__int64 __fastcall NtUserSetDisplayMapping(unsigned __int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // [rsp+40h] [rbp+18h] BYREF
  int v16; // [rsp+44h] [rbp+1Ch]
  char v17; // [rsp+48h] [rbp+20h] BYREF

  v16 = -1;
  v15 = 0x2000;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  v4 = 0;
  if ( !(unsigned __int8)CheckAccess(*(_QWORD *)(gptiCurrent + 416LL) + 880LL, &v15) )
  {
    EtwTraceUIPISystemError(*(_QWORD *)(gptiCurrent + 416LL), 0LL, 10LL);
LABEL_3:
    v7 = 5LL;
LABEL_4:
    UserSetLastError(v7, v5, v6);
    goto LABEL_5;
  }
  v12 = HMValidateHandle(a1, 0x13u);
  v13 = v12;
  if ( !v12 || (*(_DWORD *)(v12 + 200) & 0x80u) == 0 )
  {
    UserSetLastError(6LL, v5, v6);
    v7 = 6LL;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v12 + 184) & 0x2000) != 0 )
  {
    UserSetLastError(5LL, v5, v6);
    goto LABEL_3;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v12 + 480) + 24LL) - 6) <= 1 )
    goto LABEL_3;
  v14 = ValidateHmonitor(a2);
  if ( v14 )
  {
    v4 = 1;
    if ( ValidateHmonitorNoRip(*(_QWORD *)(v13 + 1344)) != v14 )
      v4 = SetDisplayMapping(*(_QWORD *)(v13 + 480), v14);
    *(_DWORD *)(v13 + 1352) = 1;
  }
LABEL_5:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v4;
}
