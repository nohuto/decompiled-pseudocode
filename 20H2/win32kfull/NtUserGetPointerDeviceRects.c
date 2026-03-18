/*
 * XREFs of NtUserGetPointerDeviceRects @ 0x1C0119540
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _GetPointerDeviceRects @ 0x1C011965C (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetPointerDeviceRects(__int64 a1, _OWORD *a2, _OWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // ebx
  _OWORD *v9; // rcx
  _OWORD *v10; // rcx
  __int64 v11; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v14; // [rsp+38h] [rbp-50h] BYREF
  __int128 v15; // [rsp+50h] [rbp-38h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v13);
  v8 = 0;
  if ( a1 && a2 && a3 && (unsigned int)GetPointerDeviceRects(a1, &v14, &v15) )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (_OWORD *)MmUserProbeAddress;
    *v9 = *v9;
    v10 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v10 = (_OWORD *)MmUserProbeAddress;
    *v10 = *v10;
    *a2 = v14;
    *a3 = v15;
    v8 = 1;
  }
  else
  {
    UserSetLastError(87LL, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v13);
  UserSessionSwitchLeaveCrit(v11);
  return v8;
}
