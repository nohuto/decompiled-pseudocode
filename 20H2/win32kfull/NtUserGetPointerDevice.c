/*
 * XREFs of NtUserGetPointerDevice @ 0x1C01FAAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _GetPointerDeviceInfoProperties @ 0x1C01EEED0 (_GetPointerDeviceInfoProperties.c)
 */

__int64 __fastcall NtUserGetPointerDevice(__int64 a1, volatile void *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  if ( !a1 || !a2 )
  {
    v7 = 87LL;
    goto LABEL_7;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v10, 0LL) )
  {
    v7 = 6LL;
LABEL_7:
    UserSetLastError(v7, v5, v6);
    goto LABEL_8;
  }
  ProbeForWrite(a2, 0x438uLL, 4u);
  GetPointerDeviceInfoProperties((__int64)a2, v10);
  v4 = 1;
LABEL_8:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  UserSessionSwitchLeaveCrit(v8);
  return v4;
}
