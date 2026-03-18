/*
 * XREFs of _NtUserClearForeground@0 @ 0x160267
 * Callers:
 *     <none>
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserClearForeground()
{
  int v0; // edi
  int v1; // esi
  _BYTE v3[8]; // [esp+8h] [ebp-8h] BYREF

  v0 = 1;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v3);
  v1 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v1 == _grpdeskRitInput || !IAMThreadAccessGranted(_gptiCurrent) )
  {
    v0 = 0;
    UserSetLastError((struct _NT_TIB *)5);
  }
  else if ( v1 )
  {
    HMAssignmentUnlock(v1 + 44);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v3);
  UserSessionSwitchLeaveCrit();
  return v0;
}
