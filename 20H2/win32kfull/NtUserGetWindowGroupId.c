/*
 * XREFs of NtUserGetWindowGroupId @ 0x1C00073D0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetWindowGroupId(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rsi
  int v5; // ebx
  char v7; // [rsp+68h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v5 = 0;
  if ( v4 )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v7);
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_DWORD *)MmUserProbeAddress;
    *a2 = *(_DWORD *)(v4 + 308);
    v5 = 1;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v7);
  }
  UserSessionSwitchLeaveCrit();
  return v5;
}
