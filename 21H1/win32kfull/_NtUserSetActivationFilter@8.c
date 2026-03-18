/*
 * XREFs of _NtUserSetActivationFilter@8 @ 0x11952
 * Callers:
 *     <none>
 * Callees:
 *     __SetActivationFilter@8 @ 0x119D2 (__SetActivationFilter@8.c)
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsIAMThread@4 @ 0xAC466 (_IsIAMThread@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserSetActivationFilter(int a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  _BYTE v6[8]; // [esp+4h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  if ( IAMThreadAccessGranted(_gptiCurrent) )
  {
    v3 = ValidateHwnd(a1);
    v4 = v3;
    if ( v3 && IsIAMThread(*(_DWORD *)(v3 + 8)) )
      v2 = _SetActivationFilter(v4, a2);
    else
      UserSetLastError(87);
  }
  else
  {
    UserSetLastError(5);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v2;
}
