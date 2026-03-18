/*
 * XREFs of _NtUserGetRegisteredRawInputDevices@12 @ 0x164796
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetRegisteredRawInputDevices@8 @ 0x144474 (__GetRegisteredRawInputDevices@8.c)
 */

int __stdcall NtUserGetRegisteredRawInputDevices(char *a1, unsigned int *a2, int a3)
{
  int RegisteredRawInputDevices; // esi
  int DLT; // eax
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( a3 == 12 )
  {
    DLT = DLT_RAWINPUT::getDLT();
    GetDomainLockRef(DLT);
    RegisteredRawInputDevices = _GetRegisteredRawInputDevices(a1, a2);
  }
  else
  {
    RegisteredRawInputDevices = -1;
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return RegisteredRawInputDevices;
}
