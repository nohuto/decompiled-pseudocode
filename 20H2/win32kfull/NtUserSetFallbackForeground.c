/*
 * XREFs of NtUserSetFallbackForeground @ 0x1C0201B10
 * Callers:
 *     <none>
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0046FA0 (_IsTopLevelWindow.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _SetFallbackForeground @ 0x1C01D2484 (_SetFallbackForeground.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetFallbackForeground(__int64 a1, int a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( IAMThreadAccessGranted(gptiCurrent) )
  {
    if ( a1 )
    {
      v8 = ValidateHwnd(a1);
      if ( !v8 )
        goto LABEL_8;
      v5 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x2FFF;
      if ( (_DWORD)v5 == 669 || !(unsigned int)IsTopLevelWindow(v8) )
        goto LABEL_8;
    }
    else
    {
      v9 = 0LL;
    }
    if ( v9 )
    {
      if ( !a2 )
      {
LABEL_8:
        v7 = 87LL;
        goto LABEL_3;
      }
    }
    else if ( a2 )
    {
      goto LABEL_8;
    }
    v4 = SetFallbackForeground(v9, a2);
    goto LABEL_15;
  }
  v7 = 5LL;
LABEL_3:
  UserSetLastError(v7, v5, v6);
LABEL_15:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
