/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00F7EB0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _RegisterRawInputDevices @ 0x1C00F84B0 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r13
  SIZE_T v10; // r14
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int *v13; // rdi
  unsigned int v14; // ebx
  unsigned int *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v20[8]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v21; // [rsp+78h] [rbp-70h] BYREF
  __int64 v22; // [rsp+88h] [rbp-60h]
  SIZE_T v23; // [rsp+90h] [rbp-58h]
  __int128 v24; // [rsp+A0h] [rbp-48h]
  __int64 v25; // [rsp+B0h] [rbp-38h]

  v21 = 0LL;
  v22 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  PsGetCurrentProcessWin32Process(v6);
  if ( Src && a2 && a3 == 16 && (v9 = a2, v10 = 16LL * a2, ProbeForRead(Src, v10, 8u), v23 = v10, v10 <= 0xFFFFFFFF) )
  {
    v11 = v10;
    v12 = Win32AllocPoolWithQuota((unsigned int)v10, 1769108309LL);
    v13 = (unsigned int *)v12;
    if ( !v12 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v12, &v21, (__int64)Win32FreePool);
    if ( (unsigned int)v10 >= v10 )
      v11 = 16 * a2;
    memmove(v13, Src, v11);
    v24 = gObjDummyLock;
    v25 = *((_QWORD *)&gObjDummyLock + 2);
    v14 = RegisterRawInputDevices(v13, a2, 0LL);
    v15 = v13 + 1;
    do
    {
      EtwTraceAuditApiRegisterRawInputDevices(
        v14,
        *((unsigned __int16 *)v15 - 2),
        *((unsigned __int16 *)v15 - 1),
        *v15,
        *(_QWORD *)(v15 + 1),
        gptiCurrent,
        *(_QWORD *)(*gptiCurrent + 1232LL),
        *(_QWORD *)(*gptiCurrent + 1072LL),
        *(_DWORD *)(*gptiCurrent + 1152LL));
      v15 += 4;
      --v9;
    }
    while ( v9 );
    if ( v13 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  }
  else
  {
    v14 = 0;
    UserSetLastError(87LL, v7, v8);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v17, v16, v18);
  return (int)v14;
}
