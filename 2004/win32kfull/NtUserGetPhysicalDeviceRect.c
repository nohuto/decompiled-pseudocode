/*
 * XREFs of NtUserGetPhysicalDeviceRect @ 0x1C01FB840
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetPhysicalDeviceRect(__int64 a1, _OWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  char v14; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( !a1 || !a2 )
  {
    v7 = 87LL;
    goto LABEL_9;
  }
  if ( !(unsigned int)ResolveMouseOrPointerDevice(a1, &v13, 0LL) )
  {
    v7 = 6LL;
LABEL_9:
    UserSetLastError(v7, v5, v6);
    goto LABEL_10;
  }
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_OWORD *)MmUserProbeAddress;
  *v8 = *v8;
  *a2 = *(_OWORD *)(v13 + 140);
  v4 = 1;
LABEL_10:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v4;
}
