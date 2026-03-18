/*
 * XREFs of NtUserRegisterRawInputDevices @ 0x1C00FF080
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _RegisterRawInputDevices @ 0x1C00FF680 (_RegisterRawInputDevices.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 */

__int64 __fastcall NtUserRegisterRawInputDevices(void *Src, unsigned int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r13
  SIZE_T v12; // r14
  unsigned int v13; // ebx
  __int64 v14; // rax
  unsigned int *v15; // rdi
  unsigned int v16; // ebx
  unsigned int *v17; // rsi
  __int64 v18; // rcx
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
  PsGetCurrentProcessWin32Process(v7, v6, v8);
  if ( Src && a2 && a3 == 16 && (v11 = a2, v12 = 16LL * a2, ProbeForRead(Src, v12, 8u), v23 = v12, v12 <= 0xFFFFFFFF) )
  {
    v13 = v12;
    v14 = Win32AllocPoolWithQuota((unsigned int)v12, 1769108309LL);
    v15 = (unsigned int *)v14;
    if ( !v14 )
      ExRaiseStatus(-1073741801);
    PushW32ThreadLock(v14, &v21, (__int64)Win32FreePool);
    if ( (unsigned int)v12 >= v12 )
      v13 = 16 * a2;
    memmove(v15, Src, v13);
    v24 = gObjDummyLock;
    v25 = *((_QWORD *)&gObjDummyLock + 2);
    v16 = RegisterRawInputDevices(v15, a2, 0LL);
    v17 = v15 + 1;
    do
    {
      EtwTraceAuditApiRegisterRawInputDevices(
        v16,
        *((unsigned __int16 *)v17 - 2),
        *((unsigned __int16 *)v17 - 1),
        *v17,
        *(_QWORD *)(v17 + 1),
        gptiCurrent,
        *(_QWORD *)(*gptiCurrent + 1232LL),
        *(_QWORD *)(*gptiCurrent + 1072LL),
        *(_DWORD *)(*gptiCurrent + 1152LL));
      v17 += 4;
      --v11;
    }
    while ( v11 );
    if ( v15 )
      PopAndFreeAlwaysW32ThreadLock((__int64)&v21);
  }
  else
  {
    v16 = 0;
    UserSetLastError(87LL, v9, v10);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v20);
  UserSessionSwitchLeaveCrit(v18);
  return (int)v16;
}
