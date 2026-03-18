/*
 * XREFs of NtUserSetThreadInputBlocked @ 0x1C0101E20
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadInputBlocked(int a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  int v7; // ecx
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v10; // rcx
  char v12; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  if ( a1 != 4096 )
  {
    UserSetLastError(87LL, v4, v5);
    v6 = 0LL;
    goto LABEL_7;
  }
  v6 = 0LL;
  v7 = *(_DWORD *)(gptiCurrent + 1232LL);
  if ( !a2 )
  {
    if ( (v7 & 0x8000) != 0 )
      goto LABEL_4;
LABEL_9:
    UserSetLastError(87LL, gptiCurrent, 0x8000LL);
    goto LABEL_7;
  }
  if ( (v7 & 0x8000) != 0 )
    goto LABEL_9;
LABEL_4:
  v6 = 1LL;
  v8 = v7 & 0xFFFF7FFF;
  v9 = v7 | 0x8000;
  if ( !a2 )
    v9 = v8;
  *(_DWORD *)(gptiCurrent + 1232LL) = v9;
LABEL_7:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  UserSessionSwitchLeaveCrit(v10);
  return v6;
}
