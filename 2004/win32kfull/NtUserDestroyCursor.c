/*
 * XREFs of NtUserDestroyCursor @ 0x1C0064850
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x1C00AF4C4 (-_DestroyCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 */

_BOOL8 __fastcall NtUserDestroyCursor(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _BOOL8 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v15; // rcx
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandle(a1, v4);
  v9 = 0LL;
  v10 = v5;
  if ( v5 )
  {
    if ( a2 )
    {
      if ( a2 != 1 )
      {
        v15 = 87LL;
LABEL_11:
        UserSetLastError(v15);
        goto LABEL_6;
      }
    }
    else if ( PsGetCurrentProcess(v7, v6, v8) != gpepCSRSS
           && *(_QWORD *)(v10 + 24) != PsGetCurrentProcessWin32Process(gpepCSRSS) )
    {
LABEL_10:
      v15 = 5LL;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(v10 + 48) == v10 )
    {
      v9 = _DestroyCursor((struct tagCURSOR *)v10, a2);
      goto LABEL_6;
    }
    goto LABEL_10;
  }
LABEL_6:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v9;
}
