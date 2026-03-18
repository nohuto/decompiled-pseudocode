/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C01560C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C01561B8 (_GetOwnerTransformedMonitorRect.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  _BYTE v15[16]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v16; // [rsp+40h] [rbp-18h] BYREF

  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = ValidateHmonitor(a2);
    if ( v10 && a4 )
    {
      GetOwnerTransformedMonitorRect(v8, v10, a3, &v16);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v16;
      v9 = 1;
    }
    else
    {
      UserSetLastError(87LL, v11, v12);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit(v13);
  return v9;
}
