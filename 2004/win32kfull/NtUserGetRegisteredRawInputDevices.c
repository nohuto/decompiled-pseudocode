/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x1C01FCB20
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _GetRegisteredRawInputDevices @ 0x1C01D5DFC (_GetRegisteredRawInputDevices.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int RegisteredRawInputDevices; // ebx
  unsigned int DLT; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v14; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v14);
  if ( a3 == 16 )
  {
    DLT = DLT_RAWINPUT::getDLT();
    GetDomainLockRef(DLT);
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87LL, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v14);
  UserSessionSwitchLeaveCrit(v11, v10, v12);
  return RegisteredRawInputDevices;
}
