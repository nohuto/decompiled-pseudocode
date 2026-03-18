/*
 * XREFs of _NtUserBlockInput@4 @ 0x15FC2F
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     __BlockInput@4 @ 0x147ED5 (__BlockInput@4.c)
 */

int __stdcall NtUserBlockInput(void *a1)
{
  int v1; // esi
  _BYTE v3[8]; // [esp+4h] [ebp-8h] BYREF

  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v3);
  v1 = _BlockInput(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v3);
  UserSessionSwitchLeaveCrit();
  return v1;
}
