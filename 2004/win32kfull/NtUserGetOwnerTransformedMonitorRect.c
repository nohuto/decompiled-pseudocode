/*
 * XREFs of NtUserGetOwnerTransformedMonitorRect @ 0x1C0153790
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _GetOwnerTransformedMonitorRect @ 0x1C0153888 (_GetOwnerTransformedMonitorRect.c)
 */

__int64 __fastcall NtUserGetOwnerTransformedMonitorRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rsi
  int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _BYTE v17[16]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v18; // [rsp+40h] [rbp-18h] BYREF

  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  v8 = ValidateHwnd(a1);
  v9 = 0;
  if ( v8 )
  {
    v10 = ValidateHmonitor(a2);
    if ( v10 && a4 )
    {
      GetOwnerTransformedMonitorRect(v8, v10, a3, &v18);
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_OWORD *)MmUserProbeAddress;
      *a4 = v18;
      v9 = 1;
    }
    else
    {
      UserSetLastError(87LL, v11, v12);
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit(v14, v13, v15);
  return v9;
}
