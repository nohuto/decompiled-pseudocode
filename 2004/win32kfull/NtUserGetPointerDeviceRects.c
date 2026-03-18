/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C01186F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x1C011880C (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  _OWORD *v9; // rcx
  _OWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _BYTE v15[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v16; // [rsp+38h] [rbp-50h] BYREF
  __int128 v17; // [rsp+50h] [rbp-38h] BYREF

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v15);
  v8 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v16, &v17) )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v10 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v10 = (_OWORD *)MmUserProbeAddress;
    *v10 = *v10;
    *a2 = v16;
    *a3 = v17;
    v8 = 1;
  }
  else
  {
    UserSetLastError(87LL, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v15);
  UserSessionSwitchLeaveCrit(v12, v11, v13);
  return v8;
}
