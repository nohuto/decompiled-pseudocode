/*
 * XREFs of _NtUserUpdateInputContext@12 @ 0xA65E4
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _UpdateInputContext@12 @ 0xA6642 (_UpdateInputContext@12.c)
 */

int __stdcall NtUserUpdateInputContext(int a1, int a2, int a3)
{
  int updated; // esi
  _BYTE v5[8]; // [esp+4h] [ebp-8h] BYREF

  updated = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v5);
  if ( (*_gpsi & 4) != 0 )
  {
    if ( HMValidateHandle(a1, 17) )
      updated = UpdateInputContext(a3);
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x78);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v5);
  UserSessionSwitchLeaveCrit();
  return updated;
}
