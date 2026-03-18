/*
 * XREFs of NtUserGetRegisteredRawInputDevices @ 0x1C01FBCB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     _GetRegisteredRawInputDevices @ 0x1C01D513C (_GetRegisteredRawInputDevices.c)
 */

__int64 __fastcall NtUserGetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int RegisteredRawInputDevices; // ebx
  unsigned int DLT; // eax
  __int64 v10; // r8
  __int64 v11; // rcx
  char v13; // [rsp+48h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v13);
  if ( a3 == 16 )
  {
    DLT = DLT_RAWINPUT::getDLT();
    GetDomainLockRef(DLT);
    RegisteredRawInputDevices = GetRegisteredRawInputDevices(a1, a2, v10);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError(87LL, v6, v7);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v13);
  UserSessionSwitchLeaveCrit(v11);
  return RegisteredRawInputDevices;
}
