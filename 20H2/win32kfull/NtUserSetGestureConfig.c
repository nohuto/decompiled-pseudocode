/*
 * XREFs of NtUserSetGestureConfig @ 0x1C0127880
 * Callers:
 *     <none>
 * Callees:
 *     SetGestureConfigSettings @ 0x1C001B478 (SetGestureConfigSettings.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtUserSetGestureConfig(__int64 a1, __int64 a2, unsigned int a3, volatile void *a4, int a5)
{
  __int64 v6; // r14
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  void *v14; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v22; // rcx
  _BYTE v23[16]; // [rsp+48h] [rbp-40h] BYREF
  __int128 v24; // [rsp+58h] [rbp-30h] BYREF
  __int64 v25; // [rsp+68h] [rbp-20h]

  v6 = a3;
  v24 = 0LL;
  v25 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v23);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    *(_QWORD *)&v24 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v24;
    *((_QWORD *)&v24 + 1) = v8;
    HMLockObject(v8);
    if ( a4 && a5 == 12 && (unsigned int)(v6 - 1) <= 0xFF )
    {
      v12 = *(_QWORD *)(v8 + 40);
      if ( *(char *)(v12 + 20) >= 0
        && *(char *)(v12 + 19) >= 0
        && *(_QWORD *)(gptiCurrent + 424LL) == *(_QWORD *)(*(_QWORD *)(v8 + 16) + 424LL) )
      {
        v14 = (void *)Win32AllocPoolWithQuota((unsigned int)(12 * v6), 1667724117LL);
        if ( v14 )
        {
          CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v13);
          ProbeForRead(a4, 12 * v6, CurrentProcessWow64Process != 0 ? 1 : 4);
          memmove(v14, (const void *)a4, (unsigned int)(12 * v6));
          v9 = SetGestureConfigSettings((struct tagWND *)v8, v16, v6, (__int64)v14);
          Win32FreePool(v14);
LABEL_10:
          ThreadUnlock1(v18, v17, v19);
          goto LABEL_11;
        }
        v22 = 8LL;
      }
      else
      {
        v22 = 1400LL;
      }
    }
    else
    {
      v22 = 87LL;
    }
    UserSetLastError(v22, v10, v11);
    goto LABEL_10;
  }
LABEL_11:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v23);
  UserSessionSwitchLeaveCrit(v20);
  return v9;
}
